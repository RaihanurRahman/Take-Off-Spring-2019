#include<stdio.h>

int main(){
	int L, T;
    scanf("%d %d", &L, &T);
    int ans = ((L-1)*3)+T;
    printf("%d\n", ans);
    return 0;
}