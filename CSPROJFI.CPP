	int m1=20,n=20;
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<dos.h>
#include"STICKANI.h"
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
void dartboard();
  void stkmotionbkwd(int &,int ,int );
  void stkmotionfrwd(int &,int ,int );
  void stkshooter(int,int,int);
  void defaultscreen();
  void attack(int );
  void life(int );

main()
 {

  char v;
v=219;
clrscr();
printf("              /////'		\n");
printf("              '  # o\n");
printf("              C   - |\n");
printf(" ___          '  =__'        ___\n");
printf("(` _ \_       |   |        _/  ')\n");
printf(" \  (__\  ,---- _ |----.  /__)- |\n");
printf("  \__  ( (           /  ) )  __/\n");
printf("    |_X_\/ \.   #  _.|  \/_X_|\n");
printf("      |  \ /(   /    /\ /  |\n");
printf("       \ /  (  ,    /  \ _/\n");
printf("            /______/\n");
printf("           [:::::::]\n");
printf("          /*%*%*%*%*\n");
printf("          >%*%#%*%*%|\n");
printf("         /%*%*#*%*%\n");
printf("        ######^######\n ");


getch() ;
clrscr();


printf("                                       #######\n");
printf("                                       |######\n");
printf("                         _________     O   C##\n");
printf("                        //-------\\   /_     l\n");
printf("L______________||O-----------------\   |____/_\ v\n");
printf("-----------------||||| =========== /\ ____\    v|l\n");
printf("                  OOOO-L______________          /\n");
printf("                    --____||||___\<\n");
printf("                          ||||    (|-- |\n");
printf("                          ----\n");

getch();

clrscr();gotoxy(32,20);
cout<<"STICK SPORTS";

gotoxy(25,26);
cout<<"LOADING";
for(int e=0;e<25;e++)
{
cout<<v;
delay(30);
}
/* request auto detection */
	int gdriver = DETECT, gmode, err;
	int radius = 10, x, y,x1,y1, midy;
	int i, j,   top[2], bot[2];
	/* initialize graphic mode */
	initgraph(&gdriver, &gmode, "C:/TC/BGI");
	err = graphresult();

	if (err != grOk) {
		/* error occurred */
		printf("Graphics Error: %s\n",
				grapherrormsg(err));
		return 0;
	}


	 int c;
	x1 = getmaxx()-50;
   int     midx=getmaxx()/2;
	midy = getmaxy() / 2;
	y = midy - 100;
	   x = 50;
	y1 = getmaxy() - 100;

	/*
	 * used 5 stick man (still/image)
	 * position to get walking animation
	 */
     am:	 setbkcolor(BLACK);
	cleardevice();

		setlinestyle(SOLID_LINE, 1, 3);
		/* road for stick man */
		line(0, midy, getmaxx(), midy);

		/* image 1  - first position of stick man */
		circle(x, y, radius);
		line(x, y + radius, x, y + radius + 50);

		/* leg design */
		line(x, y + radius + 50, x - 10, midy);
		line(x, y + radius + 50, x + 10, midy - 30);
		line(x + 10, midy - 30, x + 10, midy);

		/* hand motion */
		line(x, y + radius + 10, x - 15, y + radius + 30);
		line(x - 15, y + radius + 30, x + 15, y + radius + 40);
		delay(1);
    l1:	while (x < getmaxx() - 25&&getch()=='d') {
	  stkmotionfrwd(x,y,radius);
	}

		while (x >  25&&getch()=='a') {
	stkmotionbkwd(x,y,radius);
	}
	 if (getch()=='d')goto l1;


 outtextxy(getmaxx()/2-70,midy-150,"Press 's'to enter");getch();
 if(getch()=='s'){
 stkshooter(100,getmaxy()/2-50,10);

 setfillstyle(1,GREEN);
 bar(maxx-10,maxy-200,maxx,maxy);
 line(400,200,450	,200);
 for(ll=15;ll<=150;ll+=15)
 {
  outtextxy(550,40+ll,"_______");
  outtextxy(600,44+ll,"<");
 }
 setcolor(LIGHTGRAY);
 outtextxy(470,15,"Press `Esc' to Quit");
 outtextxy(230,40,"Total Score:");
 gcvt(score,4,a);
 outtextxy(330,40,a);


 dartboard();}
if(x>=getmaxx()/2-160&&x<=getmaxx()/2-110){
   setcolor(BROWN);outtextxy(getmaxx()/2-160,midy-150,"press 'b' to enter");
   if(getch()=='b'){


  m: gdriver = EGA, gmode=EGAHI, err;


	/* initialize graphic mode */
	initgraph(&gdriver, &gmode, "C:/TC");
	err = graphresult();

	if (err != grOk) {
		/* error occurred */
		printf("Graphics Error: %s\n",
				grapherrormsg(err));
		return 0;
	}
  setactivepage(1);
     while(::n>0 &&::m1>0)
     {
    life(-1);
   defaultscreen();
    setvisualpage(1);
    // USER
    while(c!=119&&c!=113)
    c=getch();
   cleardevice();
   life(c);
   attack(c);
   delay(1000);
   cleardevice();
   life(-1);
   defaultscreen();
   //CPU
   randomize();
   c=random(1000);
   c=c%4;

   cleardevice();
   life(c);
   attack(c);
   delay(1000);}
   cleardevice();
   life(-1);
   defaultscreen();


   cleardevice();
     if(::m1<::n)
   { settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
   outtextxy (200,80,"YOU WIN !");
   }
   else
   {
    settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
   outtextxy (200,80,"YOU LOSE !");
   }
   getch();
   setvisualpage(1);
   getch();closegraph();}}
 return 0;

}
