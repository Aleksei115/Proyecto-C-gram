void agregarNodo(amigo **comienzo,char user_name[11]){


    amigo *nuevo = (amigo*)malloc(sizeof(amigo));

    strcpy(nuevo->user_name_friend,user_name);

    if (*comienzo == NULL)
        *comienzo = nuevo;

    else{

        amigo *aux = *comienzo;

        while (aux->amigo_sig != NULL){
            aux = aux->amigo_sig; 
            
        }

        aux->amigo_sig = nuevo;
        
    }

}