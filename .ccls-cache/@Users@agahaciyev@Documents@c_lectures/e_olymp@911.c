#include<stdio.h>
#include<math.h>

int main()
{
    int a, b, c, D;
    scanf("%d %d %d", &a, &b, &c);
    D = pow(b, 2) - 4*a*c ;
    if(D > 0){
        int x1 = (-b - sqrt(D))/(2*a);
        int x2 = (-b + sqrt(D))/(2*a);
        if(x1 > x2){
            printf("Two roots: %d %d", x2, x1); 
        }
        else{
            printf("Two roots: %d %d", x1, x2); 
        }
    }
    else if(D == 0){
        int x = (-b)/(2*a);
        printf("One root: %d", x); 
    }
    else{
        printf("No roots"); 
    }


}
