#include <iostream>
#include <cstdio>
using namespace std;
int max_of_four(int a,int b,int c,int d){
    int z=0;
    int f=a>b?a:b;
    int g=c>d?c:d;
    z=f>g?f:g;
    return z;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

