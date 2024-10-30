#include <stdio.h>

int main()
{
    int n, f1, f2;
    scanf("%d", &n);
    int fd = n%10;
    int sd = (n/10)%10;
    int td = n/100;

    if (td < sd && td < fd) f1 = td;
    else if (sd < fd && sd < td) f1 = sd;
    else f1 = td; 
    


}
