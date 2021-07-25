int buscarEnArchivo(char usuario_tmp[], char password_tmp[]){

    usuario tmp;

    FILE *archivo = NULL;
    archivo = fopen("Programa/archivos/usuarios.dat","a+b");

    if (archivo == NULL)
        error(1);

    fread(&tmp,sizeof(usuario),1,archivo);

    while (1){

        if (feof(archivo))
            break;
        
        if(strcmp(tmp.user_name,usuario_tmp)  == 0 || strcmp(tmp.password,password_tmp)  == 0)
            break;

        fread(&tmp,sizeof(usuario),1,archivo);
    }

    fclose(archivo);

    if(strcmp(tmp.user_name,usuario_tmp)  == 0){

        if(strcmp(tmp.password,password_tmp)  == 0)
            menuDeUsuario(tmp);
        else
            return 1;
        
    }
    else
        return 2;


}