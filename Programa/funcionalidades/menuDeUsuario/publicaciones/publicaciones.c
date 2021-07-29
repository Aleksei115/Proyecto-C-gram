
#include "publicaciones.h"

void publicaciones(usuario usuario_log ,int op){
    switch (op){

        case 1:
            crearArchivoPublicaciones1(usuario_log);
            verTusPublicaciones(usuario_log);
            break;
        case 2:
            // Si quieres agregar una publicacion añade tu imagen txt a esta ruta usuarios/nombreUsuario(user_)/img
            // scanf para regresar a menu usuario
            break;

        case 3:
            // Si quieres eliminar una publicacion quita tu imagen txt de esta ruta usuarios/nombreUsuario(user_)/img
            // scanf para regresar a menu usuario
            break;
    }

}