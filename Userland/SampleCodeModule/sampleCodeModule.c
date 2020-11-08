/* sampleCodeModule.c */
#include <stdio.h>
#include <Shell.h>

char * v = (char*)0xB8000 + 79 * 2;

static int var1 = 0;
static int var2 = 0;


int main() {
	//All the following code may be removed
	*v = 'X';
	*(v+1) = 0x74;

	stdio_init();
	init_shell();

	while (1) {
		int ch = getChar();
		keyPressedShell(ch);

	}

	//Test if BSS is properly set up
	if (var1 == 0 && var2 == 0)
		return 0xDEADC0DE;

	return 0xDEADBEEF;
}
