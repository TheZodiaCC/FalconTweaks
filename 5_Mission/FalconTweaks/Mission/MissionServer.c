modded class MissionServer
{
	private int restartUpdateTick = 60;
	private int restartCT;
	private int nTimeRestartTweaks = 0;
	
	private ref RestartManager restartManager;
	
	
	void MissionServer()
	{
		restartManager = new RestartManager();
	}
	
	override void OnInit()
	{
		super.OnInit();
	}
	
	override void OnMissionLoaded()
	{
		restartManager.loadConfig();
		restartManager.init();
	}
	
	override void TickScheduler( float timeslice )
	{	
		super.TickScheduler( timeslice );
		
		restartCT = GetGame().GetTime() * 0.001;
		
		if (restartCT >= nTimeRestartTweaks + restartUpdateTick)
		{
			restartManager.update();
		
			nTimeRestartTweaks = restartCT;
		}
	}
}