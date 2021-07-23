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
        
    }

    return 1;
}
