#include <stdio.h>

int gcd(int a, int b){
    int t;
    while (b != 0)
    {
        t = b;
        b = a%b;
        a = t;
    }
    return a;
}

int lcm(int a, int b){
    return (a/gcd(a,b))*b;
}

int main(int argc, char const *argv[])
{
    int result = 1;
    for (size_t i = 2; i <= 20; i++)
    {
        result = lcm(result, i);
    }

    printf("%d\n", result);
    
    return 0;
}
