/*Create by ANTNF 21-05-2019
*You can customize your code, this is a simple project
*Recursive function
*/

#include <stdio.h>
#include <stdlib.h>

int espacer(int nb);

int main()
{
    int nombre;

    printf("Entre le chiffre a espacer: ");
    scanf("%d",&nombre);
    espacer(nombre);
    return 0;
}


int espacer(int nb){
    int res;

    if(nb == 0) return 0;
        res = nb % 10;
        if(res == nb) return printf(" %d", nb);
        espacer(nb/10);
        printf(" %d ",res);

    return nb;
}


