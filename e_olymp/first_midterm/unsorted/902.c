#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    if(n > 1 && n <= 3){
        printf("Initial"); 
    }
    else if(n > 3 && n <= 6){
        printf("Average"); 
    }
    else if(n > 6 && n <= 9){
        printf("Sufficient"); 
    }
    else {
        printf("High");
    }

    return 0;
}
