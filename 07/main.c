#include <stdio.h>

int is_prime(int x){
    for (size_t i = 2; i*i <= x; i++)
    {
        if(x%i == 0) return 0;
    }
    return 1;
}

int main(int argc, char const *argv[])
{
    int n = 10001;
    int x = 2;
    int p;
    while (n > 0)
    {
        if (is_prime(x))
        {
            p = x;
            n--;
        }
        x++;
    }
    
    printf("%d\n", p);
    return 0;
}
