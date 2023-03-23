#include<stdlib.h>
#include<stdio.h>

struct student{
    double note;
    int stdNo;
}std1,std2;
struct teacher
{
    double lessonsNumber;
    int price;
    int age;
} teacher1;

int main(){
    //yukardaki tanimlama disinda struct sonuna degisken isimlendirmesi seklinde de tanimalama yapilabilmekte.
    //struct student std1,std2;

    std1.note = 50;
    std1.stdNo = 180101021;
    printf("student number: %d\n", std1.stdNo);
    printf("student note: %f\n", std1.note);
    printf("sizeof student: %d\n", sizeof(std1));
    printf("sizeof student2: %d\n", sizeof(std2));
    printf("sizeof teacher: %d\n", sizeof(teacher1));
    return EXIT_SUCCESS;
}