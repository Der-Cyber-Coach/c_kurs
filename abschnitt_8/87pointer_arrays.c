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
    //integer pointer mit der Länge von length * gGröße des integers
    int *array = (int *)malloc(length * sizeof(int));

    for (unsigned int i =0; i < length; i++)
    {
        printf("%d", i);
        printf("array[i] = %d\n",array[i]);
    };
    free(array);
    //nach einem free sollte der Array auf NULL zeigen, damit er nicht auf fremden
    //Speicher zeigt.
    array = NULL;

    return EXIT_SUCCESS;
}