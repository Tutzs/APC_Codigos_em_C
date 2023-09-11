#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++)
    {
        if(i % 2 != 0){
            printf("THUMS THUMS THUMS\n");
        }
        else{
            if(i % 2 == 0){
                printf("THUMS THUMS THUMS THUMS THUMS THUMS\n");
            }
        }
    }
    
    return 0;
}
