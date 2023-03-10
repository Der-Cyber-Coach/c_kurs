// Pointer Arrays

/*
- werden im Heap gespeichert (dynamische Größe)
- mit malloc
*/

#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int length = 6;
    //integer pointer mit der Länge von length * Größe des integers
    int *array = (int *)malloc(length * sizeof(int));

    for (unsigned int i =0; i < length; i++)
    {
        array[i]=i;
        printf("i = %d \t : ", i);
        printf("array[%d] = %d\n",i,array[i]);
    };
    free(array);
    //nach einem free sollte der Array auf NULL zeigen, damit er nicht auf fremden
    //Speicher zeigt.
    array = NULL;

    return EXIT_SUCCESS;
}