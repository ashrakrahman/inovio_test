#include <iostream>
#include <cstring>
#include <cstdio>
#include <string>
#include <map>

using namespace std ;

int main (void){
    map <string,string> ob ;
    map <string,string> :: iterator it;

    ob["01"]="JAN";
    ob["02"]="FEB";
    ob["03"]="MAR";
    ob["04"]="APR";
    ob["05"]="MAY";
    ob["06"]="JUN";
    ob["07"]="JUL";
    ob["08"]="AUG";
    ob["09"]="SEP";
    ob["10"]="OCT";
    ob["11"]="NOV";
    ob["12"]="DEC";

    int n ;
    char input[10],month[10],year[10];
    scanf("%d\n",&n);
    while (n--){
        scanf("%s",&input);
        month[0]= input[4];
        month[1]= input[5];
        month[2]= '\0';

        year[0]= input[2];
        year[1]= input[3];
        year[2]= '\0';

        string str(month);

        for ( it= ob.begin() ; it!= ob.end() ; it++)
            if (it->first == str)
                cout << it->second <<year<<endl ;

    }

    return 0 ;
}
