void crearNodoPublicacion(char nombrePublicacion[30], int id,publicacion **cabeza, publicacion **cola, char usuario[11]){


    if(id == 10)
        printf("Lo sentimos llegaste al maximo de publicaciones\nSi deseas puedes eliminar publicaciones\nEl programa solo tomara 10 publicaciones");
    else{
        
        publicacion *nueva_publi = (publicacion*)malloc(sizeof(publicacion));
        
        nueva_publi->id = id++;
        strcpy(nueva_publi->nombreImagen,nombrePublicacion);
        strcpy(nueva_publi->nombreUsuario,usuario);
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