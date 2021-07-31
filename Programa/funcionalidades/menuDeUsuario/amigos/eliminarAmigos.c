void menuDeUsuario(usuario);

void eliminarAmigos(usuario usuario_logeado){

    char rm[20] = "rm -f ";
    char mv[80] = "mv -f ";

    int op;

    char buff2[10];

    char nombreAmigo[11];

    char bufferUsuario[24] = "usuarios/";

    char buffArchivo[24] = "/amigos.txt";

    char buffUsrAmigoR[30] = " usuarios/";


    strcat(bufferUsuario,usuario_logeado.user_name);

    strcat(bufferUsuario, buffArchivo);

    char bufferUsuario2[24] = "usuarios/";

    char buffArchivo2[24] = "/tmp_amigos.txt";

    strcat(bufferUsuario2,usuario_logeado.user_name);

    strcat(bufferUsuario2, buffArchivo2);




   
    if(lista_amigos == NULL){
        system("clear");
        printf("\n\tNo tienes amigos para eliminar...\n");

    }
    else{

        FILE *archivo = NULL;
        FILE *tmp_archivo = NULL;

        do{
            system("clear");
            printf("Introduce el usuario que deseas eliminar de maximo 10 caracteres...: \n"); // desplegar un print que pida nombre de usuario
            if(scanf("%s",buff2) == 0)
                error(3);
        }while(comprobarbuff(buff2,2) == 0);
        
        if(buscarAmigoEnArchivo(buff2,usuario_logeado,2) == 2){         // checar en archivo usuarios.txt que exista ese nombre de archivo

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

            amigo *aux = lista_amigos;

            while (strcmp(aux->user_name_friend,buff2) != 0 && aux->amigo_sig != NULL){
                aux = aux->amigo_sig;
            }

            if (strcmp(aux->user_name_friend,buff2) == 0){

                // Si existe entonces pasa todos los registros que no se van a eliminar a otro archivo temporal
                // Y se eliminara el archivo original para luego renombrar el arhivo temporal al original

                archivo = fopen(bufferUsuario,"r");
                tmp_archivo = fopen(bufferUsuario2,"w");

                if (archivo == NULL || tmp_archivo == NULL)
                    error(1);

                while (fscanf(archivo,"%s",nombreAmigo) == 1){
        
                    if (strcmp(nombreAmigo,buff2) != 0){
                        fprintf(tmp_archivo,"%s",nombreAmigo); 
                        fprintf(tmp_archivo, "\n");
                    }

                    if(feof(archivo))
                        break;

                }

                fclose(archivo);
                fclose(tmp_archivo);

                strcat(rm,bufferUsuario);
                strcat(mv,bufferUsuario2);

                
                strcat(buffUsrAmigoR,usuario_logeado.user_name);
                strcat(buffUsrAmigoR,buffArchivo);

                strcat(mv,buffUsrAmigoR);

                // printf("%s",mv);

                system(rm);      //Si el archivo esta en solo lectura se eliminara
                system(mv);
                
            }

            system("clear");
            printf("\n\tAmigo eliminado...\n");


        }

    }

    
    printf("\nIntroduce 1 para volver al menu \n");
    printf("\n-->  ");
    if(scanf("%d", &op) == 1){
        system("clear");
        menuDeUsuario(usuario_logeado);
    }
    else 
        error(2);

}