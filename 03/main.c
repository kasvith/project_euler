#include <stdio.h>

int main(int argc, char const *argv[])
{
    unsigned long num = 600851475143;
    unsigned long p = 2;
    
    while (num >= p*p)
    {
        if(num%p == 0){
            num/= p;
        }else{
            p++;
        }
    }
    
    printf("%lu\n", num);
    return 0;
}
