void agregarHashtagArchivo(hashtags pila_hashtags){

    // Agrega los Hashtags de la pila en el archivo 
    // de la publicacion

    FILE *ptr = NULL;

    ptr = fopen("img/imagenOriginal.txt", "a");

    if (ptr == NULL)
        error(1);
    
    while(aux != NULL){

        fprintf(ptr, "%s\n", aux->etiqueta);

        aux = aux ->hashtag_sig;
        }

    fclose(ptr);        
}