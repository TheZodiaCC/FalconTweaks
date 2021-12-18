modded class Construction
{
	override bool IsColliding(string part_name)
	{
		#ifdef FALCON_ITEMS
		if (GetParent().IsInherited(Explosive) || GetParent().IsInherited(Safe))
		{
			return false;
		}
		
		#endif
		
		if (GetParent().IsInherited(FenceKit) || GetParent().IsInherited(TerritoryFlagKit))
		{
			return false;
		}
		
		return super.IsColliding(part_name);
	}	
}