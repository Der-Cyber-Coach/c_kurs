#include <stdlib.h>
#include <stdio.h>

//1D Array wäre normale Liste
//2D Array wäre eine Matrix



int main ()
{
    printf("1. Weg: Über eine for-Schleife\n\n");

    //Weg 1 über eine for-Schleife
    double M [3][4];


    for(int i = 0; i < 3; i++)
    {
        for (int j =0; j <3; j++)
        {
            M[i][j]= i*j;
        }
    }

    for(int i = 0; i < 3; i++)
    {
        for (int j =0; j <3; j++)
        {
            printf("M[%d][%d]= %lf\n",i,j,M[i][j]);
        }
    };

    printf("----------------------------\n\n");
    printf("2. Weg: Initializer List: \n\n");

    //Weg 2 initalizer list
    //Erster Wert ist die Anzahl der Zeilen!

    double N[3][2] = {{1,2},{2,3},{3,4}};

    for(int i = 0; i < 3; i++)
    {
        for (int j =0; j <3; j++)
        {
            printf("M[%d][%d]= %lf\n",i,j,N[i][j]);
        }
    }



    return EXIT_SUCCESS;
}