#include<conio.h>
#include<iostream.h>
#include<stdio.h>
#include<math.h>
#include<dos.h>
#include<graphics.h>
#include<process.h>
#include<string.h>
		       //class project
class project
{
public:
 void frd();
 };

void project::frd()
{
cout<<"\n\n                       *********Mini Project**********               \n";
cout<<"\n                      *    BAllS ARE COLORED AFTER COLLISION     *   ";
cout<<"\n\n                 *               Designed by                * ";
cout<<"\n                       *                                         * ";
cout<<"\n                        Sachin Ramchandra Rokade & Prithvi Chauhan   ";
cout<<"\n\n            Roll no.  1.  27";
cout<<"\n\n                      2.  54";
cout<<"\n\n                                  Based on:                    ";
cout<<"\n                               Computer Graphics , C & C++      ";
cout<<"\n                                                ";
cout<<"\n                                            ";
cout<<"\n\nPress key to continue.........";
getch();
char sm[20];
int choice;

A: clrscr();
       cout<<"\n\n\n\b\b\b                SECURED  OUTPUT           ";
       cout<<"\n\n\b\b           Enter Password : ";
       cin>>sm;
       if(strcmp(sm,"sachinrokade"))
       {
	 cout<<"\n\n\b\b              Choose Option : ";
       cout<<"\n\n\b              WRONG Password ";
       cout<<"\n\b          Press 1 to try again:- ";
       cout<<"\n          Press 2 exit:- ";


       cin>>choice;

       if(choice==1)

       goto A;
       else
       exit(0);
       }
}

void main()
{
double s,m,i,d;
double r1=40,r2=40;
double k=300;
int gd,gm,j,choice;
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"c:\\tURBOC3\\bgi");
for(i=1;i<4;i++)
{
delay(100);
clrscr();
settextstyle(TRIPLEX_FONT,0,i);
setcolor(3);
textcolor(1);
outtextxy(200,15,"WELCOME");
outtextxy(210,60,"TO");
setcolor(CYAN);
settextstyle(BOLD_FONT,HORIZ_DIR,3);
outtextxy(40,110,"Balls are colored after collision");
setcolor(BLUE);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,3);
outtextxy(300,180,"Based on");
outtextxy(240,230,"Computer graphics,C,C++");
}
setcolor(YELLOW);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,2);
outtextxy(280,350,"Press any key to continue");
getch();
cleardevice();
for(i=1;i<4;i++)
{
delay(100);
clrscr();
settextstyle(3,0,i);
setcolor(3);
textcolor(6);
setcolor(CYAN);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,2);
outtextxy(200,10,"Project");
outtextxy(180,45,"Designed by");
 setcolor(1);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,3);
outtextxy(70,80,"*                                          *");
outtextxy(75,100,"Sachin Ramchandra Rokade & Prithvi Chauhan");
  setcolor(4);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,3);
