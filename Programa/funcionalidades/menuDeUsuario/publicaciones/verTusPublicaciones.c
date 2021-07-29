
void imprimirCola(publicacion**);
void menuDeUsuario(usuario);


void verTusPublicaciones(usuario usuario_logeado){

    cabeza_publi = NULL;
    cola_publi = NULL;
    
    id = 0;
    int op;

    char buffP[18] = "publicaciones.txt";        

    char buffArchivo[50] = "usuarios/";

    char buffImg[45] = "/img/archivoPublicaciones/publicaciones.txt";

    strcat(buffArchivo,usuario_logeado.user_name);
    
    strcat(buffArchivo,buffImg);                            //Crea el string para acceder al archivo publicaciones.txt de cada usuario

    // Comienza el agregar las publicaciones
    
    FILE *archivo = NULL;


    char buffNombrePubli[10][30];

    for (int i = 0; i < 10; i++)    
        memset(buffNombrePubli[i],0,30);

    

    archivo = fopen(buffArchivo,"r");

    if (archivo == NULL)
        error(1);

    
    // Llena el array nombresPublicaciones con los nombres de las primeras 10 publicaciones
    
    if(fscanf(archivo,"%s",buffNombrePubli[id]) != 0){             //Obtengo al menos un dato
        
        while (1){
            if(feof(archivo))
                break;
            id++;
            fscanf(archivo,"%s",buffNombrePubli[id]);
        }
    }
    else
        printf("No tienes Publicaciones...\n");

    fclose(archivo);

    for (int i = 0; i < id; i++)
        crearNodoPublicacion(buffNombrePubli[i],i,&cabeza_publi,&cola_publi,usuario_logeado.user_name);

    // printf("%p %p %s %s\n",cola_publi, cabeza_publi, cabeza_publi->nombreImagen, cola_publi->nombreImagen);

    imprimirCola(&cabeza_publi);

    printf("\n\n\tYa no tienes publicaciones\n\nIntroduce 1 para volver al menu \n");
    printf("\n-->  ");
    if(scanf("%d", &op) == 1){
        system("clear");
        menuDeUsuario(usuario_logeado);
    }
    else 
        error(2);
}





