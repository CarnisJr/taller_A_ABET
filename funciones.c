#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void conteoPeces(int timeScanning){

    int chance, auxTime, maxCadenaPeces = 0, contPecesSeguidos = 0, contPeces = 0;
    
    auxTime = timeScanning;
    //Conteo de peces que pasan debajo del submarino
    for(auxTime; auxTime > 0; auxTime--){

        chance = (rand() % 100) + 1;

        if(chance <= 50){
            printf("T ");

            if(contPecesSeguidos > maxCadenaPeces)
                maxCadenaPeces = contPecesSeguidos;
            
            contPecesSeguidos = 0;
        }else{

            printf("P ");
            contPeces++;
            contPecesSeguidos++;
        }
    }
    printf("F \n");
    printf("Tiempo de escaneo: %d\n", timeScanning);
    printf("Cantidad total de peces: %d\n", contPeces);
    printf("Cantidad de peces seguidos: %d\n", maxCadenaPeces);

    
    

}