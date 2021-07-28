
void imprimirCola(publicacion);
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

    archivo = fopen(buffArchivo,"r");

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

    imprimirCola(*cola_publi);


}





