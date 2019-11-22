#include <stdio.h>
#include <stdbool.h>

int is_palindrome(int n){
    int p = n;
    int t = 0;

    while (p != 0)
    {
        t *= 10;
        t += p%10;
        p /= 10;
    }
    return t == n;
}

int main(int argc, char const *argv[])
{
    int mul = 0;
    int largest = 0;
    for (size_t i = 999; i >= 100; i--)
    {
        for (size_t j = 999; j >= 100; j--)
        {
            mul = i*j;
            if (is_palindrome(mul)==1)
            {
                if (mul > largest)
                    largest = mul;
                break;
            }
        }
    }
    
    printf("palindrome %d\n", largest);
    return 0;
}

