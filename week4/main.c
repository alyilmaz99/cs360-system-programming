#include<stdlib.h>
#include<stdio.h>

int bolme(int a, int b, int *kalan){
    int bolum = a / b;
    *kalan = a % b;
    return bolum;
}
int toplama(int dizi[]){
    int sum = 0;
    int size = sizeof(dizi) / sizeof(dizi[0]);
    for (int i = 0; i < size; i++)
    {
        sum += dizi[i];
    }

    printf("toplam: %d\n", dizi[4]);
    return sum;
}

int main(){
    //int degerinin adresini gondererek adresi uzerinden degisiklik yaptirma
    int a = 13;
    int b = 4;
    int kalan;
    int bolum = bolme(a, b, &kalan);
    printf("bolum: %d\nkalan: %d\n", bolum, kalan);

    // pointer adresini bir arttirma
    int i = 1081;
    char *p;
    p = &i;
    printf("pointer adresi1: %d \n", p);
    p++;
    
    printf("pointer degeri: %d \n", *p);
    printf("pointer adresi2: %d \n", p);

    // pointer adreslerinde typecasting
    int deger = 1025;
    int *p1;
    char *p2;
    p1 = &deger;
    p2 = (char *)p1;

    printf("p2 degeri: %d\n", *p2);
    printf("p2 adresi: %d\n", p2);

    int *p3;
    int integer = 15;
    p3 = &integer;
    *p3 = 7;
    int **q;
    q = &p3;
    
    printf("integer degeri: %d\n", integer); // normal integer degere isaretci ile adresi uzerinden deger degisikligi yaptirma
    printf("p3 degeri: %d\n",*p3);  // p3 un adres ettigi deger
    printf("q nun adres ettigi isaretcinin icindeki deger: %d\n",**q);


    //--------------------------------//

    int array[] = {1,2,3,4,5};
    int sum = toplama(array);
    printf("sum: %d\n",sum);
    return EXIT_SUCCESS;
}