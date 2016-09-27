/*
 * display.h
 *
 *  Created on: Sep 27, 2016
 *      Author: lidq
 */

#ifndef MODULES_DISPLAY_DISPLAY_H_
#define MODULES_DISPLAY_DISPLAY_H_

#include <typedef.h>
#include <engine.h>

//不显示输出
#define __DISPLAY_DISABLED__
//多信息同行显示
#define	__DISPLAY_MODE_MORE__
//显示频度
#define	DISPLAY_SPEED				(10)

int __init(s_engine *engine, s_params *params);

int __destory(s_engine *e, s_params *p);

void run();

#endif /* MODULES_DISPLAY_DISPLAY_H_ */