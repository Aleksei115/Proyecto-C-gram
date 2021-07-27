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


        // Comprueba que el nombre de archivo sea menor a 70 caracteres
        case 4:
            if(strlen(cadena) > 70)
                return 0;
            break;
        
    }

    return 1;
}
