#include <stdio.h>
#include <stdlib.h>

int main(){
    // gcc main.c -o main-output output aliyoruz.
    //EXIT_SUCCESS "stdlib.h" kutuphanesinde tanimli.
    printf("Hello World \n");

    printf("int bellek :    %d\n", sizeof(int));
    //4 byte seklinde tutuyor
    // 1 byte 8 bit seklinde deger tutar.
    // bir int 32 bit deger tutar.
    printf("char bellek:    %d\n",     sizeof(char));
    // char size 1 byte seklinde cikti verir.
    printf("float bellek:   %d\n",    sizeof(float));
    // float size 4 byte seklinde cikti verir.
    printf("double bellek:  %d\n",   sizeof(double));
    //double bellek size 8 byte seklinde cikti verir.
    printf("pointer bellek: %d\n",  sizeof(int *));
    //pointer  in bellekte tutulma size i.

    //bellek bolumleri ve kaplariklari alan nedir?.



    return EXIT_SUCCESS;
}