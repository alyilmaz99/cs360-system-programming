#include<stdlib.h>
#include<stdio.h>
#include <stdbool.h>
#include <ctype.h>   
#include <string.h>
int maxProfit(int *prices, int pricesSize, int *buyDays, int *sellDays);
int maxProfitOneTransaction(int *prices, int pricesSize, int *buyDays, int *sellDays);

int main()
{

        
    int array[5] = {1,0,3,3,5};
    int buyDays[1] = {1};
    int sellDays[1] = {4};


    printf("-----------------\nmaxProfit1: %d\n", maxProfitOneTransaction(array, 5,buyDays, sellDays));
    int array2[7] = {3,3,5,0,3,1,6};
    int buyDays2[2] = {3,5};
    int sellDays2[2] = {4,6};
    

    printf("-----------------\nmaxProfit2: %d\n", maxProfit(array2, 8, buyDays2, sellDays2));

    return EXIT_SUCCESS;
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