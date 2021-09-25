// program to find cube of a number 
#include<stdio.h>
void main()
{
    int num,cube;
    //take value f num
    printf(" \n Please Enter any integer Value : ");
    //scan value
    scanf("%d", &num);
    //formula
    cube = num*num*num;
    //reuslt. %d is like place holder
    printf("\n Cube of a given number %d is  =  %d", num, cube);
}