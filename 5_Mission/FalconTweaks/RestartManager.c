class RestartManager
{
	private ref RestartConfig config;
	
	private bool autoRestarts;
	private string restartMessage;
	private int messageStartMin;
	private int maxUptime;
	
	private int currentLeftUptime;
	
	
	void loadConfig()
	{
		config = RestartUtils.loadRestartConfig();
	}
	
	void init()
	{
		autoRestarts = config.autoRestarts;
		restartMessage = config.restartMessage;
		messageStartMin = config.messageStartMin;
		maxUptime = config.maxUptime;
		
		currentLeftUptime = maxUptime;
	}
	
	void update()
	{
		if (autoRestarts)
		{
			currentLeftUptime--;
		
			if (currentLeftUptime <= messageStartMin)
			{
				sendRestartMessage();
			}
			
			if (currentLeftUptime <= 0)
			{
				kickPlayers();
				GetGame().DisconnectSessionForce();
				GetGame().RestartMission();
			}
		}
	}

	void kickPlayers()
	{
		array<Man> players = new array<Man>();
		GetGame().GetPlayers(players);
		
		PlayerBase player;
		
		for (int i = 0; i < players.Count(); i++)
		{
			player = PlayerBase.Cast(players[i]);
			
			GetGame().DisconnectPlayer(player.GetIdentity(), player.GetIdentity().GetPlainId());
		}
	}
	
	void sendRestartMessage()
	{
		array<Man> players = new array<Man>();
		GetGame().GetPlayers(players);
		
		for (int i = 0; i < players.Count(); i++)
		{
			TweaksMessagesUtils.messageClient(restartMessage + currentLeftUptime.ToString() + " minutes", PlayerBase.Cast(players[i]));
		}
	}
}
