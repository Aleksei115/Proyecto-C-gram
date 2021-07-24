hashtags *EliminarHashtag(hashtags **aux){

    //Eliminamos los hashtags de nuestra estructura pila

    system("clear");
    int c;

    if(*aux != NULL){

        hashtags *newAp = *aux;

        *aux = newAp ->hashtag_sig;

        free (newAp);
        t--;

        printf("\n\n**  Eliminado  **\n\n");
        printf("Presiona 1 para regresar: ");

        if (scanf("%d",&c) == 1 && c == 1){
            system("clear");
            Hashtags();    }
        else{
            printf("\nOpcion Invalida\n\nSaliendo del programa...\n");
            exit(1);}

        return newAp;

    }
    else{

        printf("\nNo se puede eliminar si no hay Hashtags !\n\n");
        printf("Presiona 1 para regresar: ");

        if (scanf("%d",&c) == 1 && c == 1){
            system("clear");
            Hashtags();    }
        else{
            printf("\nOpcion Invalida\n\nSaliendo del programa...\n");
            exit(1);}
    }
}