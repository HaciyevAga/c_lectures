#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h1, m1, s1, h2, m2, s2;
    scanf("%d %d %d", &h1, &m1, &s1);
    scanf("%d %d %d", &h2, &m2, &s2);

    int start_second = h1*3600 + m1*60 + s1;
    int finish_second = h2*3600 + m2*60 + s2;

    int duration_seconds = finish_second - start_second;
    
    int duration_hours = duration_seconds / 3600;
    duration_seconds = duration_seconds % 3600;
    int duration_minutes = duration_seconds / 60;
    duration_seconds = duration_seconds % 60;

    printf("%d %d %d", duration_hours, duration_minutes, duration_seconds);

    return 0;
}
