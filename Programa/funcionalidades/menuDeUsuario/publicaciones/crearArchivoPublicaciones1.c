void crearArchivoPublicaciones1(usuario usuario_log){

    char buffA[55] = "mkdir -p usuarios/";

    char buffB[26] = "/img/archivoPublicaciones";

    char buff1[70] = "rm -f usuarios/";

    char buff2[71] = "touch usuarios/";

    char buff3[110] = "ls -p usuarios/";

    char buffComando[14] = " >> usuarios/";

    char buffImg[44] = "/img/archivoPublicaciones/publicaciones.txt";

    char buffImg2[5] = "/img";

    char grep[13] = " | grep -v /";

    // crea carpeta 

    strcat(buffA,usuario_log.user_name);
    strcat(buffA,buffB);
    system(buffA);

    //Elimina el archivo publicaciones.txt

    strcat(buff1,usuario_log.user_name);

    strcat(buff1,buffImg);

    system(buff1);             

    // Crea el archivo publicaciones.txt 

    strcat(buff2,usuario_log.user_name);

    strcat(buff2,buffImg);

    system(buff2);       

    //llena de nuevo el archivo usuarios.txt con los usuarios que existan al momento de logearse el usuario

    strcat(buff3,usuario_log.user_name);    

    strcat(buff3,buffImg2);
    
    strcat(buff3,grep);

    strcat(buff3,buffComando);

    strcat(buff3,usuario_log.user_name);

    strcat(buff3,buffImg);
    
    system(buff3);     

}  