void Hashtags();

void AgregarHashtags(hashtags **aux){          

    //Agregamos hashtags a nuestra estructura pila

    int c;
    char Hashtag[50];

    system("clear");

    if (t == TAM){         
        printf("\n\nSolo puedes introducir 5 #Hashtags\n\n");
        printf("Presiona 1 para regresar: ");

        if (scanf("%d",&c) == 1 && c == 1){
            system("clear");
            Hashtags();    
        }
        else
            error(2);
        
    }
    else{

        printf("\nIntroduce tu hashtag de maximo 15 caracteres:\n");
        if (scanf("%s",Hashtag) != 1 || strlen(Hashtag) > 15)
            error(3);

        hashtags *nodo = (hashtags*)malloc(sizeof(hashtags));
        t ++;    
        strcpy(nodo->etiqueta, Hashtag);

        
        if (aux == NULL){
            nodo->hashtag_sig = NULL;    

        }
        else{
            nodo->hashtag_sig = *aux;
        }

        *aux= nodo;

        printf("\n\n**  Agregado  **\n\n");
        printf("Presiona 1 para regresar: ");

        if (scanf("%d",&c) == 1 && c == 1){
            system("clear");
            Hashtags();    
        }
        else
            error(2);    
        


    }

}