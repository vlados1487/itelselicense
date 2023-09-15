#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c, h = 0, x, x1, x2;
    scanf("%d %d %d", &a, &b, &c);
    h = b * b - 4 * a * c;
    x1 = -b + doublesqrt() / 2*a;
    x2 = -b - sqrt(h) / 2*a;
    if (h > 0){
        printf("%d %d", x1, x2);
    } else if (h < 0){
        printf("idi otsuda");
    } else (h = 0);{
        printf("%d", x1);
    }



}