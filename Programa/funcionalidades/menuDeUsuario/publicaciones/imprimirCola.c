void accederArchivo(char[]);

void imprimirCola(publicacion **cabeza){

    publicacion *aux = *cabeza;
    
    char buffNombre[55];
    
    char usr[] = "usuarios/";

    char buffLinea[150];

    while (aux != NULL){

        memset(buffNombre,0,55);
        strcat(buffNombre,usr);
        strcat(buffNombre,aux->nombreUsuario);
        strcat(buffNombre,"/img/");
        strcat(buffNombre,aux->nombreImagen);

        accederArchivo(buffNombre);
        // printf("%s\n",buffNombre);
        aux = aux->publicacion_sig;

    }
    
   

    // for (int i = 0; i < 55; i++){
    //     printf("%i : %c\n",i,buffNombre[i]);
    //     // strcat(nuevo,buffNombre);
    // }
    
    // printf("%s",nuevo);


}


void accederArchivo(char nombreArchivo[20]){

    system("clear");

    FILE *r = NULL;

    char buffLinea[150];

    int op;

    r = fopen(nombreArchivo,"r");

    if (r == NULL)
        error(1);
        
        while(!feof(r)){
            fgets(buffLinea,150,r);
            printf("%s",buffLinea); 
        }	    
    
    fclose(r);

    printf("\n\n Para acceder a la siguiente publicacion, presiona 1: ");

    if(scanf("%d", &op) == 1){
            system("clear");
            return;
    }
    else 
        error(2);


}