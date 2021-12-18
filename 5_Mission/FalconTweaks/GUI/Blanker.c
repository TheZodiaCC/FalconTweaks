class Blanker
{
	private Widget widgetRoot;
	
	private bool isBlankerOn = false;
	private const int blankerTime = 20000;
	
	//Constructor
	void Blanker() 
	{		
		widgetRoot = GetGame().GetWorkspace().CreateWidgets("FalconTweaks/GUI/Layouts/Blanker.layout");
		
		widgetRoot.Show(false);
	}
	
	//Deconstructor
	void ~Blanker() 
	{
        if ( widgetRoot )
        	widgetRoot.Unlink();
    }
	
	bool getIsBlankerOn() 
	{
		return isBlankerOn;
	}
	
	void setIsBlankerOn(bool value) 
	{
		isBlankerOn = value;
	}
	
	void showBlanker() 
	{
		if (!isBlankerOn)
		{
			widgetRoot.Show(true);
			setIsBlankerOn(true);
		}
	}
	
	void hideBlanker() 
	{
		if (isBlankerOn)
		{
			widgetRoot.Show(false);
			setIsBlankerOn(false);
		}
	}
	
	void run()
	{
		showBlanker();
		GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(hideBlanker,  blankerTime, false);
	}
}
	
	
