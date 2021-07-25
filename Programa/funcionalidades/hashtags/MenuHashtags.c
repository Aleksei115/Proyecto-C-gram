#include "funcionesHashtag.h"

void Hashtags(){

    int opcion;

    while (1) {

        printf("************************************************************");
        printf("\n\n\t\t\t # H A S H T A G S\n\n\n");
        mostrarHashtags(aux);
        printf("\nQue deseas hacer?\n");
        printf("\n1 ---> Agregar #Hagstag \n");
        printf("\n2 ---> Eliminar #Hagstag \n");
        printf("\n3 ---> Salir al Menu\n\n");
        printf("************************************************************\n");
        printf("\n\nSelecciona una opcion por favor: \n");
        

        if (scanf("%d", &opcion) == 1){

            switch (opcion) {
                case 1:
                    AgregarHashtags(&aux);
                    break;

                case 2:
                    EliminarHashtag(&aux);
                    break;
                    

                case 3:
                
                    //Aqui va el regreso a menu usuario
                    return;

                    
            }

        }
        else {
            printf("\nOpcion no valida\n\nSaliendo del programa...\n\n");
            break;
        }

    }
}