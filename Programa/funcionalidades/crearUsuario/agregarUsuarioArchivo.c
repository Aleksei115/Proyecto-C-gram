
void agregarUsuarioArchivo(usuario nuevo_usuario){

    // Agrega el usuario creado a nuestro archivo usuarios.dat

    FILE *archivo = NULL;
    archivo = fopen("Programa/archivos/usuarios.dat","a+b");

    if (archivo == NULL)
        error(1);

    fwrite(&nuevo_usuario,sizeof(usuario),1,archivo);
    
    
    fclose(archivo);
    
}  