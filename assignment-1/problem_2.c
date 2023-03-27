/*H**********************************************************************
* FILENAME :        problem_2.c             
*
* DESCRIPTION :
*       Disardan liste seklinde aldigimiz input degerini, en olasi degerlere gore en buyuk alani hesaplatma.
*
* PUBLIC FUNCTIONS :
*       int     int areaFind(int* heights, int heightsSize)
*       int     int convertCharToIntArray(int* array4)
*       
*
* NOTES :
*       Listeyi : PDF de belirtildigi gibi [3,3,5,0,0,3,1,4] sekklinde vermemiz gerekmekte.
*       Kod bir EOF beklemekte Linux isletim sisteminde CTRL+D ile bu kodu durdurum diger islemlere devam ettirebilirsiniz.
*       See IMS FM0121 for detailed description.
*
*       Copyright ALI YILMAZ 2023.  All rights reserved.
*
* AUTHOR :    ALI YILMAZ        START DATE :    26 MARC 23
*
* CHANGES :
*       WILL BE UPDATED ALI YILMAZ 27 MARCH 23
* 
*
*H*/


#include <stdio.h>
#include<stdlib.h>
#include<stdio.h>
#include <stdbool.h>
#include <ctype.h>   
#include <string.h>

int areaFind(int* heights, int heightsSize);

int convertCharToIntArray(int* array4);

int main() {
    int heights[20];
    
    int heightsSize = convertCharToIntArray(heights);
    /*
    for (int i = 0; i < heightsSize; i++)
    {
       printf("heights: %d\n", heights[i]);
    }

    printf("heightSize: %d\n", heightsSize);
    
    
    */
    int bigArea = areaFind(heights, heightsSize);
    printf("RESULT : %d\n", bigArea);
    return 0;
}
int areaFind(int *heights, int heightsSize) {
    int bigArea = 0;
    for (int i = 0; i < heightsSize; i++) {
        int selectedArea = heights[i];
        for (int j = i - 1; j >= 0; j--) {
            if (heights[j] >= heights[i]) {
                selectedArea += heights[i];
            } else {
                break;
            }
        }
        for (int j = i + 1; j < heightsSize; j++) {
            if (heights[j] >= heights[i]) {
                selectedArea += heights[i];
            } else {
                break;
            }
        }
        if (selectedArea > bigArea) {
            bigArea = selectedArea;
        }
    }
    return bigArea;
}


int convertCharToIntArray(int* array4){
    char array_numb[30];
    int array3[30];
    char *ptrSplit;
    int count = 0;
    printf("\e[32m");
        printf("****************************************************\n*********************\e[39mALI YILMAZ\e[32m*********************\n*********************\e[39m180101021\e[32m**********************\n*********************\e[39mPROBLEM_2\e[32m******************************\n");

    printf("Please enter prices array like [2,1,5,6,7,8,9] after that press EOF(in linux use CTRL+D): ");
    for (int i = 0; i < 30; i++)
    {
        scanf("%c", &array_numb[i]);
    }

    for (int i = 0; i < 30; i++)
    {
        
        for (int j = i; j < 30; j++)
        {
           if(isdigit(array_numb[j]))
           {
               // printf("i deger: %d \n", i);
                //printf("isDigit: %c\n", array_numb[j]);
                array3[count] = array_numb[j] - '0';
               // printf("array3 %d: %d\n", count, array3[count]);
                count++;
           }
           break;
        }
    }
    for (int i = 0; i < count; i++)
    {
        array4[i] = array3[i];
    }

    return  count;
}
