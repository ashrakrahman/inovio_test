#include <iostream>
#include <cstdio>

using namespace std ;
int main(void)
{
    int i, s, row, k=0;

    printf("Rows: ");
    scanf("%d",&row);

    for(i=1; i<=row; ++i, k=0)
    {
        for(s=1; s<=row-i; ++s)
        {
            printf("  ");
        }

        while(k != 2*i-1)
        {
            printf(" *");
            ++k;
        }

        printf("\n");
    }

    return 0;
}
