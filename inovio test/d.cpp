#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std ;

int main (void){
    char str[100];
    char t ;
    int len ;
    scanf ("%d\n",&len);
    for (int i=0 ;i<len ;i++)
        scanf("%c",&str[i]);

    for (int i=0;i<len ;i++){
        cout<<str[i];
        if ((i+1)%3==0){
            printf("\n");
        }
    }

    return 0 ;
}
