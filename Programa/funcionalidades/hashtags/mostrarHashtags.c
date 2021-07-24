void mostrarHashtags(hashtags *aux){

    //Mostramos nuestra estructura pila

    int a=0;

    if(aux != NULL){

        while(aux != NULL){

            printf("\n%s\n", aux->etiqueta);

            aux = aux ->hashtag_sig;

            a++;


        }
    }

    else{
        printf("\n\n No hay Hashtags por el momento !\n\n\n");
    }
}