#include "funcionesCrearUsuario.h"


void agregarUsuarios(){

    usuario usuario_tmp;


    char buff1[15], buff2[10], buff3[10];
    int buff_id, vef_id,comprobar,op;

    do{
        system("clear");
        printf("\nIntroduce un nombre de maximo 15 caracteres...\n");
        printf("Introduce el nombre: ");

        if(scanf("%s",buff1) == 0)
            error(3);
                
    }while(comprobarbuff(buff1,1) == 0);

    do{
        system("clear");
        printf("\nIntroduce un usuario de maximo 10 caracteres...\n");
        printf("Introduce un usuario: ");
        if(scanf("%s",buff2) == 0)
            error(3);
    }while(comprobarbuff(buff2,2) == 0);


    do{ 
        system("clear");
        printf("\nIntroduce un password de maximo 10 caracteres...\n");
        printf("Introduce el password: ");
        if(scanf("%s",buff3) == 0)
            error(3);
    }while(comprobarbuff(buff3,3) == 0);
    
    //Asignamos todos los datos recopilados al usuario temporal

    if(comprobarUsuarioArchivo(buff2) == 1){
        system("clear");
        printf("\nEstas intentando utilizar un usuario que ya existe...\n");
        printf("\tIntroduce 1 para volver al registro de usuario\n");
        printf("\tIntroduce 2 para volver a la pantalla principal...\n");
        printf("\nOpcion: ");
        if(scanf("%d",&op) == 1 ){
            if (op == 1)
                agregarUsuarios();
            else if(op == 2)
                MenuPrincipal();
            else
                error(2);

        }
        else
            error(2);
    }
    else{

        strcpy(usuario_tmp.nombre,buff1);
        strcpy(usuario_tmp.user_name,buff2);
        strcpy(usuario_tmp.password,buff3);
        agregarUsuarioArchivo(usuario_tmp);

        crearCarpetas(usuario_tmp);

        MenuPrincipal();

    }




}