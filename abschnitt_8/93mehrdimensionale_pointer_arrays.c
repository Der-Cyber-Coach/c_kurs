//ponter auf pointer

#include <stdio.h>
#include <stdlib.h>

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

int main ()
{
    return EXIT_SUCCESS;
}