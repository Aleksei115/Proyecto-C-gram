void menuDeUsuario();

void agregarAmigos(usuario usuario_logeado){

    usuario aux_tmp;

    char buff2[10];
    int op;

    system("rm -f Programa/archivos/usuarios.txt");             //Elimina el archivo usuarios.txt
    system("touch Programa/archivos/usuarios.txt");             //Crea el archivo usuarios.txt
    system("ls usuarios >> Programa/archivos/usuarios.txt");    //llena de nuevo el archivo usuarios.txt con los usuarios que existan al momento de logearse el usuario 

    do{
        system("clear");
        printf("Introduce el usuario que deseas agregar de maximo 10 caracteres...: \n"); // desplegar un print que pida nombre de usuario
        if(scanf("%s",buff2) == 0)
            error(3);
    }while(comprobarbuff(buff2,2) == 0);
    
    if(buscarAmigoEnArchivo(buff2) == 2){         // checar en archivo usuarios.txt que exista ese nombre de archivo

        system("clear");  
        printf("\nUsuario no encontrado...\n");       // si no existe decirle que usuario no encontrado y opcion a regresar a menu usuario
        printf("\nIntroduce 1 para volver al menu \n");
        printf("\n-->  ");
        if(scanf("%d", &op) == 1){
            system("clear");
            menuDeUsuario(usuario_logeado);
        }
        else 
            error(2);
   
    }
    else{
        strcpy(aux_tmp.user_name, buff2); 
        
        agregarAmigoArchivo(usuario_logeado, aux_tmp);  

        printf("\nUsuario Agregado exitosamente....\n");              // al final USUARIOS AGREGADO Y volver a menu usuario
        printf("\nIntroduce 1 para volver al menu \n");
        printf("\n-->  ");
        if(scanf("%d", &op) == 1){
            system("clear");
            menuDeUsuario(usuario_logeado);
        }
        else 
            error(2);     
}