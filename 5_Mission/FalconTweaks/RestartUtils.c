class RestartUtils
{
	const static string restartConfigPath = TweaksConstants.RESTART_CONFIG_DATA_PATH;
	
	
	static RestartConfig loadRestartConfig()
	{
		if (FileExist(restartConfigPath))
		{
			RestartConfig config = new RestartConfig();
			
			JsonFileLoader<RestartConfig>.JsonLoadFile(restartConfigPath, config);
			
			return config;
		}	
		
		return null;
	}
}