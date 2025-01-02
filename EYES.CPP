#include <conio.h>
#include <dos.h>
#include <graphics.h>
void eyes();
void main(){
int gd=DETECT,gm;
int count=0;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
while(!kbhit()){
cleardevice();
eyes();

for(int i=0;i<=100;i++){
int r=100,r1=200;
setcolor(BLACK);
line(getmaxx()/2-150-r,getmaxy()/2+i-100,getmaxy()/2+i-100);//left
line(getmaxx()/2-150+r1,getmaxy()/2+i-100,getmaxx(),getmaxy()/2+i-100);
delay(1);
}
delay(10);
}
closegraph();
}
void eyes(){
int r=120,r1=170;//actual 100,200
setcolor(WHITE);
setfillstyle(1,WHITE);

ellipse(getmaxx()/2-4-r,getmaxy()/2,15,160,140,100);//left
ellipse(getmaxx()/2-r,getmaxy()/2-55,194,340,140,75);//left
floodfill(getmaxx()/2-r,getmaxy()/2,WHITE);//left

ellipse(getmaxx()/2-4+r1,getmaxy()/2,15,160,140,100);//right
ellipse(getmaxx()/2+r1,getmaxy()/2-55,194,340,140,75);//right
floodfill(getmaxx()/2+r1,getmaxy()/2,WHITE);//right

setcolor(BLACK);
circle(getmaxx()/2-r,getmaxy()/2-20,50);//left
circle(getmaxx()/2+r1,getmaxy()/2-20,50);//right
setfillstyle(1,RED);
floodfill(getmaxx()/2-r,getmaxy()/2-20,BLACK);//left
floodfill(getmaxx()/2+r1,getmaxy()/2-20,BLACK);//right

circle(getmaxx()/2-r,getmaxy()/2-20,25);//left
circle(getmaxx()/2+r1,getmaxy()/2-20,25);//right
setfillstyle(1,BLACK);
floodfill(getmaxx()/2-r,getmaxy()/2-20,BLACK);//left
floodfill(getmaxx()/2+r1,getmaxy()/2-20,BLACK);//right

setcolor(WHITE);
circle(getmaxx()/2-30-r,getmaxy()/2+30-20,3);//left
circle(getmaxx()/2-30+r1,getmaxy()/2+30-20,3);//right
setfillstyle(1,WHITE);
floodfill(getmaxx()/2-30-r,getmaxy()/2+30-20,WHITE);//left
floodfill(getmaxx()/2-30+r1,getmaxy()/2+30-20,WHITE);//right
delay(1000);

for(int i=0;i<=100;i++){
setcolor(BLACK);
line(getmaxx()/2-150-r,getmaxy()/2+i-100,getmaxx(),getmaxy()/2+i-100);//left
line(getmaxx()/2-150+r1,getmaxy()/2+i-100,getmaxx(),getmaxy()/2+i-100);

delay(1);
line(getmaxx()/2-150-r,getmaxy()/2+100-i,getmaxx(),getmaxy()/2+100-i);//left
line(getmaxx()/2-150+r1,getmaxy()/2+100-i,getmaxx(),getmaxy()/2+100-i);//right

delay(1);
}
}