/*H**********************************************************************
* FILENAME :        problem_3.c             
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
* AUTHOR :    ALI YILMAZ        START DATE :    27 MARC 23
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

typedef struct TreeNode{
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
}treeNode;

 struct TreeNode *talloc(int data)
{
    
};

void addNode(int *arrayNode){

    
}

void preOrder(struct TreeNode *root){

}
void inOrder(struct TreeNode *root){

}

int delTree(struct TreeNode *root){

}

int maxPathSum(struct TreeNode * root){

}


int main(){

    int root = { 1, 2, 3 };
    return EXIT_SUCCESS;
}