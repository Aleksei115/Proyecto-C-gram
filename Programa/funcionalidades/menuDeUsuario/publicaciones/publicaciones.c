
#include "publicaciones.h"

void publicaciones(usuario usuario_log ,int op){
    switch (op){

        case 1:
            crearArchivoPublicaciones1(usuario_log);
            verTusPublicaciones(usuario_log);
            break;
        case 2:

            agregarPublicaciones(usuario_log);
            break;

        case 3:
            
            eliminarPublicaciones(usuario_log);

            break;
    }

}