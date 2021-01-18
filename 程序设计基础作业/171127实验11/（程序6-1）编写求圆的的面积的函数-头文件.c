#include <stdio.h>
#include <stdlib.h>

int main()
{
    double area ( double );
    double radius1, radius2;
    double area1, area2, areaOfRing;

    scanf( "%lf%lf", &radius1, &radius2 ) ;

    area1 = area ( radius1 ) ;
    area2 = area ( radius2 ) ;

    if ( area1 >= area2 ) {
        areaOfRing = area1 - area2;
    }
    else {
        areaOfRing = area2 - area1;
    }

    printf("%.2lf", areaOfRing);

    return 0;

}

