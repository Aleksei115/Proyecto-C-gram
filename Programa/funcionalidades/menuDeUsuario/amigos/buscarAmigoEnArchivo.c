int buscarAmigoEnArchivo(char const *usuario_deseado){

    char buff[10];
    usuario aux;
    FILE *ptr = NULL;

    ptr = fopen("Programa/archivos/usuarios.txt", "r");

    if (ptr == NULL)
        error(1);

    fscanf(ptr,"%s", buff);
    strcpy(aux.user_name,buff);    

    while (1){

        if (feof(ptr) || strcmp(aux.user_name,usuario_deseado)  == 0)
            break;

        fscanf(ptr,"%s", aux.user_name);
    }
       
    fclose(ptr);

    if(strcmp(aux.user_name,usuario_deseado)  == 0)
        return 1;
    
    return 2;
    
}