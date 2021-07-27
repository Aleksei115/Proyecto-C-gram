int comprobarbuff(char *cadena, int op){

    // Comprueba que las cadenas introducidas no tengan mas
    // del maximo de caracteres 

    switch (op){       
        
        case 1:
            if(strlen(cadena) > 15)
                return 0;
            break;
        case 2:
            if(strlen(cadena) > 10)
                return 0;
            break;
        case 3:
            if(strlen(cadena) > 10)
                return 0;
            break;


        // Comprueba que el nombre de archivo sea menor a 30 caracteres
        case 4:
            if(strlen(cadena) > 30)
                return 0;
            break;
        
    }

    return 1;
}
