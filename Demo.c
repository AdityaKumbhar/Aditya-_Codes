/*
    Problem statement : Accept number from user and check whether the
    number is even or odd.
*/



#include<stdio.h>                       // Used for IO functions

typedef int BOOLEAN;                // New datatype as BOOLEAN treated as int

#define TRUE 1                      // User defined macro
#define FALSE 0                     // User defined macro

BOOLEAN ChkEvenOdd(int);    // Function prototype



// Entry point funcction from where execution starts

/////////////////////////////////////////////////////////////
//
// Function name :      ChkEvenOdd
// Parameters :           Integer
// Return value :         Integer
// Description :           It is used to check number is even / odd
// Author :                  Aditya Kumbhar
// Date :                     20 July 2020
//
//////////////////////////////////////////////////////////////

// Function Defination
BOOLEAN ChkEvenOdd(
                                    int iNo             // Input of the function
                                )
{
    int iReult = 0;                                 // Local variable
    
    iReult = iNo % 2;       // Mod operator which returns remainder after devision
    
    if(iReult == 1)         // If remainder is 1 means number is Odd
    {
        return FALSE;       // False indicates number is odd
    }
    else
    {
        return TRUE;        // True indicates numbe is even
    }
}


int main()
{
    int iValue = 0;                             // Local variable
    BOOLEAN iAnswer = FALSE;         // Local variable
    
    printf("Enter number\n");       // Display on screen
    scanf("%d",&iValue);              // Accept the input from keyboard
    
    iAnswer = ChkEvenOdd(iValue);   // Function call
    
    if(iAnswer == TRUE)                     // If number is even
    {
        printf("Number is even\n");
    }
    else                                              // If number is odd
    {
        printf("Number is odd\n");
    }
    
    return 0;                               // It indicates successfull termination.
}




