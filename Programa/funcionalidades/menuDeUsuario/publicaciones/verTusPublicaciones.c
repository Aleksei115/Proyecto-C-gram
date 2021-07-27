void crearArchivoPublicaciones(usuario);
void imprimirCola(publicacion **,usuario);
void menuDeUsuario(usuario);
// void crearNodoPublicacion();

void verTusPublicaciones(usuario usuario_logeado){

    system("clear");

    int id = 1;                                       //Asigna el id a las publicaciones conforme las vaya leyendo

    crearArchivoPublicaciones(usuario_logeado);                 

    char buffArchivo[50] = "usuarios/";

    char buffImg[23] = "/img/publicaciones.txt";

    strcat(buffArchivo,usuario_logeado.user_name);
    
    strcat(buffArchivo,buffImg);                            //Crea el string para acceder al archivo publicaciones.txt de cada usuario

    // Comienza el agregar las publicaciones
    
    FILE *archivo = NULL;

    char nombreArchivo[18] = "publicaciones.txt"; 

    char buffCadenaDeNombrePublicacion[70];

    archivo = fopen(buffArchivo,"a");

    if (archivo == NULL)
        error(1);

    fscanf(archivo,"%s",buffCadenaDeNombrePublicacion);

    while (1){
        
        printf("%s",buffCadenaDeNombrePublicacion);

        break;

        if (feof(archivo) || strcmp(buffCadenaDeNombrePublicacion,nombreArchivo)  == 0)
            break;

        crearNodoPublicacion(buffCadenaDeNombrePublicacion,id,&(usuario_logeado.cabeza_publi),&(usuario_logeado.cola_publi));                   //agrega un nodo publicacion a la cola de publicaciones
        
        id++;

    }

    fclose(archivo);


    // imprimirCola(&(usuario_logeado.cabeza_publi),usuario_logeado);

}



void crearArchivoPublicaciones(usuario usuario_log){

    char buff1[49] = "rm -f usuarios/";

    char buff2[50] = "touch usuarios/";

    char buff3[50] = "ls usuarios/";

    char buffComando[40] = " >> usuarios/";

    char buffImg[23] = "/img/publicaciones.txt";

    char buffImg2[5] = "/img";

    //Elimina el archivo publicaciones.txt

    strcat(buff1,usuario_log.user_name);

    strcat(buff1,buffImg);

    system(buff1);             

    // Crea el archivo publicaciones.txt 

    strcat(buff2,usuario_log.user_name);

    strcat(buff2,buffImg);

    system(buff2);       

    //llena de nuevo el archivo usuarios.txt con los usuarios que existan al momento de logearse el usuario

    strcat(buff3,usuario_log.user_name);    

    strcat(buff3,buffImg2);

    strcat(buff3,buffComando);

    strcat(buff3,usuario_log.user_name);

    strcat(buff3,buffImg);
    
    system(buff3);     

    exit(1);


}


void imprimirCola(publicacion ** cabeza, usuario logeado){

    int op;

    system("clear");

    publicacion *aux = *cabeza;

    if (aux == NULL){
        system("clear");
        printf("Lo sentimos no tienes publicaciones !!!");
        menuDeUsuario(logeado);
    }

    FILE *archivo = NULL;

    char buff1[] = "usuarios/";

    char nombreArchivo[100];

    char buff2[] = "/img/";

    char bufferRenglon[150];

    if (archivo == NULL)
        error(1);


    while (aux != NULL){
        memset(nombreArchivo,0,100);                //Resetea la cadena

        strcat(nombreArchivo,buff1);
        strcat(nombreArchivo,logeado.user_name);
        strcat(nombreArchivo,buff2);
        strcat(nombreArchivo,aux->nombreImagen); 

        archivo = fopen(nombreArchivo,"a");

        fscanf(archivo,"%s",bufferRenglon);

        while (1){

            printf("%s\n",bufferRenglon);

            if (feof(archivo))
                break;

            fscanf(archivo,"%s",bufferRenglon);

        }


        printf("\n\nPulsa 1 para pasar a la siguiente Publicacion: ");

        fclose(archivo);

        if(scanf("%d",&op) == 1 && op ==1)
            aux = aux->publicacion_sig;
        else
            error(2);

    }


    

}