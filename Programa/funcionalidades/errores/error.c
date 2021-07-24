

void error(int tipo_de_error){

    system("clear");

    switch (tipo_de_error){

        case 1:
                printf("\n\nLo sentimos,hubo un error con el archivo...\nSaliendo del programa");
            break;

        case 2:
                printf("\n\nLo sentimos,No introdujo un número correcto...\nSaliendo del programa");
            break;

        case 3:
                printf("\n\nLo sentimos,No introdujo un string correcto...\nSaliendo del programa");
            break;
        
        default:
            printf("\n\nFatal error,No podemos reconocer cual fue el error\nSaliendo del programa");
            break;
    }

    exit(1);


}