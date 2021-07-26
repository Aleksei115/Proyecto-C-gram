
#include "usuario.h"

void menuDeUsuario(usuario usuario_logeado){

    system("clear");

    int opcion;

    while (1) {

        printf("\n****************************************************************************\n");
        printf("\n\t   B I E N V E N I D O   A  TU  MENU    DE  C - G R A M\n");
        printf("\n\t\t       Pantalla Inicial\n\n \nSelecciona una opcion:\n\n");
        printf("\n1 ---> Ver  tus publicaciones\n");
        printf("\n2 ---> Agregar Publicaciones  \n");
        printf("\n3 ---> Eliminar Publicaciones \n");
        printf("\n4 ---> Agregar Amigos \n");
        printf("\n5 ---> Ver publicaciones de Amigos \n");
        printf("\n6 ---> Eliminar Amigos \n");
        printf("\n7 ---> Ver el top 5 hashtags usado en México\n");
        printf("\n8 ---> Salir de la aplicacion \n");
        printf("\n\t\t\t\t\t\t\t Usuario logeado:\n");
        printf("\t\t\t\t\t\t\t %s \n",usuario_logeado.nombre);

        printf("\n****************************************************************************\n");
        printf("\n\nIntroduce la opcion: \n");
        
        if (scanf("%d", &opcion) == 1 ){

            switch (opcion) {

                case 1:
                    publicaciones(usuario_logeado,1);
                    break;

                // case 2:
                //     inicioSesion();
                //     break;

                // case 3:
                //     agregarUsuarios();
                //     break;

                case 4:
                    amigos(usuario_logeado);
                    break;  

                // case 5:
                //     agregarUsuarios();
                //     break;

                // case 6:
                //     inicioSesion();
                //     break;   

                // case 7:
                //     inicioSesion();
                //     break;  

                // case 8:
                //     printf("Gracias por usar la aplicacion, Adios!!\n");
                //     exit(1);
                    
            }


        }
        else{
            printf("\nOpcion no valida\n Salindo de la aplicacion\n");
            error(2);
        }
           

    }
    exit(1);
}
