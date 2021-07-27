void agregarAmigoArchivo(usuario usuario_buscado, usuario usuario_deseado){ 

    usuario aux;

    char bufferUsuario[24] = "usuarios/";

    char buffArchivo[24] = "/amigos.txt";

    strcat(bufferUsuario,usuario_buscado.user_name);

    strcat(bufferUsuario, buffArchivo);

    FILE *archivo = NULL;

    archivo = fopen(bufferUsuario, "a"); // fopen("usuarios/fabiunam(usuario_logeado.user_name)/amigos.txt", "a")
 
    if (archivo == NULL)
        error(1);

    fprintf(archivo,"%s\n",usuario_deseado.user_name); 

    fclose(archivo);    
  // si existe, guardar el nombre del usuario agregado al archivo amigos.txt dentro de la carpeta del usuario logeado

}