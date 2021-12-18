modded class ActionDeployObject: ActionDeployObject
{		
	override void OnStartServer( ActionData action_data )
	{
		PlayerBase player = action_data.m_Player;

		if (!NoBuildingZonesUtils.checkIfPlayerInNoBuildZone(player, NoBuildingZonesUtils.getNoBuildZones()))
		{
			super.OnStartServer(action_data);
		}
		else
		{
			TweaksMessagesUtils.messageClient(TweaksMessagesConstants.BUILD_IN_NOBUILD_ZONE, player);
		}
	}
}