/*
 *  test.cpp, Copyright (c) 2017, cyongxue@163.com
 *  All rights reserved
 *
 *  Created on: 2017年4月12日
 *      Author: yongxue@cyongxue@163.com
 */

#include "log.h"

int main() {
	Log::instance("./logs", "guard.log");

	Log::instance()->set_daemon(0);
	Log::instance()->set_log_level(LogLevel::INFO);


	debug("Test", "%s", "hello world");
	info("Daemon", "%s", "==========Daemon Daemon");

	warn("Test", "%s", "hello world");
//	fatal("Fatal", "%s", "hello world");
	error("Daemon", "%s", "==========Daemon Daemon");
	return 0;
}


