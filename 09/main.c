#include <stdio.h>

int main(int argc, char const *argv[])
{
    for (int i = 1; i < 250; i++)
    {
        for (int j = i; j < 250 - i ; j++)
        {
            if((j*(i+j)) == 500){
                int a = j*j - i*i;
                int b = 2*i*j;
                int c = i*i + j*j;
                printf("%d %d %d abc=%d\n", a, b, c, a*b*c);
                break;
            }
        }
        
    }
    
    return 0;
}
