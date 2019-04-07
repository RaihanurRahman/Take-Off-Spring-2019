#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    puts((n % 2 == 0 && n % 3 == 0)? "Guest":"Enemy");
    return 0;
}
