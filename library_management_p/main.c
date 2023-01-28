/*
library management system, based on:
https://www.youtube.com/watch?v=7WOtTStiuFE&list=PL3F9Hs9aMou0og6Dzfwx__h1jjb8e81vR&index=5


*/

#include <stdio.h>
#include <stdlib.h>
#include "funktionen.h"



/// @brief Eingabefunktion
/// @param wert 
/// @return gibt den Wert der Eingabe zurück
int eingabe(int wert)
{    
    scanf("%d",&wert);
    return wert;
}

char addBook()
{
    return 0; 
}


int main()
{
    

    int input;
    menu_display();
    eingabe(input);
    switch (input)
    {
    case 4:
        return EXIT_SUCCESS;
        break;
    
    default:
        break;
    }
    


    

    return EXIT_SUCCESS;
    }