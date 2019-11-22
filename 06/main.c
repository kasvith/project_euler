#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n = 100;
    int t1 = n*(n+1);
    int n1 = t1*(2*n+1)/6;
    int n2 = t1*t1/4;
    
    printf("Result %d\n", n2-n1);
    return 0;
}
