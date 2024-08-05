#include <ctype.h>
#include <stdio.h>

int main(void)
{
    
    int dep1, dep2, dep3, dep4, dep5, dep6, dep7, dep8;
    
    int hr, min;
    char a, b;
    int time;

    dep1 = 8 * 60;
    dep2 = 9 * 60 + 43;
    dep3 = 11 * 60 + 19;
    dep4 = 12 * 60 + 47;
    dep5 = 14 * 60;
    dep6 = 15 * 60 + 45;
    dep7 = 16 * 60;
    dep8 = 18 * 60 + 45;

    printf("Enter a 24 hr time: ");
    scanf("%d:%d%c%c", &hr, &min, &a, &b);
    
    if (tolower(a) == 'p')
    {
        hr = 12 + hr;
    }
    time = hr * 60 + min; 
    
    if (time < dep1)
        printf("Closet departure time is %d:%d a.m., arriving at 10:16 a.m.", dep1/60, dep1%60);
    else if (time < dep2)
        printf("Closet departure time is %d:%d a.m., arriving at 11:52 p.m.", dep2/60, dep2%60);
    else if (time < dep3)
        printf("Closet departure time is %d:%d a.m., arriving at 1:31 p.m.", dep3/60, dep3%60);
    else if (time < dep4)
        printf("Closet departure time is %d:%d p.m., arriving at 3:00 p.m.", dep4/60, dep4%60);
    else if (time < dep5)
        printf("Closet departure time is %d:%d p.m., arriving at 4:08 p.m.", dep5/60 - 12, dep5%60);
    else if (time < dep6)
        printf("Closet departure time is %d:%d p.m., arriving at 5:55 p.m.", dep6/60 - 12, dep6%60);
    else if (time < dep7)
        printf("Closet departure time is %d:%d p.m., arriving at 9:20 p.m.", dep7/60 - 12, dep7%60);
    else if (time < dep8)
        printf("Closet departure time is %d:%d p.m., arriving at 11:58 p.m.", dep8/60 - 12, dep8%60);

    return 0;
}
