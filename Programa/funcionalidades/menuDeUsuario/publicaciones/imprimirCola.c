void imprimirCola(publicacion ** cabeza, usuario logeado){


    publicacion *aux = *cabeza;

    if (aux == NULL){
        printf("Lo sentimos no tienes elementos en la COLA");
        return;
    }
    
    printf("Cabeza--> ");

    while (aux != NULL){
        printf("%s ",aux->nombreImagen);
        aux = aux->publicacion_sig;
    }

    printf("<--Cola");
    

}