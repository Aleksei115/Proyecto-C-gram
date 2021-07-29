void menuDeUsuario();
void agregarPublicaciones(usuario usuario_log){

    char bufferUsuario[24] = "usuarios/";

    strcat(bufferUsuario, usuario_log.user_name);
    strcat(bufferUsuario, "/img");

    system("clear");

    int op;

    while (1) {

        printf("\n*************************************************************************************\n");
        printf("\n\t           A G R E G A R   P U B L I C A C I O N E S\n\n");
        printf("\n\tSi desea agregar una publicacion añade tu imagen txt a esta ruta:\n\n\n\n");
        printf("\n\tRUTA --->  %s\n\n\n\n", bufferUsuario);
        printf("\n*************************************************************************************\n");
        printf("\nIntroduce 1 para volver al menu \n");
        printf("\n-->  ");
        if(scanf("%d", &op) == 1){
            system("clear");
            menuDeUsuario(usuario_log);
        }
        else 
            error(2);

        
        
           

    }
    exit(1);

}