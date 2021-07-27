void agregarUsuarios();                 
void inicioSesion();
void error(int);

void MenuPrincipal(){

    int opcion;

    while (1) {

        printf("\n****************************************************************************\n");
        printf("\n\t   B I E N V E N I D O   A   C - G R A M\n");
        printf("\n\t\t       Pantalla Inicial\n\n \nSelecciona una opcion:\n\n");
        printf("\n1 ---> Crea un perfil \n");
        printf("\n2 ---> Iniciar sesion \n");
        printf("\n3 ---> Salir de la aplicacion \n");
        printf("\n\n\n\t\t\t\t\t\t\t Creado por:\n");
        printf("\t\t\t\t\t\t\t Fabian Armenta\n");
        printf("\t\t\t\t\t\t\t Aleksei Garcia\n");
        printf("\n****************************************************************************\n");
        printf("\n\nIntroduce la opcion: \n");
        

        if (scanf("%d", &opcion) == 1 ){

            switch (opcion) {

                case 1:
                    agregarUsuarios();
                    break;

                case 2:
                    inicioSesion();
                    break;    

                case 3:
                    system("clear");
                    printf("\nGracias por usar C - Gram, Adios!!\n");
                    exit(1);
                    
            }


        }
        else{
            printf("\nOpcion no valida\n Salindo de la aplicacion\n");
            error(2);
        }
           

    }
}