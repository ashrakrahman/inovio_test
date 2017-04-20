#include <iostream>
#include <cstdio>
#include <map>

using namespace std ;

int main (void){

    map <int,int> ob ;
    map <int,int> :: iterator it;
    int n ,x ;
    cin>> n ;
    for (int i=0 ;i<n ;i++){
        cin>> x ;
        ob[x]= i ;
    }

    for ( it= ob.begin() ; it!= ob.end() ; it++)
            cout << it->first << endl ;

    return 0;
}
