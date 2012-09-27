#include 	<stdio.h>
#include 	<stdlib.h>
#include	<string.h>

int main ()
{
	system("echo ps -x sleep 5; ps -x; sleep 5 ; clear");
	system("echo ps -au x sleep 5; ps -axu; sleep 5 ; clear");
	system("echo ps -f ; ps -f ; echo man ps");
}
