#include <stdio.h>
#define N 1000
#define number1 3
#define number2 5

int sumDivisibleBy(int n)
{
    /*
    Returns the sum of all numbers divisible by n
    from 0 to N (N defined as macro)
    */

    /*
    result = n + 2*n + 3*n + ...
    Equals
    result = n * (1 + 2 + 3 + ... + (N-1)/n)
    Example, for n=3 result = (3+6+9+...+999) = 3*(1+2+3+...+333)
    Additionally (1+2+3+...+x) = 1/2 * x * (x+1)
    Combining both results we get:
    */
    int p = (N-1)/n;
    return ( n * p*(p+1) )/2;
}
int main(void)
{
    /*
    To get divisible by either number1 or number2
    Subtract numbers divisible by both(number1*number2),
    we counted them twice
    (divisible by number1 and number2 at the same time)
    */
    int sum = sumDivisibleBy(number1) + sumDivisibleBy(number2) - sumDivisibleBy(number1*number2);
    printf("Sum of all numbers divisible by %d or %d, bellow %d\n",number1,number2,N);
    printf("RESULT:  %d\n\n",sum);
    return 0;
}
