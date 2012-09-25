#include 	<stdio.h>
#include 	<stdlib.h>
#include	<string.h>
#include 	<unistd.h>

int main ()
{
	printf("\nLe code source sera copié dans le pere et le fils.\n\n");
	printf("La duplication du code à lieu DANS la fonction fork ainsi la fonction fork fait un retour dans le pere ET un dans le fils.\n\n");

	switch (fork())
	{
		case -1 :
			printf("\n\nAie ! Une erreur s'est produite lors du fork .");
			exit(1);
		case 0 :
			printf("\n\nJe suis le fils.");
			break;
		default:
			printf("\n\nJe suis le pere");
			break;
	}
	printf("\nCe qui suit sera copié dans le pere ET le fils.\n"); 
	printf("Chaque processus est independant. Si on ne change rien le fils partage le code source du processus pere.\n\n");

}
