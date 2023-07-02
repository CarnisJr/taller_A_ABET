#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include "funciones.h"

int main(void){

    system("clear");

    int timeScanning, auxTime;
    //Variables para menu
    int selector;

    srand(time(NULL));

    do{

        printf("---MENU---\n\n");
        printf("1. Escaneo automatico\n2. Escaneo manual\n3. Salir\n\n");
        scanf("%d", &selector);
        system("clear");

        switch(selector){
        case 1:

            printf("---ESCANEO AUTOMATICO---\n\n");
            timeScanning = (rand() % 100) + 1;
            conteoPeces(timeScanning);
            system("pause");
            system("clear");
            break;
        
        case 2:

            do
            {

                printf("---ESCANEO MANUAL---\n\n");
                printf("Ingrese el tiempo de escaneo: ");
                scanf("%d", &timeScanning);

                if(timeScanning <= 0){
                    printf("ERROR ingresa un valor positivo y mayor a cero\n\n");
                    system("pause");
                    system("clear");
                }
            }while(timeScanning <= 0);

            conteoPeces(timeScanning);
            system("pause");
            system("clear");
            break;
        case 3:

            printf("---SALIENDO---\n\n");
            system("pause");
            system("clear");        
            break;
        default:

            printf("Opcion no valida\n\n");
            system("pause");
            system("clear");        
            break;
        }
    }while(selector != 3);
    return 0;
}