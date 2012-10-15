#include <stdio.h> 
#include <stdlib.h> 
#include <pthread.h> 
#include <semaphore.h> 
#include <unistd.h> 


sem_t mutex;


void* affichage (void* name)
{
    int i, j;
    for(i = 0; i < 10; i++) {
        sem_wait(&mutex); //Attendre la liberation 

        for(j=0; j<5; j++) printf("%s ",(char*)name);

        sched_yield(); // liberation du processuer sans se bloquer, pour etre sur d'avoir des problemes 

        for(j=0; j<5; j++) printf("%s ",(char*)name);

        printf("\n");

        sem_post(&mutex); // Increment du semaphore
    }
    return NULL;
} 


int main (void)
{ 
    pthread_t filsA, filsB;
    
    sem_init(&mutex, 0, 1);
    printf("\n\nExemple : éviter un mélange des affichages réalisés par les deux threads.\n\n");	
	printf("\n");
    if (pthread_create(&filsA, NULL, affichage, "AA")) { 
        perror("pthread_create"); 
        exit(EXIT_FAILURE); 
    } 
    if (pthread_create(&filsB, NULL, affichage, "BB")) { 
        perror("pthread_create"); 
        exit(EXIT_FAILURE); 
    } 
	
    if (pthread_join(filsA, NULL)) 
        perror("pthread_join"); 
	
    if (pthread_join(filsB, NULL)) 
        perror("pthread_join"); 
	
    printf("Fin du pere\n") ;
    return (EXIT_SUCCESS);
}
