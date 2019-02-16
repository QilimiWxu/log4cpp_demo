
#include "Clog4Util.h"


namespace log4Util {

	int Init(string initfilename) {
		try {
			log4cpp::PropertyConfigurator::configure(initfilename);
		}
		catch (log4cpp::ConfigureFailure&f) {
			std::cout << "Configure Problem " << f.what() << std::endl;//失败
			return -1;
		}
		return 0;
	}

	void close() {
		try {
			log4cpp::Category::shutdown();
		}
		catch (...) {

		}
	}

	void Debug(const char* tag, const char* msg) {
		try {
			log4cpp::Category& t_debug = log4cpp::Category::getInstance(tag);
			t_debug.debug(msg);
		}
		catch (...) {

		}
	}

	void Debug(const char* msg) {
		try {
			log4cpp::Category& t_debug = log4cpp::Category::getInstance(string("Debug"));
			t_debug.debug(msg);
		}
		catch (...) {

		}
	}

	void Info(const char* tag, const char* msg) {
		try {
			log4cpp::Category& t_debug = log4cpp::Category::getInstance(tag);
			t_debug.info(msg);
		}
		catch (...) {

		}
	}

	void Info(const char* msg) {
		try {
			log4cpp::Category& t_info = log4cpp::Category::getInstance(string("Info"));
			t_info.info(msg);
		}
		catch (...) {

		}
	}

	void Error(const char* tag, const char* msg) {
		try {
			log4cpp::Category& t_debug = log4cpp::Category::getInstance(tag);
			t_debug.error(msg);
		}
		catch (...) {

		}
	}

	void Error(const char* msg) {
		try {
			log4cpp::Category& t_error = log4cpp::Category::getInstance(string("Error"));
			t_error.error(msg);
		}
		catch (...) {

		}
	}
}
