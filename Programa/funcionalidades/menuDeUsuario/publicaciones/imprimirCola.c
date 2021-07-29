void imprimirCola(publicacion cabeza){

    // publicacion *aux = cabeza;
    FILE *r = NULL;
  
    char *nuevo = NULL;

    char buffNombre[20] = "usuarios/";

    char buffLinea[150];

    // char nombreUsuario


    // while (aux != NULL){
        
        strcat(buffNombre,cabeza.nombreUsuario);
        strcat(buffNombre,"/img/");
        strcat(buffNombre,cabeza.nombreImagen);
        printf("%s",buffNombre);


        // strcpy(nombreArchivo,buffNombre);

        // aux = aux->publicacion_sig;
    // }
    
    
    // for (int i = 0; i < 55; i++){
    //     printf("%i : %c\n",i,buffNombre[i]);
    //     // strcat(nuevo,buffNombre);
    // }
    
    // printf("%s",nuevo);

    r = fopen(buffNombre,"r");

    if (r == NULL)
        error(1);
        
        while(!feof(r)){
            fgets(buffLinea,150,r);
            printf("%s",buffLinea); 
        }	    
    
    fclose(r);


}