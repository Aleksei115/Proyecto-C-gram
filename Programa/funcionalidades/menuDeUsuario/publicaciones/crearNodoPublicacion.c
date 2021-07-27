void crearNodoPublicacion(char nombrePublicacion[30], int id, publicacion **cabeza, publicacion **cola){

    if(strcmp(nombrePublicacion,"publicaciones.txt") == 1)
        return;


    if(id == 10)
        printf("Lo sentimos llegaste al maximo de publicaciones\nSi deseas puedes eliminar publicaciones");
    else{
        
        publicacion *nueva_publi = (publicacion*)malloc(sizeof(publicacion));
        
        nueva_publi->id = id;
        strcpy(nueva_publi->nombreImagen,nombrePublicacion);
        nueva_publi->publicacion_sig = NULL;

        if (*cabeza == NULL){
            *cabeza = nueva_publi;
            *cola = nueva_publi;
        }
        else{
            publicacion *aux = *cola;

            aux->publicacion_sig = nueva_publi;
            *cola = nueva_publi;
            
        }
        
    }

}