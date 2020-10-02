/**
 * C++ program to check whether a number is Strong Number or not
 */

#include <iostream>
using namespace std;

int main()
{
    int i, originalNum, num, lastDigit, sum;
    long fact;

    /* Input a number from user */
    cout<<"Enter any number to check Strong number: "<<endl;
    scanf("%d", &num);

    /* Copy the value of num to a temporary variable */
    originalNum = num;

    sum = 0;

    /* Find sum of factorial of digits */
    while(num > 0)
    {

        /* Get last digit of num */
        lastDigit = num % 10;

        /* Find factorial of last digit */
        fact = 1;
        for(i=1; i<=lastDigit; i++)
        {
            fact = fact * i;
        }

        /* Add factorial to sum */
        sum = sum + fact;

        num = num / 10;
    }

    /* Check Strong number condition */
    if(sum == originalNum)
    {
        cout<<originalNum<<" is STRONG NUMBER";
    }
    else
    {
        cout<<originalNum<<" is NOT STRONG NUMBER";
    }

    return 0;
}