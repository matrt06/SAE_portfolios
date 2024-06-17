#include <stdio.h>
int main(){
    int nbkm;
    int nbacc;
    int prime;
    printf ("Kilomètres :"); 
    scanf ("%d",&nbkm);
    printf ("Accidents :");
    scanf ("%d",&nbacc);
    if (nbkm<8000){
        prime=610;
    }
    else if (nblm<=100000){
        prime=990
    }
    else{
        prime=1220;
    }
    if (nbacc<2){
        printf("votre prime :%d\n",(int)(prime*1.1));
    
    }
    else{
        printf("votre prime : %d\n",prime);

    }
    return 0;
}