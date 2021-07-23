#!/bin/bash
# Verifica que este creado el archivo usuarios.dat, sino lo crea

if test ./usuarios.dat
then
    touch ./usuarios.dat
fi