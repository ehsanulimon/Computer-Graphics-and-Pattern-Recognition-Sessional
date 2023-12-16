#include <stdio.h>

void drawCircleBresenham(int radius) {
    int x = 0;
	int y = radius;
    int d = 3 - 2 * radius;

    printf("Bresenham's Circle Drawing:\n");
    printf("(%d, %d)\n", x, y);

    while (x <= y) {
        x++;

        if (d <= 0) {
            d = d + 4 * x + 6;
        } else {
            y--;
            d = d + 4 * (x - y) + 10;
        }

        printf("(%d, %d)\n", x, y);

         if (x != 0 && y != 0) {
            printf("(%d, %d)\n", y, x);
        }

        if (x != y) {
            printf("(%d, %d)\n", x, -y);
            printf("(%d, %d)\n", y, -x);
        }

        if (x != y) {
            printf("(%d, %d)\n", -y, x);
            printf("(%d, %d)\n", -x, y);
        } 
    }
}

int main() {
    int radius;

    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);

    drawCircleBresenham(radius);

    return 0;
}
