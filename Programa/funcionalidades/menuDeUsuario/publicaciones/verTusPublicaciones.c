void crearArchivoPublicaciones(usuario);
void imprimirCola(publicacion **,usuario);
void menuDeUsuario(usuario);
// void crearNodoPublicacion();

void verTusPublicaciones(usuario usuario_logeado){

    system("clear");
    // printf("Hola");
    int id ;                                       //Asigna el id a las publicaciones conforme las vaya leyendo

    crearArchivoPublicaciones(usuario_logeado);     

    char buffP[18] = "publicaciones.txt";        

    char buffArchivo[50] = "usuarios/";

    char buffImg[45] = "/img/archivoPublicaciones/publicaciones.txt";

    strcat(buffArchivo,usuario_logeado.user_name);
    
    strcat(buffArchivo,buffImg);                            //Crea el string para acceder al archivo publicaciones.txt de cada usuario

    // Comienza el agregar las publicaciones
    
    FILE *archivo = NULL;


    char buffNombrePubli[10][30];

    archivo = fopen(buffArchivo,"r+");

    if (archivo == NULL)
        error(1);

    
    // Llena el array nombresPublicaciones con los nombres de las primeras 10 publicaciones
    id = 1;

    while (!feof(archivo)){
        fgets(buffNombrePubli[id-1],29,archivo);
        // printf("%s",buffNombrePubli[id-1]);
        crearNodoPublicacion(buffNombrePubli[id-1],id,&(usuario_logeado.cabeza_publi),&(usuario_logeado.cola_publi));
        id++;
        
    }

    fclose(archivo);

    imprimirCola(&(usuario_logeado.cabeza_publi),usuario_logeado);

}



void crearArchivoPublicaciones(usuario usuario_log){

    char buff1[70] = "rm -f usuarios/";

    char buff2[71] = "touch usuarios/";

    char buff3[110] = "ls -p usuarios/";

    char buffComando[14] = " >> usuarios/";

    char buffImg[44] = "/img/archivoPublicaciones/publicaciones.txt";

    char buffImg2[5] = "/img";

    char grep[13] = " | grep -v /";

    //Elimina el archivo publicaciones.txt

    strcat(buff1,usuario_log.user_name);

    strcat(buff1,buffImg);

    system(buff1);             

    // Crea el archivo publicaciones.tx 

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


