

void leerArchivo(usuario usuario_log){

    char bufferUsuario[24] = "usuarios/";

    char buffArchivo[24] = "/amigos.txt";

    char nombreAmigo[11];

    strcat(bufferUsuario,usuario_log.user_name);

    strcat(bufferUsuario, buffArchivo);

    FILE *archivo = NULL;

    archivo = fopen(bufferUsuario, "r");
 
    if (archivo == NULL)
        error(1);

    while (fscanf(archivo,"%s",nombreAmigo) == 1){
        
        // printf("\n%s\n",nombreAmigo);
        agregarNodo(&lista_amigos,nombreAmigo);
        if(feof(archivo))
            break;

    }
    

    fclose(archivo);


}