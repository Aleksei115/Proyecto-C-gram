void imprimirCola(publicacion **cabeza){

    publicacion *aux = *cabeza;
    FILE *r = NULL;
    char caracter;
    // char buffNombreArchivo[10][57];

    char buffNombre[55] = "usuarios/";

    char buffLinea[150];


    while (aux != NULL){

        strcat(buffNombre,aux->nombreUsuario);
        strcat(buffNombre,"/img/");
        strcat(buffNombre,aux->nombreImagen);

        aux = aux->publicacion_sig;
    }

        printf("%s",buffNombre);
        r = fopen(buffNombre,"rt");

        if (r == NULL)
            error(1);

        while(!feof(r)){
            fgets(buffLinea,150,r);
            printf("%s",buffLinea); 
        }	    
        fclose(r);


}