#include <iostream>
#include "src/Log.h";

/*
	Always good to write how we might use it
	can then write tests against before
	writing the code

	m_ means member and tells private.
	because of how cpp compiles code main function must come last
*/


class Logger
{
	private:
		int m_logLevel = logLevelInfo;

	public:
		int logLevelError = 10;
		int logLevelWarning = 11;
		int logLevelTrace = 12;
		int logLevelInfo = 13;

		void Info(int logLevel)
		{
			if (logLevel < logLevelInfo)
				Warn("Logging Error");
		}

		void SetLevel(int level) 
		{
			m_logLevel = level;
		}

		void Warn(const char* message)
		{
			std::cout << message << std::endl;
		}
};

//int main()
//{
//	Logger _logger;
//
//	_logger.Info(12);
//
//	std::cin.get();
//}