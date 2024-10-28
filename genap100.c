#include <stdio.h>

int main(){
    for (int i = 1; i < 100; i++)
    {
        if (i % 2 == 0)
        {
             for (int j = 1; j < i; j++)
        {
            printf("%d ",j);
        }
        }
        printf("\n");
    }
    return 0;
}