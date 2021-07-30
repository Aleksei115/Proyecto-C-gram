void agregarAmigoArchivo(usuario usuario_buscado, usuario usuario_deseado){ 

    usuario aux;

    char bufferUsuario[24] = "usuarios/";

    char buffArchivo[24] = "/amigos.txt";

    strcat(bufferUsuario,usuario_buscado.user_name);

    strcat(bufferUsuario, buffArchivo);

    //printf("%s", bufferUsuario);

    FILE *archivo = NULL;

    archivo = fopen(bufferUsuario, "a");
 
    if (archivo == NULL)
        error(1);

    fprintf(archivo,"%s",usuario_deseado.user_name); 
    fprintf(archivo, "\n");

    fclose(archivo);    
  
}