#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
#include<dos.h>
void ffill(int x,int y,int o,int n)
{
int p;
p=getpixel(x,y);
if(p==o)
{
putpixel(x,y,n);
ffill(x,y-1,o,n);
ffill(x,y+1,o,n);
ffill(x-1,y,o,n);
ffill(x+1,y,o,n);
}
}

void main()
{
int p,x0,y0,x1,y1,x2,y2,x3,y3;
int score=0;
double u,a,b;
int i,j,s;
int gd=DETECT,gm;
initgraph(&gd,&gm,"");
//line(213,239,223,239);
//line(223,239,10,470);
//line(10,470,0,470);
setcolor(YELLOW);
settextstyle(3,0,5);
outtextxy(200,0,"WELCOME");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
setcolor(RED);
line(0,70,639,70);
setcolor(WHITE);
printf("\n");
printf("\n");
printf("Instructions:\n");
printf("1.Limits:\n");
printf("\tx co-ordinate limit:243<x<400\n");
printf("\ty co-ordinate limit:239<=y<440\n");
printf("2.y co-ordinate in a particular iteration should be less than its value in prev-ious iteration\n");
printf("Enter 1 to start\n");
scanf("%d",&s);
clrscr();
cleardevice();
line(0,470,213,239);
line(426,239,638,470);
line(213,239,426,239);
line(213,0,213,239);
line(426,0,426,239);
line(223,239,10,470);
line(233,239,20,470);
line(243,239,30,470);
line(416,239,628,470);
line(406,239,618,470);
line(396,239,608,470);
line(243,0,243,239);
line(396,0,396,239);
rectangle(309,209,329,239);
ffill(319,219,BLACK,BLUE);
rectangle(334,219,344,239);
ffill(339,229,BLACK,BLUE);
rectangle(294,219,304,239);
ffill(299,229,BLACK,BLUE);
circle(319,440,20);
ffill(319,440,BLACK,RED);

for(j=0;j<1;j++)
{
x0=319;
y0=440;
printf("Enter first point(x,y)");
scanf("%d%d",&x1,&y1);
printf("Enter second point(x,y)");
scanf("%d%d",&x2,&y2);
printf("Enter third point(x,y)");
scanf("%d%d",&x3,&y3);

for(u=0.0;u<1.0;u+=0.005)
{
clrscr();
cleardevice();
line(0,470,213,239);
line(426,239,638,470);
line(213,239,426,239);
line(213,0,213,239);
line(426,0,426,239);
line(223,239,10,470);
line(233,239,20,470);
line(243,239,30,470);
line(416,239,628,470);
line(406,239,618,470);
line(396,239,608,470);
line(243,0,243,239);
line(396,0,396,239);
rectangle(309,209,329,239);
ffill(319,219,BLACK,BLUE);
rectangle(334,219,344,239);
ffill(339,229,BLACK,BLUE);
rectangle(294,219,304,239);
ffill(299,229,BLACK,BLUE);

a=pow(1-u,3)*x0+3*u*pow(1-u,2)*x1+3*pow(u,2)*(1-u)*x2+pow(u,3)*x3;
b=pow(1-u,3)*y0+3*u*pow(1-u,2)*y1+3*pow(u,2)*(1-u)*y2+pow(u,3)*y3;
circle(a,b,20);
ffill(a,b,BLACK,RED);
delay(1);
}
if(x3==319 && y3==239)
{
score=score+100;
clrscr();
cleardevice();
line(0,470,213,239);
line(426,239,638,470);
line(213,239,426,239);
line(213,0,213,239);
line(426,0,426,239);
line(223,239,10,470);
line(233,239,20,470);
line(243,239,30,470);
line(416,239,628,470);
line(406,239,618,470);
line(396,239,608,470);
line(243,0,243,239);
line(396,0,396,239);
printf("Hit!!\n");
printf("Score:%d\n",score);
rectangle(309,219,339,239);
ffill(319,229,BLACK,BLUE);

rectangle(342,229,362,239);
ffill(352,234,BLACK,BLUE);
rectangle(286,229,306,239);
ffill(296,234,BLACK,BLUE);
circle(319,268,20);
ffill(319,268,BLACK,RED);
}

else
{
printf("Bad luck!!!\n");
printf("Score:%d\n",score);
delay(10);
}
}
printf("Press 1 to exit:");
scanf("%d",&p);
clrscr();
cleardevice();
setcolor(RED);
//textattr(143);
settextstyle(3,0,5);
outtextxy(200,0,"GAME OVER");
setcolor(YELLOW);
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\t\t\t\tFinal score:%d",score);


getch();
closegraph();
}