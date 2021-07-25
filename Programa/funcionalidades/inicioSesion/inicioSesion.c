#include "inicioSesion.h"


void inicioSesion(){

    char buff2[10], buff3[10];
    int buff_id, vef_id,comprobar,op;

                
    system("clear");

    printf("Introduce el usuario: \n");
    printf("--> ");
    if(scanf("%s",buff2) == 0)
        error(3);

    system("clear");

    printf("Introduce el password: \n");
    printf("--> "); 
    if(scanf("%s",buff3) == 0)
        error(3);

    switch (buscarEnArchivo(buff2,buff3)){

        case 1:
            printf("Lo sentimos, password Incorrecto\n");
            break;

        case 2:
            printf("Lo sentimos, Usuario no encontrado\n");
            break;
    
    }

    system("clear");
    printf("\nError al iniciar Sesion...\n");
    printf("\tIntroduce 1 para volver a la pantalla principal...\n");
    printf("\nOpcion: ");

    if(scanf("%d",&op) == 1 ){
        if (op == 1)
            MenuPrincipal();
        else
            error(2);
    }

    else
        error(2);


}