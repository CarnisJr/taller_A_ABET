#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){

    int chance, timeScanning, maxCadenaPeces = 0;
    int contPeces = 0, contPecesSeguidos = 0, auxTime;

    srand(time(NULL));

    //Ingreso de del tiempo en segundos para el escaneo
    do
    {

        printf("Ingrese el tiempo de escaneo: ");
        scanf("%d", &timeScanning);
        auxTime = timeScanning;

        if(auxTime <= 0){
            printf("ERROR ingresa un valor positivo y mayor a cero\n\n");
            system("pause");
            system("clear");
        }
    }while(auxTime <= 0);
    
    //Conteo de peces que pasan debajo del submarino
    for(auxTime; auxTime > 0; auxTime--){

        chance = rand() % 100 + 1;

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

    system("pause");
    return 0;
}