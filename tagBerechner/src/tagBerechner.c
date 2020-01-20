/*
 ============================================================================
 Name        : tagBerechner.c
 Author      : Tobias E
 Version     :
 Copyright   : Your copyright notice
 Description : Tagberechnung
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	puts("test"); /* prints test */


	int tage [12] = {31,28,31,30,31,30,31,31,30,31,30,31};



	int tag = 0;
	int monat = 0;
	int jahr = 0;

	int tagBerechner = 0;

	printf("Bitte geben Sie eine korrekten Tag an: ");

	// Eingabe von Tag
//	    scanf("%d",&tag);

	printf("Bitte geben Sie eine korrekten Monat an: ");

	// Eingabe von Tag
//	scanf("%d",&monat);

	printf("Bitte geben Sie eine korrektes Jahr an: ");

    // Eingabe von Tag
    scanf("%d",&jahr);


    if (schaltjahrBerechnung(jahr) == 1){

    	printf("Kein Schaltjahr");
    } else {
    	printf("Schaltjahr");
    }

    validDate(tag,monat,jahr);



	return 0;
}



int validDate(int tag, int monat, int jahr){

	if(tag || monat || jahr < 1){
		return 1;
	}

	if(monat > 12 ){
		return 1;

	}



}


// schaltJahrBerechnung
// return 1 bei Schaltjahr
// return 0 bei keinem Schaltjahr

int schaltjahrBerechnung(int jahr){


    // Jahr ohne Rest durch 4 teilbar -> nein kein Schaltjahr
        if (jahr % 4 == 0)
        {
            // Jahr ohne Rest durch 100 teilbar -> nein ein Schaltjahr
            if(jahr % 100 == 0)
            {
                // Jahr ohne Rest durch 400 teilbar -> ja ein Schaltjahr
                if(jahr % 400 == 0)
                {
                	return 1;
                }
                // Jahr ohne Rest durch 400 teilbar -> nein kein Schaltjahr
                else
                {
                	return 0;
                }
            }
            else
            {
                return 0;
            }
        }
        else
        {
            return 1;
        }


}
