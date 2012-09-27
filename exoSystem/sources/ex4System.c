#include 	<stdio.h>
#include 	<stdlib.h>
#include	<string.h>
#include 	<unistd.h>

int main ()
{
	system("ls");
	printf("Cette ligne s'affiche car system appelle ls au sein du programme\n\n");
}
