//2. Teil Pointer Arrays


#include <stdlib.h>
#include <stdio.h>


int *createArray(unsigned int length, int value)
{
    //nur Reservierung auf dem Heap-Speicher
    int *array = (int *)malloc(length * sizeof(int));

    if( array == NULL)
    {
        printf("Kein Speicher vorhanden, Abbruch!\n");
        return NULL;
    }

    for (unsigned int i =0; i < length; i++)
    {
        array[i]=value;
        printf("i = %d \t : ", i);
        printf("array[%d] = %d\n",i,array[i]);
    };
    return array;
}

int *freeArray(int *array)
{
    if (array != NULL)
    {
    free(array);
    };
    return NULL;
}


int main (void)
{
    int length = 6;
    //integer Pointer mit der Funktion erstellen
    int *array=createArray(length,4);
    array = freeArray(array);


    return EXIT_SUCCESS;
}