class NoBuildingZonesUtils
{	
	const static string noBuildZonesDataPath = "$profile:/FValues/FTweaksNoBuildZones.json";	
	
	static ref array<ref NoBuildZone> getNoBuildZones() 
	{
		ref array<ref NoBuildZone> noBuildZones = new ref array<ref NoBuildZone>();
		
		JsonFileLoader<ref array<ref NoBuildZone>>.JsonLoadFile(noBuildZonesDataPath, noBuildZones);
		
		return noBuildZones;
	}
	
	static bool checkIfPlayerInNoBuildZone(PlayerBase player, array<ref NoBuildZone> noBuildZones) 
	{
		float playerNoBuildZoneDistance;
		NoBuildZone noBuildZone;

		for (int j = 0; j< noBuildZones.Count(); j++)
		{
			noBuildZone = noBuildZones.Get(j);

			if (vector.Distance(noBuildZone.getPlacePos().ToVector(), player.GetPosition()) <= noBuildZone.getPlaceRadius()) 
			{
				return true;
			}
		}
		
		return false;
	}
}