/*H**********************************************************************
* FILENAME :        problem_1.c             
*
* DESCRIPTION :
*       Disardan liste seklinde aldigimiz input degerini, en olasi degerlere gore satis yaptirma.
*
* PUBLIC FUNCTIONS :
*       int     maxProfit(int *prices, int pricesSize, int *buyDays, int *sellDays)
*       int     maxProfitOneTransaction(int *prices, int pricesSize, int *buyDays, int *sellDays)
*       int     convertCharToIntArray(int* array4)
*
* NOTES :
*       Listeyi : PDF de belirtildigi gibi [3,3,5,0,0,3,1,4] sekklinde vermemiz gerekmekte.
*       Kod bir EOF beklemekte Linux isletim sisteminde CTRL+D ile bu kodu durdurum diger islemlere devam ettirebilirsiniz.
*       See IMS FM0121 for detailed description.
*
*       Copyright ALI YILMAZ 2023.  All rights reserved.
*
* AUTHOR :    ALI YILMAZ        START DATE :    25 MARC 23
*
* CHANGES :
*       WILL BE UPDATED ALI YILMAZ 26 MARCH 23
* 
*
*H*/

#include<stdlib.h>
#include<stdio.h>
#include <stdbool.h>
#include <ctype.h>   
#include <string.h>
int maxProfit(int *prices, int pricesSize, int *buyDays, int *sellDays);
int maxProfitOneTransaction(int *prices, int pricesSize, int *buyDays, int *sellDays);
int convertCharToIntArray(int* array4);

int maxValueFind(int *testArray, int size){
    int maxValue = 0;
    for (int i = 0; i < size; i++)
    {

        if (maxValue < testArray[i])
        {
            maxValue = testArray[i];
        }
    }
    return maxValue;
}
int minValueFind(int *testArray, int size){
    int minValue = 100;
    for (int i = 0; i < size; i++)
    {
        if (minValue > testArray[i])
        {
            
            minValue = testArray[i];
        }
    }
    return minValue;
}

int main()
{

    int temp[30];
    int numberOfPrice= convertCharToIntArray(temp);
    /*
    for (int i = 0; i < numberOfPrice; i++)
    {
        printf("%d\n", temp[i]);
    }
    */
  
    int countArraySize = 0;
    int countArraySize2 = 0;
    int buyTest[2];
    int buyTest1[1] = {0};
    int sellTest1[1] = {0};
    bool isSelled = true;
    //int maxValue = maxValueFind(testArray,5);
    //int minValue = minValueFind(testArray,5);
    //printf("max Value: %d\n", maxValue);
    //printf("minValue: %d\n", minValue);

    for (int i = 0; i < numberOfPrice; i++)
    {  
       if (temp[i] < temp[i +1] && isSelled == true && countArraySize<2)
       {
            
            for (int j = 0; j < numberOfPrice; j++)
            {
                if (buyTest1[0] > sellTest1[j])
                {
                    countArraySize++;
                    buyTest1[0] = i;
                    isSelled = false;
                }else{
                    countArraySize++;
                    buyTest1[0] = i;
                    isSelled = false;
                }            
            }
       }
       if (temp[i] < temp[i+1] && isSelled != true && countArraySize2 <2)
       {
            for (int j = 0; j < numberOfPrice; j++)
            {
                if (sellTest1[0] < temp[j])
                { 
                    countArraySize2++;
                    sellTest1[0] = j;
                    isSelled = true;
                }
            }      
       }
    }
    for (int i = 0; i < 1; i++)
    {
       printf("arrayBuyDays: %d\n", buyTest1[i]);
       printf("arraySellDays: %d\n", sellTest1[i]);
    }
   
    printf("-----------------\nmaxProfit temp: %d\n", maxProfitOneTransaction(temp, numberOfPrice,buyTest1, sellTest1));

    /*
    int temp2[30];
    int numberOfPrice2 = convertCharToIntArray(temp2);

    int buyDays2[2] = {3,5};
    int sellDays2[2] = {4,6};

    printf("-----------------\nmaxProfit2: %d\n", maxProfit(temp2, numberOfPrice2, buyDays2, sellDays2));
    */
    return EXIT_SUCCESS;
}

