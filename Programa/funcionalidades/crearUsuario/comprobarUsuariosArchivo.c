
int comprobarUsuarioArchivo(char const *cadena1){

    // Busca en archivo que no exista el mismo usuario

    usuario tmp;

    FILE *archivo = NULL;
    archivo = fopen("Programa/archivos/usuarios.dat","a+b");

    if (archivo == NULL)
        error(1);

    fread(&tmp,sizeof(usuario),1,archivo);

    while (1){

        if (feof(archivo) || strcmp(tmp.user_name,cadena1)  == 0)
            break;

        fread(&tmp,sizeof(usuario),1,archivo);
    }

    fclose(archivo);

    if(strcmp(tmp.user_name,cadena1)  == 0)
        return 1;
    
    return 2;
    
}