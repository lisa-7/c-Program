#include <stdio.h>          // define the header file
void main()                 // define the main function, that is program starts from here
{                           //program is written between brackets
    int a, b;               //declare variable
    scanf("%d", &a);        //scanf is use to take the value
    scanf("%d", &b);        // %d holds the value for variable
    printf("a = %d \n", a); //\n is to use take sentence on otherline
    printf("b= %d", b);     // ,b is for the value so the %d gives value of a and b 
    
    int sum, sub, mul, div;         //sum is add, difference is subtract, product is mul, you can name the variable anything you want except reseved words, like main, void etc.
    sum = a+b;                      // code for how the fuction should work
    sub= a-b;
    mul= a*b;                       // for multiplication we use *
    div= a/b;

    printf("\nSum = %d",sum);
    printf("\nDfference = %d",sub);
    printf("\nProduct = %d",mul);
    printf("\nDivision = %d",div);
}