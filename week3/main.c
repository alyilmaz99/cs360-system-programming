#include<stdlib.h>
#include<stdio.h>
#include <stdbool.h>

int main(){
    printf("program is starting...\n");
    int i = 10;
    int *pointer;
    pointer = &i;
    // ilkinde degerini ikincisinde adresini hexadecimal sekilde yazdiriyoruz.
    printf("i value:                   %d\n", i);
    printf("i address:                 %lx\n", &i);
    printf("pointer value:             %d\n",pointer);
    printf("pointer address:           %lx\n", &pointer);
    pointer++;
    printf("pointer increased:         %d\n",pointer);
    printf("pointer increased address: %lx\n", &pointer);

    // diziler adress olarak tuttugundan burda adress degerini goruyoruz diziyi yazdirmak istedigimizde.
    int dizi[3] = {1, 2, 3};
    printf("dizi address:              %d\n",dizi);
    printf("dizi value 0 :             %d\n",dizi[0]);
    printf("dizi value address:        %d\n",&dizi[0]);
    int *pointer2;
    pointer2 = dizi;
    pointer2++;
    printf("pointer address with dizi: %d\n", pointer2);
    int j = 20;
    int *pointer3;
    pointer3 = &j;
    pointer3++;
    // pointer degerine ulasmak icin
    printf("pointer3 degeri:           %d\n", *pointer3);
    printf("pointer3 address:          %d\n", pointer3);

    //bir isaretciyi isaret edecek olan isaretci icin

    int **pointer4;
    pointer4 = &pointer3;
    printf("pointer point pointer:     %d\n",*pointer4);
    printf("pointer point pointer address: %d\n", &pointer4);

    return 0;
}