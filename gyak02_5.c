#include <stdio.h> 

int main()
{
    int a, b, tmp;

    printf("\n Adj meg ket szamot: a b formaban \n");
    scanf("%d %d", &a, &b);
   
    tmp = a; 
    a = b; 
    b = tmp;

    printf("\nCsere utan a = %d, b = %d\n", a, b);
    
    return 0;
}