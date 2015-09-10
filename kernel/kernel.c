/*
*  kernel.c
*/

#include "../utils/stdio.h"
#include "../screen/screen.h"
#include "../console/console.h"


void kmain(void) {

	screen_clear();	
	
	/* 	because we are using x86 family processors, 
		we need to load the gdt */
	// load_gdt();

	screen_load_splash();	

	//mem_init();

	console_init();

	//kernel_init();

	//cpu_init();

}