outtextxy(400,180,"SUBMITTED TO:");
outtextxy(350,210,"Raut Mam & Uike Sir");
}
setcolor(YELLOW);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,3);
outtextxy(80,350,"Press any key to continue");
getch();
cleardevice();
/*
{
delay(100);
clrscr();
setcolor(6);
cleardevice();
outtextxy(160,30," *********Mini Project********** ");
outtextxy(100,75,"* COLOR CHANGING BALLS AFTER COLLISION *");
outtextxy(80,115,"*                    Project                          *");
outtextxy(80,135," *                  Designed by                      *");
outtextxy(90,155,"Sachin RAMCHANDRA Rokade   &   Prithvi Chauhan");
outtextxy(400,270,"SUBMITTED TO");
outtextxy(370,290,"Raut Mam & Uike sir");
}
setcolor(YELLOW);
settextstyle(8,0,1);
outtextxy(180,350,"Press Any key to continue");
getch();       */
int gs,gf;
detectgraph(&gs,&gf);
initgraph(&gs,&gf,"c:\\turboc3\\bgi");
project m1;
m1.frd();
textbackground(9);
for(i=40;i<400;i++)
{
cleardevice();
//1st,2nd,3rd c before color.
		//1st
circle(i,k,r1);
setfillstyle(1,RED);
floodfill(i,k,15);
	 //2nd
circle(k,i,40);
setfillstyle(1,BLUE);
floodfill(k,i,15);
	 //3rd
setfillstyle(1,YELLOW);
circle(520-i,300,r2);
floodfill(520-i,300,15);
delay(15);
s=(300-i)*(300-i);
m=0;
d=sqrt(s+m);
if(d<=(r1+r2))
{   //1st c af color
circle(i,k,r1);
setfillstyle(1,3);
floodfill(i,k,15);
//cleardevice();    //it also clear dashed circle//
circle(i,k,r1);
floodfill(i,k,15);
//2d c af color
setfillstyle(1,YELLOW);
circle(k,i,40);
floodfill(k,i,15);
//3d c af color
setfillstyle(1,6);
circle(300,k,r2);
floodfill(300,k,15);

 //put getch for show circle collition
   getch();
cleardevice();
printf("what do you want to see?\n\n\n1.motion of circle after collition horizontally in right side\n\n2.motion of circle after collition vertically\n\n3.motion of circle after collition horizontally which is in left side  \n\n\n Enter your choice: ");
scanf("%d",&choice);
switch(choice)
{
 case 1:
	  for(i=40;i<400;i++)
{
cleardevice();
//1st,2nd,3rd c before color.
		//1st
circle(i,k,r1);
setfillstyle(1,RED);
floodfill(i,k,15);
	 //2nd
circle(k,i,40);
setfillstyle(1,BLUE);
floodfill(k,i,15);
	 //3rd
setfillstyle(1,YELLOW);
circle(520-i,300,r2);
floodfill(520-i,300,15);
delay(5);
s=(300-i)*(300-i);
m=0;
d=sqrt(s+m);
if(d<=(r1+r2))
{
      for(i=1;i<=220;i++)
{
cleardevice();
circle(300+i,k,r2);
floodfill(300+i,k,15);
setfillstyle(1,6);
delay(3);
}
//1st c af color
circle(i,k,r1);
setfillstyle(1,3);
floodfill(i,k,15);
//cleardevice();    //it also clear dashed circle//
circle(i,k,r1);
floodfill(i,k,15);
//2d c af color
setfillstyle(1,YELLOW);
circle(k,i,40);
floodfill(k,i,15);
	      //3d c af color
for(i=10;i<50;i++)
{
 delay(60);
setcolor(i/5);
arc(520,300,0,360,i-10);
}
break;
	}
	}
	 break;

 case 2:
	  for(i=40;i<400;i++)
{
cleardevice();
//1st,2nd,3rd c before color.
		//1st
circle(i,k,r1);
setfillstyle(1,RED);
floodfill(i,k,15);
	 //2nd
circle(k,i,40);
setfillstyle(1,BLUE);
floodfill(k,i,15);
	 //3rd
setfillstyle(1,YELLOW);
circle(520-i,300,r2);
floodfill(520-i,300,15);
delay(5);
s=(300-i)*(300-i);
m=0;
d=sqrt(s+m);
if(d<=(r1+r2))
{
     for(j=1;j<=180;j++)
{
cleardevice();
circle(k+j,i-j,r2);
floodfill(k+j,i-j,15);
setfillstyle(1,YELLOW);
delay(3);
}
//1st c af color
circle(i,k,r1);
setfillstyle(1,3);
floodfill(i,k,15);
//cleardevice();    //it also clear dashed circle//
circle(i,k,r1);
floodfill(i,k,15);
//2d c af color
setfillstyle(1,6);
circle(300,k,r2);
floodfill(300,k,15);

	      //3d c af color
for(i=10;i<50;i++)
{
 delay(60);
setcolor(i/7);
arc(480,40,0,360,i-10);
}
	break;
    }
    }
    break;
      case 3:

	  for(i=40;i<400;i++)
{
cleardevice();
//1st,2nd,3rd c before color.
		//1st
circle(i,k,r1);
setfillstyle(1,RED);
floodfill(i,k,15);
	 //2nd
circle(k,i,40);
setfillstyle(1,BLUE);
floodfill(k,i,15);
	 //3rd
setfillstyle(1,YELLOW);
circle(520-i,300,r2);
floodfill(520-i,300,15);
delay(10);
s=(300-i)*(300-i);
m=0;
d=sqrt(s+m);
if(d<=(r1+r2))
{

	      for(i=1;i<=220;i++)
{
cleardevice();
circle(260-i,k,r2);
floodfill(260-i,k,15);
setfillstyle(1,3);
delay(20);
}

//1st c af color

delay(50);

circle(300,300,r2);
setfillstyle(1,6);
floodfill(300,300,15);
//cleardevice();    //it also clear dashed circle//
circle(300,300,r2);
floodfill(300,300,15);

//2d c af color
setfillstyle(1,YELLOW);
circle(k,i,40);
floodfill(k,i,15);


	      //3d c af color
for(i=10;i<50;i++)
{
 delay(60);
setcolor(i/8);
arc(40,300,0,360,i-10);
}
break;
	}
	}
	break;
}   //switch end
getch();
cleardevice();
for(i=1;i<10;i++)
{
delay(100);
clrscr();
settextstyle(2,0,i);
setcolor(BLUE);
textcolor(3);
outtextxy(150,75,"THANK YOU");
}
setcolor(YELLOW);
settextstyle(8,0,1);
outtextxy(80,350,"Press Enter to exit................!");
getch();
closegraph();
}
}
}