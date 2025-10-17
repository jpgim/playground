#include <stdio.h>


int main() {
    int marcas_por_kilometros[] ={2, 4 , 6 ,8, 10}; 
    char cartel[] = "RUTA 11";
    unsigned int  len_array_marcas = 0;

    // restamos 2 kilometros a cada marca
    //len_array_marcas = sizeof(marcas_por_kilometros) / sizeof(marcas_por_kilometros[0]);
    len_array_marcas = 8;
    for (int i= 0; i<= len_array_marcas;i++){
        marcas_por_kilometros[i] = marcas_por_kilometros[i] - 2;
    };
    
    
    printf("%s\n",cartel);

    return 0;
}