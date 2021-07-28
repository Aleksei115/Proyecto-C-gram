
void imprimirCola(publicacion **);
void menuDeUsuario(usuario);


void verTusPublicaciones(usuario usuario_logeado){
    
    id = 0;

    char buffP[18] = "publicaciones.txt";        

    char buffArchivo[50] = "usuarios/";

    char buffImg[45] = "/img/archivoPublicaciones/publicaciones.txt";

    strcat(buffArchivo,usuario_logeado.user_name);
    
    strcat(buffArchivo,buffImg);                            //Crea el string para acceder al archivo publicaciones.txt de cada usuario

    // Comienza el agregar las publicaciones
    
    FILE *archivo = NULL;


    char buffNombrePubli[10][30];

    archivo = fopen(buffArchivo,"r+");

    if (archivo == NULL)
        error(1);

    
    // Llena el array nombresPublicaciones con los nombres de las primeras 10 publicaciones
    
    if(fgets(buffNombrePubli[id],30,archivo) != NULL){             //Obtengo al menos un dato
        
        while (1){
            if(feof(archivo))
                break;
            id++;
            fgets(buffNombrePubli[id],30,archivo);
        }
    }
    else
        printf("No tienes Publicaciones...\n");

    fclose(archivo);

    for (int i = 0; i < id; i++)
        crearNodoPublicacion(buffNombrePubli[i],i,&cabeza_publi,&cola_publi,usuario_logeado.user_name);

    imprimirCola(&cabeza_publi);

  

    // -------------------------------------------------------------------------------------------
    // Aqui llenamos un array de las rutas de publicaciones



    // publicacion *aux = usuario_logeado.cabeza_publi;



    // int x = 0;

    // int regresar;


    // if (aux == NULL){
    //     printf("Lo sentimos no tienes Publicaciones.....\n");
    //     return;
    // }

    // while (aux != usuario_logeado.cola_publi->publicacion_sig){

    //     strcpy(buffNombreArchivo[x],rUsuarios);
    //     strcat(buffNombreArchivo[x],usuario_logeado.user_name);
    //     strcat(buffNombreArchivo[x],rImg);
    //     strcat(buffNombreArchivo[x],aux->nombreImagen);

    //     printf("%s\n",buffNombreArchivo[x]);
    //     archivo = fopen(buffNombreArchivo[x],"r+");

    //     if (archivo == NULL)
    //         error(1);

    //     while (!feof(archivo)){
    //         fgets(buff,60,archivo);
    //         printf("%s\n",buff);
    //     }
        
    //     printf("\n\n\tPulsa 1 para pasar a la siguiente publicacion: ");

    //     if (scanf("%d",&regresar) == 0 && regresar != 1)
    //         error(2);

        
    //     fclose(archivo);

    //     aux = aux->publicacion_sig;
    //     x++;

  
    // }

    // free(aux);




    // imprimirCola(&(usuario_logeado.cabeza_publi),&(usuario_logeado.cola_publi),usuario_logeado);

}





