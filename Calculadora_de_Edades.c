#include <stdio.h>

int main(){
    
    int anioN, anioA;
    int mesN, diaN, mesA, diaA;
    int edad;
    
    printf("Escribi tu año de nacimiento\n");
        scanf("%d",&anioN);
    
    do{    
    printf("Escribi el mes y dia de nacimiento en ese orden y en numeros\n");
        scanf("%d %d",&mesN, &diaN);
        if (((mesN<=0)||(mesN>12)) || ((diaN<=0)||(diaN>31))) {
            }
    }
    while(((mesN<=0)||(mesN>12)) || ((diaN<=0)||(diaN>31))); 
    
    printf("Escribi el año actual\n");
        scanf("%d",&anioA);
    
    do{
    printf("Escribi el mes y dia actual en ese orden y en numeros\n");
        scanf("%d %d",&mesA, &diaA);
    
    if (((mesA<=0)||(mesA>12)) || ((diaA<=0)||(diaA>31))){
    }   
    }
    while(((mesA<=0)||(mesA>12)) || ((diaA<=0)||(diaA>31))); 
       
    edad=anioA-anioN; 
       
    if((mesA>=mesN) && (diaA>=diaN)){
        printf("Tu edad es de %d",edad);
    
    }
    else{
        printf("Tu edad es de %d",--edad);    
    }
  
    return 0;
}
