#include<stdlib.h>
#include<stdio.h>
#include <stdbool.h>

struct student{
    double note;
    int stdNo;
}std1,std2;
struct teacher
{
    double lessonsNumber;
    int price;
    int age;
    char name;
    char name2;
    bool status;
    int array[20];
    // stdbool.h olmadan bool ekleyemeiyoruz.
} teacher1;

typedef struct studentWithTypeDef{
    char studentName;
    int age;
    bool status;
} student;


void functionPrint(int a){
    printf("function number: %d\n",a);
}
int functionSum(int a, int b){
    return a + b;
}

int functionCalculator(int, int);
int main()
{
    //yukardaki tanimlama disinda struct sonuna degisken isimlendirmesi seklinde de tanimalama yapilabilmekte.
    //struct student std1,std2;
    //typedef kullanarak struct demeden sadece student diyerek biz sturct yapimizi olusturabiliyoruz.
    student std3;
    std1.note = 50;
    std1.stdNo = 180101021;
    printf("student number:     %d\n", std1.stdNo);
    printf("student note:       %f\n", std1.note);
    printf("sizeof student:     %d\n", sizeof(std1));
    printf("sizeof student2:    %d\n", sizeof(std2));
    printf("sizeof teacher:     %d\n", sizeof(teacher1));
    printf("sizeof teacher age: %d\n", sizeof(teacher1.age));
    printf("sizeof student :    %d\n", sizeof(std3));

    for (int i = 0; i < 20; i++)
    {
        teacher1.array[i] = i;
        printf("array %d: %d\n", i, teacher1.array[i]);
    }

    //typecasting 
    int integer = 10, integer2= 3;
    double avg;
   
    avg = (double)integer / integer2;
    double doubleNumber = 10.5;
    printf("avg : %f\n", avg);

    char charName = 'a';
    int b;
    b = (int)charName;

    printf("char: %c\nint : %d\n", charName,b);

    char nameArray[3] = {'a','l','y'};
    for (int i = 0; i < 3; i++){
        if(i==0){
            printf("name: ");
        }
        printf("%c",nameArray[i]);
        if (i == 2)
        {
            printf("\n");
        }
    }
    printf("---------------\n");
    char name[] = {'x','y','z','t','g','h'};
    printf("name with %%s : %s \n",name);
    functionPrint(2);
    functionPrint(functionSum(3 ,5));

    //function u mainden sonra yazarsak main oncesinde declare etmemiz gerekir.
    functionPrint(functionCalculator(10,20));
    return EXIT_SUCCESS;
}

int functionCalculator(int a, int b){
    return a + b;
}