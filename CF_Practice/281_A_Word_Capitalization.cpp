#include <bits/stdc++.h>
#include <algorithm>
#define ll long long

int main(){
    int c[1000];
    scanf("%s", c);
    char a=c[0];
    if(((int)a)>(96)){
        c[0]-=32;
    }
    printf("%s", c);
    
    return 0;
}
