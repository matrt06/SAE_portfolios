#include <stdio.h>
int main (){
    float a ;
    float b ;
    printf ("a :");
    scanf ("%f, &a");
    printf ("b :");
    if (a!=0){
        printf("Solution : %f\n",-b/a);
    }
    else{
        if(b==0){
            printf("Soltuions : R\n");
        }
        else{
            printf("Pas de solutions\n")
        }
    }


}