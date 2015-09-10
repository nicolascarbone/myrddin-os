#ifndef SCREEN_H
#define SCREEN_H

// load splash screen
void screen_load_splash(void);

// Clear the screen to all black.
void screen_clear(void);

// Write a single character out to the screen.
void screen_put(char c);

// Output a null-terminated ASCII string to the monitor.
void screen_write(char *c);

#endif