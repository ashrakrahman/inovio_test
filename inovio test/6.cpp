#include <iostream>
#include <map>
#include <cstdio>

using namespace std ;

int main (void)
{

    int n ,count0=0,count1=0,x,ans;
    scanf("%d",&n);
    for (int i=0 ;i<n ;i++){
        cin>> x ;
        if (x==0){
            count0= count0 + 1 ;
        }
        if (x==1){
            count1= count1+ 1 ;
        }

    }

    if (count0<count1){
        ans = count0*2 ;
    }
    if (count0>count1){
        ans = count1*2 ;
    }
    if (count0==count1){
        ans = count0*2 ;
    }

    cout << "1 " << "to " << ans<<endl ;


    return 0 ;
}
