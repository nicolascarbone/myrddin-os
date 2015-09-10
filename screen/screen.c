/* 	
	The area of memory known as the framebuffer is accessible 
	just like normal RAM, at address 0xB8000 
*/


//const char VIDEO_MEMORY_ADDR = 0xb8000;

void screen_clear() {
	
	/* this loops clears the screen
	* there are 25 lines each of 80 columns; each element takes 2 bytes */

	char *video_memory = (char*)0xb8000;

	int blank = 0x20; // space

   	int i;
   	for (i = 0; i < 80 * 25; i++)
   	{
    	video_memory[i] = blank;
   	}

   /*

	char *vidptr = (char*)0xb8000;
	unsigned int i = 0;
	unsigned int j = 0;
	
	while(j < 80 * 25 * 2) {
		// blank character 
		vidptr[j] = ' ';
		// attribute-byte - light grey on black screen 
		vidptr[j+1] = 0x07; 		
		j = j + 2;
	}	
	
	*/
}


void screen_write(char *str) {

	char *vidptr = (char*)0xb8000;
	unsigned int i = 0;
	unsigned int j = 0;

	j = 0;

	// this loop writes the string to video memory
	while(str[j] != '\0') {
		// the character's ascii
		vidptr[i] = str[j];
		// attribute-byte: give character black bg and light grey fg
		vidptr[i+1] = 0x07;
		++j;
		i = i + 2;
	}

}


void screen_load_splash() {	

	char *str = "Splash Time baby!";

	screen_write(str);	

}