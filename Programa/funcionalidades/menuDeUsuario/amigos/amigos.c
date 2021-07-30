#include "amigos.h"



void amigos(usuario usuario_log,int op){

    lista_amigos = NULL;

    leerArchivo(usuario_log);               //Crea lista enlazada a partir de archivo
    
    switch (op){

        case 1:
            agregarAmigos(usuario_log);
            break;

        case 2:
            verAmigos(&lista_amigos,usuario_log);
            break;

        case 3:
            eliminarAmigos(usuario_log);
            break;

    }


}
