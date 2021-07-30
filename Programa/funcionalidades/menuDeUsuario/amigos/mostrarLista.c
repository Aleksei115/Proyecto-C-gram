void menuDeUsuario(usuario);

void verAmigos(amigo **comienzo,usuario usuario_logeado){

    int op;
    amigo *aux = *comienzo;

    if(aux == NULL){
        system("clear");
        printf("\n\tLo sentimos, no tienes amigos para mostrar...\n");
    }
    else{

        system("clear");
        printf("\nTus amigos son: \n\n");

        while (aux != NULL){
            printf("\t%s\n", aux->user_name_friend);
            aux = aux->amigo_sig;
        }  

    }

    printf("\nIntroduce 1 para volver al menu \n");
    printf("\n-->  ");
    if(scanf("%d", &op) == 1){
        system("clear");
        menuDeUsuario(usuario_logeado);
    }
    else 
        error(2);

}