#include <stdio.h>
#include <ctype.h>
#include <signal.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>  
#include <thread>
#include <time.h>

#include "Clog4Util.h"

int main(int argc, char *argv[])
{
    if(argc < 2){
        printf("Usage: %s base exponent \n", argv[0]);
        return 1;
    }

    log4Util::Init(argv[1]);

    printf("test log4cpp\n");

    //存放日志信息
    char strLog_[1024] = { 0 };

    //建日志写到strLog_中
    sprintf(strLog_, "test error log， %s:%d.", __FILE__, __LINE__);

    //写入日志
    log4Util::Error(strLog_);

    //赋空
    memset(strLog_, 0, 1024);

    //建日志写到strLog_中
    sprintf(strLog_, "test error log， %s:%d.", __FILE__, __LINE__);

    //写入日志
    log4Util::Debug(strLog_);

    //赋空
    memset(strLog_, 0, 1024);

    //建日志写到strLog_中
    sprintf(strLog_, "test error log， %s:%d.", __FILE__, __LINE__);

    //写入日志
    log4Util::Info(strLog_);
	
    //赋空
    memset(strLog_, 0, 1024);

    //建日志写到strLog_中
    sprintf(strLog_, "test error log，tag:1 %s:%d.", __FILE__, __LINE__);

    //写入日志
    log4Util::Error("1", strLog_);

    //赋空
	memset(strLog_, 0, 1024);

    //建日志写到strLog_中
	sprintf(strLog_, "test error log，tag:2 %s:%d.", __FILE__, __LINE__);

    //写入日志
    log4Util::Debug("2", strLog_);

    //赋空
    memset(strLog_, 0, 1024);

    //建日志写到strLog_中
    sprintf(strLog_, "test error log，tag:3 %s:%d.", __FILE__, __LINE__);

    //写入日志
    log4Util::Info("3", strLog_);

	log4Util::close();
	
    return 0;
}
