/*
 * new_main.c
 *
 * Created: 1/24/2023 2:56:34 PM
 * Author : mohamed
 */ 

#include "Application/app.h"

/*
	1. initiate the program 
	2. start the program and repeat it to the end
*/

int main(void)
{
    APP_init();
	
    while (1) 
    {
		APP_start();
    }
}

