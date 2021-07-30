int buscarAmigoEnArchivo(char const *usr_deseado,usuario user ,int o){

    char buff[10];
    char buffAmigo[10];
    usuario aux;

    FILE *ptr = NULL;

    if (o == 1){
       

        ptr = fopen("Programa/archivos/usuarios.txt", "r");

        if (ptr == NULL)
            error(1);

        fscanf(ptr,"%s", buff);
        strcpy(aux.user_name,buff);    

        while (1){

            if (feof(ptr) || strcmp(aux.user_name,usr_deseado)  == 0)
                break;

            fscanf(ptr,"%s", aux.user_name);
        }
        
        fclose(ptr);

        if(strcmp(aux.user_name,usr_deseado)  == 0)
            return 1;
        
        return 2;
        
    }
    else{
        char bufferUsuario[24] = "usuarios/";

        char buffArchivo[24] = "/amigos.txt";

        strcat(bufferUsuario,user.user_name);

        strcat(bufferUsuario, buffArchivo);

        ptr = fopen(bufferUsuario, "r");

        while (1){

        

            if (feof(ptr) || strcmp(buffAmigo,usr_deseado)  == 0)
                break;

            fscanf(ptr,"%s", buffAmigo);
        }
        
        fclose(ptr);

        if(strcmp(buffAmigo,usr_deseado)  == 0)
            return 1;
        
        return 2;

    }
    
    
    
}