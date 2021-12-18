modded class MissionGameplay 
{
	ref Blanker blanker;
	
	
	void MissionGameplay() {
		GetRPCManager().AddRPC( "FalconTweaks", "tweaksMessagePlayerC", this, SingeplayerExecutionType.Server );
		
		blanker = new Blanker();
	}
	
	private void tweaksMessagePlayerC(CallType type, ParamsReadContext ctx, PlayerIdentity sender, Object target) {
		Param1<string> data;
        if ( !ctx.Read(data)) return;
		
		if (type == CallType.Client)
        {
			if (data.param1)
			{
				string message = "[FalconServer] " + data.param1;
				GetGame().Chat(message, "colorAction");
			}
		}
	}
	
	override void OnMissionLoaded()
	{
		blanker.run();
	}
}