#include <stdio.h>
#include <stdlib.h>

int main()
{float n1 ,n2 ,n3 ,n4;
float S , M ;
printf("Veillez entrer les 4 notes\n");
scanf("%f%f%f%f",&n1 ,&n2 ,&n3 ,&n4);
S = n1 + n2 + n3 + n4;
M = S / 4;
printf("la soome est :%.2f\n ",S );
printf(" la moyenne est %.2f",M );



    return 0;
}
