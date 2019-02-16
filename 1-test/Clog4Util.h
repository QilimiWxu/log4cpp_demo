#ifndef CLOG4UTIL_INCLUDE
#define CLOG4UTIL_INCLUDE

#include "log4cpp/Category.hh"
#include "log4cpp/Appender.hh"
#include "log4cpp/FileAppender.hh"
#include "log4cpp/OstreamAppender.hh"
#include "log4cpp/Layout.hh"
#include "log4cpp/BasicLayout.hh"
#include "log4cpp/Priority.hh"
#include "log4cpp/PropertyConfigurator.hh"

#include <iostream>
#include <string>

using namespace std;

namespace log4Util {

	int Init(string initfilename);

	void close();

	void Debug(const char* tag, const char* msg);

	void Debug(const char* msg);

	void Info(const char* tag, const char* msg);

	void Info(const char* msg);

	void Error(const char* tag, const char* msg);

	void Error(const char* msg);
}
#endif
