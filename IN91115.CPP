#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>                                        // Header Files
#include<graphics.h>
#include<stdlib.h>
#include<string.h>

 //-------------------------------------------

void output();
void title();
void round();
void inputno();                                        //Function Prototypes
void  playername();
void truthanddare();
void mainpage();
void emt();
 //-------------------------------------------

static pcount,plcount,scount,acount;
int p,i,j,rounds, r,rg,choice=0;
int loop=0;
char ch;                                               // Variables
char ans[30];
char a1[30],a2[30],a3[30],a4[30];
union REGS u, o;

 //-------------------------------------------


void main()                                             // Main Funtion
 {
   clrscr();

   mainpage();

   int clr,x,y=90,gd=DETECT,gm;

   initgraph(&gd,&gm,"C:\\tc\\bgi");
   clr=2;

   for(x=130;x<500;x++)
   {
   putpixel(x,y,clr);
   }
   x=130;

   for(y=90;y<330;y++)
    {
     putpixel(x,y,clr);
    }


    for(x=130;x<500;x++)
   {
   putpixel(x,y,clr);
   }

   for(y=90;y<330;y++)
    {
     putpixel(x,y,clr);
    }

   for(x=130;x<500;x++)
    for(y=91;y<110;y++)
     {
      putpixel(x,y,clr);
     }

     inputno();
     playername();
     round();
     closegraph();
   if(rounds==1)
     {
      loop=1;

      do
       {
	truthanddare();
	loop++;
       }
       while(loop<=5);
      }


     else
     {
      loop=1;
     do
     {
      truthanddare();
      loop++;
     }
     while(loop<=10);
     }

    output();
    getch();
}

  //------------------------------------------------------

void inputno()
{

   gotoxy(25,10);

    printf("Enter the No of Players (Max 4)= ");

    scanf("%d",&p);


 }

  //------------------------------------------------------

 void playername()
 {

    gotoxy(25,10);
    printf("Enter the name of Player-           ");
	 if(p==1){
		gotoxy(25,12);
		printf("1.  ");
		flushall();
		gets(a1);
		}
	else if(p==2){
		gotoxy(25,12);
		printf("1.  ");
		flushall();
		gets(a1);
		gotoxy(25,13);
		printf("2.  ");
		gets(a2);
		}
	else if(p==3){

		gotoxy(25,12);
		printf("1.  ");
		flushall();
		gets(a1);
		gotoxy(25,13);
		printf("2.  ");
		gets(a2);
		gotoxy(25,14);
		printf("3.  ");
		gets(a3);
		}
	 else if(p==4)
	 {
		gotoxy(25,12);
		printf("1.  ");
		flushall();
		gets(a1);
		gotoxy(25,13);
		printf("2.  ");
		gets(a2);
		gotoxy(25,14);
		printf("3.  ");
		gets(a3);
		gotoxy(25,15);
		printf("4.  ");
		gets(a4);
	 }
	else   { gotoxy(25,16);
		printf("Invalid No");

	       }


 }

   //------------------------------------------------------

 void round()
 {

 gotoxy(25,10);
 cout<<"There are TWO kinds of round";
 gotoxy(25,11);
 cout<<"Types of Round";
 gotoxy(25,12);
 cout<<"1. 5 ROUNDS      ";
 gotoxy(25,13);
 cout<<"                 ";
 gotoxy(25,14);
 cout<<"2. 10 ROUNDS     ";
 gotoxy(25,15);
 cout<<"                 ";
 again :{
 gotoxy(19,18);
 cout<<"Which Kind Do You Want To Play";
 }
 gotoxy(19,19);
 cout<<" Enter No of Index=";

 cin>>rounds;
 if(rounds!=1 && rounds!=2)
  {
   gotoxy(1,1);
   cout<<"\nYou enter Wrong Index No..!! Pls Renter Your Choice";

  goto again;
  }


 }

   //------------------------------------------------------

 void truthanddare()
{

 clrscr();

 emt();
 cout<<"Round No= "<<loop;

   if(p==1){
     gotoxy(65,1);
     puts(a1);
     gotoxy(77,1);
     cout<<" ="<<pcount;
  }
   else if(p==2)
  {
     gotoxy(65,1);
     puts(a1);
     gotoxy(77,1);
     cout<<" ="<<pcount;
     gotoxy(65,2);
     puts(a2);
     gotoxy(77,2);
     cout<<" ="<<plcount;
  }
   else if(p==3)
  {
     gotoxy(65,1);
     puts(a1);
     gotoxy(77,1);
     cout<<" ="<<pcount;
     gotoxy(65,2);
     puts(a2);
     gotoxy(77,2);
     cout<<" ="<<plcount;
     gotoxy(65,3);
     puts(a3);
     gotoxy(77,3);
     cout<<" ="<<scount;
  }
   else if(p==4)
  {
     gotoxy(65,1);
     puts(a1);
     gotoxy(77,1);
     cout<<" ="<<pcount;
     gotoxy(65,2);
     puts(a2);
     gotoxy(77,2);
     cout<<" ="<<plcount;
     gotoxy(65,3);
     puts(a3);
     gotoxy(77,3);
     cout<<" ="<<scount;
     gotoxy(65,4);
     puts(a4);
     gotoxy(77,4);
     cout<<" ="<<acount;
  }

 r=rand()%p;
 gotoxy(25,9);
 printf("The Chance is of-");

  if(rg==0)
    {
      rg=rg+1;
    }
   else
   {
    rg=rg;
   }
  if(r==1)
  {
   gotoxy(25,11);
   puts(a1);
   pcount=pcount+10;
  }

  else if(r==2)
  {
     gotoxy(25,11);
      puts(a2);
      plcount=plcount+10;

    }
  else if(r==3)
  {
   gotoxy(25,11);
      puts(a3);
      scount=scount+10;

    }
  else if(r==4)
  {
   gotoxy(25,11);
      puts(a4);
      acount=acount+10;

     }
  else
   {
   gotoxy(25,11);
      puts(a4);
      acount=acount+10;

     }



 again1:{
gotoxy(22,13);
 printf("Choose truth and dare -");
 gotoxy(22,14);
 printf("Press 1 for Truth & Press 2 for Dare= ");


 scanf("%d",&choice);
 }
 if(choice==1)
  {
   rg=rand()%4;
  gotoxy(25,16);

   if(rg==1)
    {
    printf("Truth:Do you make missed calls");
    gotoxy(27,17);
    printf("for saving your money..!!");

    gotoxy(27,18);
    flushall();
    gets(ans);
    }

   else if(rg==2)
   {
    printf("Truth:Do you brush 2 times a day..!!");

    gotoxy(27,18);
    flushall();
    gets(ans);
     }
   else if(rg==3){
    printf("Truth:Do you use facebook at night..!!");

    gotoxy(27,18);
    flushall();
    gets(ans);
    }
   else if(rg==4){
    printf("Truth:Do you listen English Songs..!!");

    gotoxy(27,18);
    flushall();
    gets(ans);
    }
    else
     {
    printf("Truth:Do you how may states");
    gotoxy(25,17);
    printf("in our country?");

    gotoxy(27,18);
    flushall();
    gets(ans);
    }
   }

  else if(choice==2)
  {
    rg=rand()%4;
   gotoxy(25,16);
   if(rg==1){
    printf("Dare: Tell us how many  percentages");
    gotoxy(26,17);
    printf("you have got in your 12 exam.!");
    gotoxy(30,19);
    flushall();
    gets(ans);
    }

   else if(rg==2)  {
    printf("Dare: Make a wrong call..!!");

    gotoxy(27,18);
    flushall();
    gets(ans);
    }
   else if(rg==3){
    printf("Dare: Do Acting Like Amitabh Bachhan.");

    gotoxy(27,18);
    flushall();
    gets(ans);
    }
   else if(rg==4){
    printf("Dare: Tell us how many times your");
    gotoxy(25,17);
    printf("prrograms does not run in c++..!!");

    gotoxy(27,18);
    flushall();
    gets(ans);
    }
     else {
    printf("Dare:Speek Loudly..!!");

    gotoxy(27,18);
    flushall();
    gets(ans);
   }
   }

   else
   {
    gotoxy(1,1);
    printf("You enter Wrong No..!! Pls Renter Your choice.");
    goto again1;
    }
    closegraph();
}

 //-------------------------------------------------

 void mainpage()

 {
  int i,j;
   char ch=3;

   for(i=0;i<60;i++)
    for(j=0;j<80;j++)
     {
      gotoxy(j,i);
      textcolor(i*j-i);
      cprintf("%c",ch);
     }

   for(i=16;i<30;i++)
    for(j=25;j<60;j++)
     {
      gotoxy(j,i);
      cout<<" ";
     }

    gotoxy(34,19);
    textcolor(3);
    cprintf("The Truth And Dare");
    gotoxy(33,23);
    textcolor(4);
    cprintf("Game is initializing..");
    gotoxy(38,25);
    i=7;
    textattr(i + ((i+1) << 4));
    cprintf("\nLoading...");
    for(i=6;i>1;i--)
     {
      gotoxy(47,26);

      printf(" %d",i-1 );
      sleep(1);
     }


  }
 //----------------------------------------


