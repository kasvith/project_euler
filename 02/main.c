#include <stdio.h>

#define MAX 100
#define LIMIT 4000000

int main(int argc, char const *argv[])
{
    int a = 0;
    int b = 1;
    int c = 0;
    int sum = 0;
    for (size_t i = 2; i < MAX; i++)
    {
        c = a + b;
        a = b;
        b = c;

        if(c % 2 == 0 && sum < LIMIT) sum += c;
    }
    
    printf("%d\n", sum);

    return 0;
}
