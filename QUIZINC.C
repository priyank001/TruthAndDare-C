#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<graphics.h>
/////////////////////////////////////////////////////////////////
void mainpage();
void choose();
void c();
void cpp();
void java();
void result();

/////////////////////////////////////////////////////////////////

void main()
{
	int gd=DETECT,gm;
	clrscr();
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
//	mainpage();
	choose();
	getch();
	closegraph();
}
/////////////////////////////////////////////////////////////////
void choose()
{

      /*	int gd=EGA, gm=EGAHI,x,y,i,j,font=10;
	clrscr();
	initgraph(&gd,&gm,"c\\turboc3\\bgi");
      */
	int i,j,choice=1;


	setfillstyle(4,7);
	bar(0,0,640,480);

	setfillstyle(3,12);  //		cga_color
	bar(20,20,620,460);
	setcolor(YELLOW);
	settextstyle(8, HORIZ_DIR, 2);
	outtextxy(150,100,"Choose Your Prefered language");
	outtextxy(150,150,"1) C");
	outtextxy(150,200,"2) C++");
	outtextxy(150,250,"3) JAVA");
	settextstyle(9,HORIZ_DIR, 1);
	outtextxy(180,350,"Your Choice: ");
	gotoxy(180,400);
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: c();	break;
		case 2: cpp();  break;
		case 3: java(); break;
		default: printf("wrong input");
	}
	getch();
	exit(0);
}
/////////////////////////////////////////////////////////////////

void mainpage()
{
	int x,y;
	//i,j,font=10,round;
	setbkcolor(17);
	x=getmaxx()/2-100;
	y=getmaxy()/2-100;
	/*
	for(round=0;round<=4;round++)
	{
		settextstyle(font,HORIZ_DIR,2);
		outtextxy(x,y,"Quiz Game");
		font=1;
		settextstyle(font,HORIZ_DIR,1);
		outtextxy(200,380,"Game is initializing..");
		i=7;
		textattr(i + ((i+1) << 4));

		for(i=6;i>1;i--)
		{
//		outtextxy(,100,"\nLoading...");
			gotoxy(50,25);
			printf("%d\b",i-1);
			sleep(1);
		}
	*/
/*	for(i=0;i<5000;i++)
	{

		highvideo();
		putpixel(random(640),random(480),random(15));
		delay(1);
//		cleardevice();
		settextstyle(font,HORIZ_DIR,2);
		outtextxy(x,y,"Quiz Game");
		font=1;
		settextstyle(font,HORIZ_DIR,1);
		outtextxy(200,380,"Game is initializing..");
		j=7;
		textattr(j + ((j+1) << 4));

		for(j=6;j>1;j--)
		{
//		outtextxy(,100,"\nLoading...");
			gotoxy(50,25);
			printf("%d\b",i-1);
			sleep(1);
		}

	}
*/


	getch();
}
/////////////////////////////////////////////////////////////////

void c()
{
	int x,y;
	cleardevice();
	setfillstyle(1,3);  //cga_color



	getch();

}
/////////////////////////////////////////////////////////////////

void cpp()
{
printf("\n\nC++");
getch();
}
/////////////////////////////////////////////////////////////////

void java()
{
printf("\n\nJava");
getch();
}
/////////////////////////////////////////////////////////////////
void result()
{

}
