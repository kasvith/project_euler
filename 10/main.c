#include <stdio.h>
#include <stdbool.h>

int is_prime(int x){
    for (size_t i = 2; i*i <= x; i++)
    {
        if(x%i == 0) return 0;
    }
    return 1;
}

int main(int argc, char const *argv[])
{
    // unsigned long sum = 0;

    // for (size_t i = 2; i < 2000000; i++)
    // {
    //     for (size_t j = 2; j*j <= i; j++)
    //     {
    //         if(i%j == 0) return 0;
    //     }
    // }
    
    // printf("%lu\n", sum);
    // return 0;

    bool larger = false;
    int num = 0;

    num > 6 && (larger=true);
    printf("%d\n", larger);
}
