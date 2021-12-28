#include <stdio.h>
#include <conio.h>

void main()
{
    int i,j,sum,sub,mul,div,mod;
    
    printf("Enter the value of i & j\n");
    scanf("%d%d",&i,&j);

    sum = i+j;
    sub = i-j;
    mul = i*j;
    div = i/j;
    mod = i%j;

    printf("\n sum=%d \nsum=%d \nmul=%d \ndiv=%d \nmod=%d",sum,sub,mul,div,mod);
    getch();

}
