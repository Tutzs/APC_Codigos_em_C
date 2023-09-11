#include <stdio.h>

int main()
{
    int n = 0, somapar = 0, somaimpar = 0;

    do
    {
        scanf("%d", &n);
        if (n % 2 == 0)
        {
            somapar = somapar + n;
        }
        else{
            if(n % 2 != 0){
                somaimpar = somaimpar + n;
            }
        }
        
    } while (n != 0);

    printf("%d %d\n", somapar, somaimpar);

    return 0;
}