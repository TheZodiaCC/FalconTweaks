class TweaksMessagesUtils
{
	static void messageClient(string message, PlayerBase player)
	{
		GetRPCManager().SendRPC("FalconTweaks", "tweaksMessagePlayerC", new Param1<string>(message), true,  player.GetIdentity());
	}
}