void emt()
   {
     clrscr();

     int clr,x,y=90,gd=DETECT,gm;
   initgraph(&gd,&gm,"C:\\tc\\bgi");
   clr=2;
   setbkcolor(0);
   for(x=130;x<500;x++)
   {
   putpixel(x,y,clr);
   }
   x=130;

   for(y=90;y<330;y++)
    {
     putpixel(x,y,clr);
    }


    for(x=130;x<500;x++)
   {
   putpixel(x,y,clr);
   }

   for(y=90;y<330;y++)
    {
     putpixel(x,y,clr);
    }

   for(x=130;x<500;x++)
    for(y=91;y<110;y++)
     {
      putpixel(x,y,clr);
     }

}

 //------------------------------------------

 void title()
  {

   textbackground(0);
   textcolor(12);
   gotoxy(34,2);
   cprintf("Truth And Dare");

  }

 void output()
  {
   clrscr();
   int i,j;


   for(i=0;i<60;i++)
    for(j=0;j<80;j++)
     {
      gotoxy(j,i);
      textbackground(7);
      textcolor(5);
      cprintf(".");
     }

   for(i=0;i<60;i++)
    for(j=25;j<60;j++)
     {
      gotoxy(j,i);
      printf(" ");
     }
   gotoxy(34,10);
   textcolor(8);
   cprintf("The Winner is..!");
   if(pcount>plcount && pcount>scount && pcount>acount)
    {
     textcolor(4);
     gotoxy(35,13);
     puts(a1);
    }
  else if(plcount>pcount && plcount>scount && plcount>acount)
    {
     textcolor(4);
     gotoxy(35,13);
     puts(a2);
    }
   else if(scount>plcount && scount>pcount && scount>acount)
    {
     textcolor(4);
     gotoxy(35,13);
     puts(a3);
    }
   else if(acount>plcount && acount>scount && acount>pcount)
    {
     textcolor(4);
     gotoxy(35,13);
     puts(a4);
    }
    else{
    textcolor(4);
    gotoxy(35,13);
    cprintf("Tie");
    }

   }