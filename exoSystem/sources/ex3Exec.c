#include 	<stdio.h>
#include 	<stdlib.h>
#include	<string.h>
#include 	<unistd.h>

int main ()
{
	execl("/bin/echo","echo","Ce code remplace le code source originel. Pensez a jetter un coup d'oeil au code source. Dans sources/ex3Exec.c .",NULL); // Ne pas oublier le NULL comme dernier argument.
	printf("Si exec reussit ce message ne s'affiche pas car la fonction ls remplacera le code source du programme");
}
