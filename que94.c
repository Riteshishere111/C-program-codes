/* WAP to input a number and print factorial value of each digit of ex if number is 35 factorial value of 5=120 , factorial value of 3=6. */

#include <stdio.h>
#include <conio.h>

int main() 
{
    int n , j, remainder, fact, i;

    printf("\n \t Enter a number: ");
    scanf("%d", &n);

    for (j=n; j > 0; j = j / 10) 
    {
        remainder = j % 10; 
        fact = 1;

        for (i = 1; i <= remainder; i++) 
        {
            fact = fact * i;
        }

        printf("\n Factorial of %d = %d", remainder, fact);
    }
}
