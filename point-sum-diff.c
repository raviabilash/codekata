#include <stdio.h>

void update(int *a,int *b) {
    int j,k;
    j= *a+ *b;
    k= *b -*a;
    printf("%d\n%d",j,k);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);

    return 0;
}

