#define _PRUEBA

char buffNombrePubli[10][30];

typedef struct amigo{

    int id;
    char nombre[20];
    char user_name_friend[15];
    char password[10];
    struct amigo *amigo_sig;

}amigo;



typedef struct hashtags{
    
    char etiqueta[15];
    struct hashtags *hashtag_sig;

}hashtags;




typedef struct publicacion{

    int id;                             //se usar para poder usar una cola 
    char nombreUsuario[11];
    char nombreImagen[30];              //aqui se almacenará el nombre del archivo .txt

    struct publicacion *publicacion_sig;

}publicacion;



typedef struct usuario{

    char nombre[17];
    char user_name[12];
    char password[13];
}usuario;


amigo *lista_amigos;        //Aqui se gurdará la lista de amigos como lista enlazada
publicacion *cabeza_publi;
publicacion *cola_publi;  

int id;


// ---------------------------------------------

#ifdef _PRUEBA

// Liberias estandar
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>

    #include "MenuPrincipal.c"

// Incorpora el archivo de errores

    #include "../errores/error.c"

// Funciones agregar Usuarios
    #include "../crearUsuario/agregarUsuario.c"

// Funciones que puede hacer el usuario en la app
    #include "../menuDeUsuario/menuDeUsuario.c"


// Funcion que autentifica el usuario para entrar
    #include "../inicioSesion/inicioSesion.c"

// archivos sobre el hashtag
    #include "../hashtags/MenuHashtags.c"









     
#endif