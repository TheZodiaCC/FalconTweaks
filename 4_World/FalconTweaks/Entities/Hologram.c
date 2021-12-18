modded class Hologram
{
	override void EvaluateCollision(ItemBase action_item = null)
	{
		#ifdef FALCON_ITEMS
		if (m_Projection.IsInherited(Explosive) || m_Projection.IsInherited(Safe))
		{
			SetIsColliding(false);
			return;
		}
		#endif
		
		if (m_Projection.IsInherited(FenceKit) || m_Projection.IsInherited(TerritoryFlagKit))
		{
			SetIsColliding(false);
		}
		else
		{
			super.EvaluateCollision(action_item);
		}
	}
}