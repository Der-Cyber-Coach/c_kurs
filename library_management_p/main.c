/*
library management system, based on:
https://www.youtube.com/watch?v=7WOtTStiuFE&list=PL3F9Hs9aMou0og6Dzfwx__h1jjb8e81vR&index=5


*/

#include <stdio.h>
#include <stdlib.h>

void menu_display()
{
    printf("---------- MAIN MENU -------- \n\n");
    printf("Druecken Sie die entsprechende Taste!\n\n");
    printf("1. Buch hinzufuegen\n");
    printf("2. Buchinformation\n");
    printf("3. Buchsuche\n");
    printf("4. Verlassen\n\n");
    printf("-----------------------------\n\n");

}

/// @brief Eingabefunktion
/// @param wert 
/// @return gibt den Wert der Eingabe zurück
int eingabe(int wert)
{    
    scanf("%d",&wert);
    return wert;
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