int convertCharToIntArray(int* array4){
    char array_numb[30];
    int array3[30];
    char *ptrSplit;
    int count = 0;
    printf("\e[32m");
        printf("****************************************************\n*********************\e[39mALI YILMAZ\e[32m*********************\n*********************\e[39m180101021\e[32m**********************\n*********************\e[39mPROBLEM_1\e[32m******************************\n");

    printf("Please enter prices array like [1,2,3,4,5] after that press EOF(in linux use CTRL+D): ");
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

int maxProfitOneTransaction(int *prices, int pricesSize, int *buyDays, int *sellDays){
    int maxPrice = 0;
    int minPrice = 0;
    int buyPrice = 0;
    int sellPrice = 0;
    int maxProfit = 0;
    bool isSelled = true;
    for (int i = 0; i < pricesSize; i++)
    {
        if(maxPrice < prices[i]){
            maxPrice = prices[i];
        }
        
    }
    for (int i = 0; i < pricesSize; i++)
    {
        for (int j = 0; j< (sizeof(buyDays)/ sizeof(buyDays[0]))-1 ; j++)
        {
            //printf("i in buy: %d\n", i);
            
            if (buyDays[j] == i && isSelled == true)
            {
               //printf("j in buy: %d\n", j);
                //printf("buyDays: %d\n", buyDays[j]);
                //printf("size: %d\n", (sizeof(buyDays) / sizeof(buyDays[0])));
                buyPrice = prices[i];
              // printf("buyPrice : %d\n", buyPrice);
                isSelled = false;
            }
        }
        for (int k = 0; k < (sizeof(sellDays)/ sizeof(sellDays[0]))-1; k++)
        {   
           // printf("i in sell: %d\n", i);
            if (sellDays[k]== i && isSelled==false)
            {
                //printf("sellDays: %d\n", sellDays[k]);
                //printf("size: %d\n", (sizeof(sellDays) / sizeof(sellDays[0])));
                sellPrice = prices[i];
               //printf("sellPrice : %d\n", sellPrice);
                isSelled = true;
                maxProfit += sellPrice - buyPrice;
            }
        }
       
       //printf("maxProfit in loop: %d\n", maxProfit);
    }

      //printf("max price : %d\n", maxPrice);
      //printf("maxProfit: %d\n", maxProfit);

    return maxProfit;
}
int maxProfit(int *prices, int pricesSize, int *buyDays, int *sellDays){
    int maxPrice = 0;
    int minPrice = 0;
    int buyPrice = 0;
    int sellPrice = 0;
    int maxProfit = 0;
    bool isSelled = true;
    for (int i = 0; i < pricesSize; i++)
    {
        if(maxPrice < prices[i]){
            maxPrice = prices[i];
        }
        
    }
    for (int i = 0; i < pricesSize; i++)
    {
        for (int j = 0; j< (sizeof(buyDays)/ sizeof(buyDays[0])) ; j++)
        {
            //printf("i in buy: %d\n", i);
            
            if (buyDays[j] == i && isSelled == true)
            {
               //printf("j in buy: %d\n", j);
                //printf("buyDays: %d\n", buyDays[j]);
                //printf("size: %d\n", (sizeof(buyDays) / sizeof(buyDays[0])));
                buyPrice = prices[i];
               //printf("buyPrice : %d\n", buyPrice);
                isSelled = false;
            }
        }
        for (int k = 0; k < (sizeof(sellDays)/ sizeof(sellDays[0])); k++)
        {   
            //printf("i in sell: %d\n", i);
            if (sellDays[k]== i && isSelled==false)
            {
                //printf("sellDays: %d\n", sellDays[k]);
                //printf("size: %d\n", (sizeof(sellDays) / sizeof(sellDays[0])));
                sellPrice = prices[i];
              // printf("sellPrice : %d\n", sellPrice);
                isSelled = true;
                maxProfit += sellPrice - buyPrice;
            }
        }
       
       //printf("maxProfit in loop: %d\n", maxProfit);
    }

      //printf("max price : %d\n", maxPrice);
      //printf("maxProfit: %d\n", maxProfit);

    return maxProfit;
}