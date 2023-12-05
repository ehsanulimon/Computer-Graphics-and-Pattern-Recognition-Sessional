#include <stdio.h>

void drawLineBresenham(int x1, int y1, int x2, int y2) {
    int dx = abs(x2 - x1);
    int dy = abs(y2 - y1);

    int p = 2 * dy - dx;
    int twoDy = 2 * dy;
    int twoDyMinusDx = 2 * (dy - dx);

    int x, y;

    if (x1 > x2) {
        x = x2;
        y = y2;
        x2 = x1;
    } else {
        x = x1;
        y = y1;
    }

    printf("Bresenham's Line Drawing:\n");
    printf("(%d, %d)\n", x, y);

    while (x < x2) {
        x++;

        if (p < 0) {
            p += twoDy;
        } else {
            y++;
            p += twoDyMinusDx;
        }

        printf("(%d, %d)\n", x, y);
    }
}

int main() {
    int x1, y1, x2, y2;

    printf("Enter the starting point (x1, y1): ");
    scanf("%d %d", &x1, &y1);
    
    printf("Enter the ending point (x2, y2): ");
    scanf("%d %d", &x2, &y2);

    drawLineBresenham(x1, y1, x2, y2);

    return 0;
}
