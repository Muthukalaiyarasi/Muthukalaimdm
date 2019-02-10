#include <stdio.h>

int main()
{
    int length, width, height, surfaceArea,volume;
    printf("Enter length width and height of cuboid\n");
    scanf("%d %d %d", &length, &width, &height);
    surfaceArea = 2*(length*width + width*height + height*length);
    volume = length*width*height;
 
    printf("%d %d",surfaceArea,volume);

    return 0;
}
