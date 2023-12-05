#include<stdio.h>
#include<stdlib.h>

void drawLineBresenham(int x1, int x2, int y1, int y2){
int dx = abs(x2-x1);
int dy = abs(y2-y1);

int p = 2 * dy - dx;

int x,y;
if(x2 < x1){
    x=x2;
    y=y2;
    x2=x1;
}else{
   x=x1;
   y=y1;
}
printf("Bresenham's line drawing algorithm : \n (%d,%d)\n",x,y);
while( x < x2 ){
    if(p<0){
        x++;
        y = y;
        p = p + (2 * dy);
    }
        else{
            x++;
            y++;
             p = (p + (2 * dy) - (2 * dx));
        }
    printf("(%d,%d)\n",x,y);
}

}
int main(){

int x1,x2,y1,y2;
printf("input starting points (x1,y1): ");
scanf("\n%d \n%d",&x1,&y1);

printf("input Ending points (x2,y2): ");
scanf("\n%d \n%d",&x2,&y2);

drawLineBresenham(x1,x2,y1,y2);

return 0;

}
