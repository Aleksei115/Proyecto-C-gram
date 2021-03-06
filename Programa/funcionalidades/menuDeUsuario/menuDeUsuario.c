
#include "usuario.h"


void menuDeUsuario(usuario usuario_logeado){

    system("clear");

    int opcion;

    while (1) {

        printf("\n****************************************************************************\n");
        printf("\n\t   B I E N V E N I D O   A   T U   M E N U    D E   C - G R A M\n");
        printf("\n\t\t       Pantalla Inicial\n\n \nSelecciona una opcion:\n\n");
        printf("\n1 ---> Ver  tus publicaciones\n");
        printf("\n2 ---> Agregar Publicaciones  \n");
        printf("\n3 ---> Eliminar Publicaciones \n");
        printf("\n4 ---> Agregar Amigos \n");
        printf("\n5 ---> Ver mis Amigos \n");
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

                case 2:
                    publicaciones(usuario_logeado, 2);
                   break;

                case 3:
                    publicaciones(usuario_logeado, 3);
                    break;

                 case 4:
                    amigos(usuario_logeado,1);
                    break;  

                case 5:
                    amigos(usuario_logeado,2);
                    break;

                case 6:
                    amigos(usuario_logeado,3);
                    break;   

                 case 7:
                    Hashtags();
                    break;  

                 case 8:
                    system("clear");
                    printf("\nGracias por usar C - Gram, Adios!!\n");
                    exit(1);
                    
            }


        }
        else{
            printf("\nOpcion no valida\n Saliendo de la aplicacion\n");
            error(2);
        }
           

    }
    exit(1);
}
