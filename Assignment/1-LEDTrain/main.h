#ifndef MAIN_H
#define MAIN_H

/* Please use this file to use all architecture dependent contents like Port Informations, system specific header files etc. */
#include "pic_specific.h"

#define OFF				0x00
int flag = 1;
int cond = 1;

void left_to_right(void);
void right_to_left(void);

#endif
