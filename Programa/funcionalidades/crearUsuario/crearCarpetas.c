

void crearCarpetas(usuario usuario_creado){

    system("mkdir -p usuarios");

    char bufferCarpetaUsuario[27] = "mkdir usuarios/";

    char bufferImg[5] = "/img";

    char buffArchivo[12] = "/amigos.txt";

    char archivoAmigos[38] = "touch usuarios/";

    char carpetaUsuario[31] = "mkdir usuarios/";


    strcat(bufferCarpetaUsuario,usuario_creado.user_name);      //creamos el string mkdir user_name

    system(bufferCarpetaUsuario);                       //Creamos la carpeta del usuario


    // Crea la carpeta img dentro de la carpeta del usuario

    strcat(carpetaUsuario,usuario_creado.user_name);
    
    strcat(carpetaUsuario,bufferImg);

    system(carpetaUsuario); 


    // Crea el archivo de amigos.txt dentro de la carpeta usuario

    strcat(archivoAmigos,usuario_creado.user_name);

    strcat(archivoAmigos,buffArchivo);
    
    system(archivoAmigos);



}