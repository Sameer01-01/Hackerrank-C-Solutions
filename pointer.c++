#include <stdio.h>

void update(int *a,int *b) {
    int sum = *a+*b;
    int subtract;
    if(*a>*b)
    {
         subtract = *a-*b;
    }  
    else
    {
        subtract = *b-*a;
    }
     *a = sum;
   *b = subtract;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}