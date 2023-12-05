#include <stdio.h>

void drawCircleMidpoint(int radius) {
    int x = 0;
    int y =radius;
    int d = 1 - radius;

    printf("Midpoint Circle Drawing:\n");
      printf("state i:%d :\b",x);
    printf("d =  %d (%d, %d)\n",d, x, y);
    while (x < y) {
     

        if (d < 0) {
        	   x++;
            d = d + 2 * x + 1;
        } else {
        	   x++;
               y--;
            d = d + 2 * x - 2 * y + 1;
        }

      


     printf("state i:%d :\b",x);
     printf("d =  %d (%d, %d)\n",d, x, y);     
        if (x != y && x != 0 && y != 0) {
            printf("putpixel(%d, %d)\n", x, y);
            printf("putpixel(%d, %d)\n", x, -y);
            printf("putpixel(%d, %d)\n", -x, -y);
            printf("putpixel(%d, %d)\n", -x, y);
            printf("putpixel(%d, %d)\n", y, x);
            printf("putpixel(%d, %d)\n", y, -x);
            printf("putpixel(%d, %d)\n", -y, -x);
            printf("putpixel(%d, %d)\n", -y, x);
        }
    }
}

int main() {
    int radius;

    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);

    drawCircleMidpoint(radius);

    return 0;
}
