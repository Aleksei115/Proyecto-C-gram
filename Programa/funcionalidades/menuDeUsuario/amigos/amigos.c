void amigos(usuario usuario_logeado){

    system("rm -f Programa/archivos/usuarios.txt");             //Elimina el archivo usuarios.txt
    system("touch Programa/archivos/usuarios.txt");             //Crea el archivo usuarios.txt
    system("ls usuarios >> Programa/archivos/usuarios.txt");    //llena de nuevo el archivo usuarios.txt con los usuarios que existan al momento de logearse el usuario 

    // desplegar un print que pida nombre de usuario
    // checar en archivo usuarios.txt que exista ese nombre de archivo
    // si no existe decirle que usuario no encontrado y opcion a regresar a menu usuario
    // si existe, guardar el nombre del usuario agregado al archivo amigos.txt dentro de la carpeta del usuario logeado
    // fopen("usuarios/fabiunam(usuario_logeado.user_name)/amigos.txt", "a")
    // al final USUARIOS AGREGADO Y volver a menu usuario


    exit(1);
}