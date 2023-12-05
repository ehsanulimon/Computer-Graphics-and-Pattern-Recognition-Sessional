#include <stdio.h>
void drawLineDDA(int x1, int y1, int x2, int y2) {
    int dx = x2 - x1;
    int dy = y2 - y1;
    
   int k;
   if (abs(dx) > abs(dy)) {
        k = abs(dx);
       } 
	   else {
             k = abs(dy);
       }

    float xi = dx / (float)k;
    float yi = dy / (float)k;

    float x = x1, y = y1;

    printf("DDA Line Drawing:\n");
    printf("(%.2f, %.2f)\n", x, y);
     int i=1;
    for (i = 1; i<=k; i++) {
        x += xi;
        y += yi;
        printf("(%.2f, %.2f)\n", x, y);
    }
         
}

int main() {
    int x1, y1, x2, y2;
    
    printf("Enter the starting point (x1, y1): ");
    scanf("%d %d", &x1, &y1);
    
    printf("Enter the ending point (x2, y2): ");
    scanf("%d %d", &x2, &y2);

    drawLineDDA(x1, y1, x2, y2);

    return 0;
}
