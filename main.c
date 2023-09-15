#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int plusgrand = 0, max = 0, somme = 0;
    do{
       printf("Entrer un nombre\n");
       scanf("%d", &x);
       if (x>max){
            max = x;
       }
        somme += x;

    }while(x!=0 || x>=100);
        printf("La somme est:%d \t Le max est:%d \t", somme, max);
    return 0;
}
