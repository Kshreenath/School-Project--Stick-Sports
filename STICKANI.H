#include<iostream.h>
  #include <stdio.h>
  #include <conio.h>
  #include <graphics.h>
  #include <dos.h>
  #include<stdlib.h>
  int i=0,j=300,m=0,k=0,maxx,maxy,arrows=0,ll,snd=0;
double score=0;
char a[4];
void dartboard();


void stkmotionfrwd(int &x,int y,int radius){/* clears graphic screen */
		int midy=getmaxy()/2;
		cleardevice();

		setlinestyle(SOLID_LINE, 1, 3);
		/* road for stick man */
		 setcolor(BROWN);  outtextxy(getmaxx()/2-20,midy-129,"Shooting");rectangle(getmaxx()/2-20,midy-110,getmaxx()/2-70,midy);
		 setcolor(BROWN);  outtextxy(getmaxx()/2-110,midy-129,"Boxing");rectangle(getmaxx()/2-110,midy-110,getmaxx()/2-160,midy);
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

		/* image 2 - second position of stick man */
		cleardevice();

		/* forwarding the position of stick man */
		x++;

		setlinestyle(SOLID_LINE, 1, 3);
		 setcolor(BROWN);      outtextxy(getmaxx()/2-20,midy-129,"Shooting");	  rectangle(getmaxx()/2-20,midy-110,getmaxx()/2-70,midy);
		setcolor(BROWN);  outtextxy(getmaxx()/2-110,midy-129,"Boxing");rectangle(getmaxx()/2-110,midy-110,getmaxx()/2-160,midy);
		line(0, midy, getmaxx(), midy);
		circle(x, y, radius);
		line(x, y + radius, x, y + radius + 50);

		/* leg design */
		line(x, y + radius + 50, x - 15, midy);
		line(x, y + radius + 50, x + 10, midy - 30);
		line(x + 10, midy - 30, x + 10, midy);

		/* hand motion */
		line(x, y + radius + 5, x - 10, y + radius + 20);
		line(x - 10, y + radius + 20, x - 10, y + radius + 45);
		line(x, y + radius + 5, x + 5, y + radius + 25);
		line(x + 5, y + radius + 25, x + 15, y + radius + 45);
		delay(5);

		/* image 3 */
		cleardevice();
		setlinestyle(SOLID_LINE, 1, 3);
		 setcolor(BROWN);    outtextxy(getmaxx()/2-20,midy-129,"Shooting");	  rectangle(getmaxx()/2-20,midy-110,getmaxx()/2-70,midy);
		setcolor(BROWN);  outtextxy(getmaxx()/2-110,midy-129,"Boxing");rectangle(getmaxx()/2-110,midy-110,getmaxx()/2-160,midy);
		line(0, midy, getmaxx(), midy);
		x++;
		circle(x, y, radius);
		line(x, y + radius, x, y + radius + 50);

		/* leg design */
		line(x, y + radius + 50, x - 20, midy);
		line(x, y + radius + 50, x + 20, midy);

		/* hand motion */
		line(x, y + radius + 5, x - 20, y + radius + 20);
		line(x - 20, y + radius + 20, x - 20, y + radius + 30);
		line(x, y + radius + 5, x + 20, y + radius + 25);
		line(x + 20, y + radius + 25, x + 30, y + radius + 30);
		delay(150);

		/* image 4 */
		cleardevice();
		x++;
		setlinestyle(SOLID_LINE, 1, 3);
		 setcolor(BROWN);    outtextxy(getmaxx()/2-20,midy-129,"Shooting");	  rectangle(getmaxx()/2-20,midy-110,getmaxx()/2-70,midy);
		setcolor(BROWN);  outtextxy(getmaxx()/2-110,midy-129,"Boxing");rectangle(getmaxx()/2-110,midy-110,getmaxx()/2-160,midy);
		line(0, midy, getmaxx(), midy);
		circle(x, y, radius);
		line(x, y + radius, x, y + radius + 50);

		/* leg design */
		line(x, y + radius + 50, x - 8, midy - 30);
		line(x - 8, midy - 30, x - 25, midy);
		line(x, y + radius + 50, x + 10, midy - 30);
		line(x + 10, midy - 30, x + 12, midy);

		/* hand motion */
		line(x, y + radius + 5, x - 10, y + radius + 10);
		line(x - 10, y + radius + 10, x - 10, y + radius + 30);
		line(x, y + radius + 5, x + 15, y + radius + 20);
		line(x + 15, y + radius + 20, x + 30, y + radius + 20);
		delay(100);

		/* image 5 */
		cleardevice();
		x++;
		setlinestyle(SOLID_LINE, 1, 3);
		 setcolor(BROWN);    outtextxy(getmaxx()/2-20,midy-129,"Shooting");	  rectangle(getmaxx()/2-20,midy-110,getmaxx()/2-70,midy);
		setcolor(BROWN);  outtextxy(getmaxx()/2-110,midy-129,"Boxing");rectangle(getmaxx()/2-110,midy-110,getmaxx()/2-160,midy);
		line(0, midy, getmaxx(), midy);
		circle(x, y, radius);
		line(x, y + radius, x, y + radius + 50);

		/* leg design */
		line(x, y + radius + 50, x + 3, midy);
		line(x, y + radius + 50, x + 8, midy - 30);
		line(x + 8, midy - 30, x - 20, midy);

		/* hand motion */
		line(x, y + radius + 5, x - 15, y + radius + 10);
		line(x - 15, y + radius + 10, x - 8, y + radius + 25);
		line(x, y + radius + 5, x + 15, y + radius + 20);
		line(x + 15, y + radius + 20, x + 30, y + radius + 20);
		delay(150);
		x++;}
void stkmotionbkwd(int &x,int y ,int radius ){
	int midy=getmaxy()/2;
	/* clears graphic screen */
		cleardevice();

		setlinestyle(SOLID_LINE, 1, 3);
		/* road for stick man */
	  setcolor(BROWN);     outtextxy(getmaxx()/2-20,midy-129,"Shooting");	  rectangle(getmaxx()/2-20,midy-110,getmaxx()/2-70,midy);
		setcolor(BROWN);  outtextxy(getmaxx()/2-110,midy-129,"Boxing");rectangle(getmaxx()/2-110,midy-110,getmaxx()/2-160,midy);
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

		/* image 2 - second position of stick man */
		cleardevice();

		/* reversing the position of stick man */
		x--;

		setlinestyle(SOLID_LINE, 1, 3);
	  setcolor(BROWN);     outtextxy(getmaxx()/2-20,midy-129,"Shooting");	  rectangle(getmaxx()/2-20,midy-110,getmaxx()/2-70,midy);
		setcolor(BROWN);  outtextxy(getmaxx()/2-110,midy-129,"Boxing");rectangle(getmaxx()/2-110,midy-110,getmaxx()/2-160,midy);
		line(0, midy, getmaxx(), midy);
		circle(x, y, radius);
		line(x, y + radius, x, y + radius + 50);

		/* leg design */
		line(x, y + radius + 50, x - 15, midy);
		line(x, y + radius + 50, x + 10, midy - 30);
		line(x + 10, midy - 30, x + 10, midy);

		/* hand motion */
		line(x, y + radius + 5, x - 10, y + radius + 20);
		line(x - 10, y + radius + 20, x - 10, y + radius + 45);
		line(x, y + radius + 5, x + 5, y + radius + 25);
		line(x + 5, y + radius + 25, x + 15, y + radius + 45);
		delay(5);

		/* image 3 */
		cleardevice();
	  setcolor(BROWN);    outtextxy(getmaxx()/2-20,midy-129,"Shooting");	  rectangle(getmaxx()/2-20,midy-110,getmaxx()/2-70,midy);
		setcolor(BROWN);  outtextxy(getmaxx()/2-110,midy-129,"Boxing");rectangle(getmaxx()/2-110,midy-110,getmaxx()/2-160,midy);
		setlinestyle(SOLID_LINE, 1, 3);
		line(0, midy, getmaxx(), midy);
		x--;
		circle(x, y, radius);
		line(x, y + radius, x, y + radius + 50);

		/* leg design */
		line(x, y + radius + 50, x - 20, midy);
		line(x, y + radius + 50, x + 20, midy);

		/* hand motion */
		line(x, y + radius + 5, x - 20, y + radius + 20);
		line(x - 20, y + radius + 20, x - 20, y + radius + 30);
		line(x, y + radius + 5, x + 20, y + radius + 25);
		line(x + 20, y + radius + 25, x + 30, y + radius + 30);
		delay(150);

		/* image 4 */
		cleardevice();
		x--;
		setlinestyle(SOLID_LINE, 1, 3);
	  setcolor(BROWN);    outtextxy(getmaxx()/2-20,midy-129,"Shooting");	  rectangle(getmaxx()/2-20,midy-110,getmaxx()/2-70,midy);
		setcolor(BROWN);  outtextxy(getmaxx()/2-110,midy-129,"Boxing");rectangle(getmaxx()/2-110,midy-110,getmaxx()/2-160,midy);
		line(0, midy, getmaxx(), midy);
		circle(x, y, radius);
		line(x, y + radius, x, y + radius + 50);

		/* leg design */
		line(x, y + radius + 50, x - 8, midy - 30);
		line(x - 8, midy - 30, x - 25, midy);
		line(x, y + radius + 50, x + 10, midy - 30);
		line(x + 10, midy - 30, x + 12, midy);

		/* hand motion */
		line(x, y + radius + 5, x - 10, y + radius + 10);
		line(x - 10, y + radius + 10, x - 10, y + radius + 30);
		line(x, y + radius + 5, x + 15, y + radius + 20);
		line(x + 15, y + radius + 20, x + 30, y + radius + 20);
		delay(100);

		/* image 5 */
		cleardevice();
		x--;
		setlinestyle(SOLID_LINE, 1, 3);
	  setcolor(BROWN);    outtextxy(getmaxx()/2-20,midy-129,"Shooting");	  rectangle(getmaxx()/2-20,midy-110,getmaxx()/2-70,midy);
		setcolor(BROWN);  outtextxy(getmaxx()/2-110,midy-129,"Boxing");rectangle(getmaxx()/2-110,midy-110,getmaxx()/2-160,midy);
		line(0, midy, getmaxx(), midy);
		circle(x, y, radius);
		line(x, y + radius, x, y + radius + 50);

		/* leg design */
		line(x, y + radius + 50, x + 3, midy);
		line(x, y + radius + 50, x + 8, midy - 30);
		line(x + 8, midy - 30, x - 20, midy);

		/* hand motion */
		line(x, y + radius + 5, x - 15, y + radius + 10);
		line(x - 15, y + radius + 10, x - 8, y + radius + 25);
		line(x, y + radius + 5, x + 15, y + radius + 20);
		line(x + 15, y + radius + 20, x + 30, y + radius + 20);
		delay(150);
		x--;
}
void stkshooter(int x, int y, int radius){
int midy=getmaxy()/2;
cleardevice();
		line(87,midy+50,getmaxx(),midy+50);
		/* draw the police (shooter) */
		setcolor(YELLOW);
		setlinestyle(SOLID_LINE, 1, 3);
		setfillstyle(SOLID_FILL, YELLOW);

		/* drawing head of shooter */
		circle(getmaxx()-x-60, y, radius);


		/* drawing body */
			circle(getmaxx()-x-60, y, radius);
		line(getmaxx()-x-60, y + radius,getmaxx()-x-60 , y + radius + 50);

			/* leg design */
		line(getmaxx()-x-60, y + radius + 50, getmaxx()-x-60 + 15, midy+50);
		line(getmaxx()-x-60, y + radius + 50, getmaxx()-x-60 - 10, midy - 30+50);
		line(getmaxx()-x-60 - 10, midy - 30+50, getmaxx()-x-60 - 10, midy+50);

		/* hand motion */
		line(getmaxx()-x-60, y + radius + 5, getmaxx()-x-60 + 10, y + radius + 20);
		line(getmaxx()-x-60 + 10, y + radius + 20, getmaxx()-x-60 + 10, y + radius + 45);

		line(getmaxx()-x-60 - 5, y + radius + 5, getmaxx()-x-60 - 45, y + radius + 5);

}
 gameover()
{
 setcolor(0);
 setfillstyle(SOLID_FILL,0);
 bar(11,11,maxx-11,maxy-11);
 setcolor(BROWN);
 setfillstyle(SOLID_FILL,1);
 bar(maxx/2-100,maxy/2-50,maxx/2+100,maxy/2+50);
 outtextxy(maxx/2-50,maxy/2-20,"Game Over..!");
 outtextxy(maxx/2-70,maxy/2,"Your score is:");
 outtextxy(maxx/2-200,maxy/2+90,"Press `Space Bar' to Contuinue and `Esc' to Exit.");
 gcvt(score,4,a);
 outtextxy(maxx/2+60,maxy/2,a);
 if(getch()==32)
 {
  arrows=0;
  score=0;
  stkshooter(100,(getmaxy()/2)-50,10);
 }
 closegraph();
 clrscr();
 exit(0);
 return 0;
}

 stick1(loc)
{
 snd=0;
 setcolor(0);
 gcvt(score,4,a);
 outtextxy(330,40,a);

 setcolor(LIGHTGRAY);
 if(loc>=130 && loc<=140)
 {
  score=score+100;
  outtextxy(250,60,"Points: 100");
 }
 if(loc>=120 && loc<130)
 {
  score=score+70;
  outtextxy(250,60,"Points: 70");
 }
 if(loc>140 && loc<=150)
 {
  score=score+70;
  outtextxy(250,60,"Points: 70");
 }
 if(loc>=110 && loc<120)
 {
  score=score+50;
  outtextxy(250,60,"Points: 50");
 }
 if(loc>150 && loc<=160)
 {
  score=score+50;
  outtextxy(250,60,"Points: 50");
 }
 if(loc>=100 && loc<110)
 {
  score=score+40;
  outtextxy(250,60,"Points: 40");
 }
 if(loc>160 && loc<=170)
 {
  score=score+40;
  outtextxy(250,60,"Points: 40");
 }
 if(loc>=90 && loc<100)
 {
  score=score+35;
  outtextxy(250,60,"Points: 35");
 }
 if(loc>170 && loc<=180)
 {
  score=score+35;
  outtextxy(250,60,"Points: 35");
 }

 outtextxy(230,40,"Total Score:");
 gcvt(score,4,a);
 outtextxy(330,40,a);

 for(i=i;i<300;i++)
 {
  snd=snd+1;
  setfillstyle(1,8);
  setcolor(2);
  bar(20,20+i,25,110+i);
  setfillstyle(1,7);
  bar(27,30+i,30,100+i);
  setfillstyle(1,9);
  bar(32,40+i,35,90+i);
  setfillstyle(1,14);
  bar(37,50+i,40,80+i);
  setfillstyle(1,4);
  bar(42,60+i,45,70+i);

  setcolor(BROWN);

  if(loc>=130 && loc<=140)
  {
   line(46,i-loc+200,66,i-loc+200);
   if(snd==1)
    sound(1500);
   if(snd==3)
    nosound();
   if(snd==5)
    sound(1500);
   if(snd==15)
    nosound();
  }
  if(loc>=120 && loc<130)
  {
   line(41,i-loc+200,61,i-loc+200);
   if(snd==1)
    sound(1300);
   if(snd==5)
    sound(1100);
   if(snd==15)
    nosound();
  }
  if(loc>140 && loc<=150)
  {
   line(41,i-loc+200,61,i-loc+200);
   if(snd==1)
    sound(1300);
   if(snd==5)
    sound(1100);
   if(snd==15)
    nosound();
  }
  if(loc>=110 && loc<120)
  {
   line(36,i-loc+200,56,i-loc+200);
   if(snd==1)
    sound(1300);
   if(snd==5)
    sound(1100);
   if(snd==10)
    sound(900);
   if(snd==20)
    nosound();
  }
  if(loc>150 && loc<=160)
  {
   line(36,i-loc+200,56,i-loc+200);
   if(snd==1)
    sound(1300);
   if(snd==5)
    sound(1100);
   if(snd==10)
    sound(900);
   if(snd==20)
    nosound();
  }
  if(loc>=100 && loc<110)
  {
   line(31,i-loc+200,51,i-loc+200);
   if(snd==1)
    sound(1300);
   if(snd==5)
    sound(1100);
   if(snd==10)
    sound(900);
   if(snd==15)
    sound(800);
   if(snd==20)
    nosound();
  }
  if(loc>160 && loc<=170)
  {
   line(31,i-loc+200,51,i-loc+200);
   if(snd==1)
    sound(1300);
   if(snd==5)
    sound(1100);
   if(snd==10)
    sound(900);
   if(snd==15)
    sound(800);
   if(snd==20)
    nosound();
  }
  if(loc>=90 && loc<100)
  {
   line(26,i-loc+200,46,i-loc+200);
   if(snd==1)
    sound(1300);
   if(snd==5)
    sound(1100);
   if(snd==10)
    sound(900);
   if(snd==15)
    sound(800);
   if(snd==20)
    sound(700);
   if(snd==25)
    nosound();
  }
  if(loc>170 && loc<=180)
  {
   line(26,i-loc+200,46,i-loc+200);
   if(snd==1)
    sound(1300);
   if(snd==5)
    sound(1100);
   if(snd==10)
    sound(900);
   if(snd==15)
    sound(800);
   if(snd==20)
    sound(700);
   if(snd==25)
    nosound();
  }

  delay(20);
  setcolor(0);
  setfillstyle(SOLID_FILL,0);
  bar(20,20+i,25,110+i);
  bar(27,30+i,30,100+i);
  bar(32,40+i,35,90+i);
  bar(37,50+i,40,80+i);
  bar(42,60+i,45,70+i);

  if(loc>=130 && loc<=140)
  line(46,i-loc+200,66,i-loc+200);
  if(loc>=120 && loc<130)
  line(41,i-loc+200,61,i-loc+200);
  if(loc>140 && loc<=150)
  line(41,i-loc+200,61,i-loc+200);
  if(loc>=110 && loc<120)
  line(36,i-loc+200,56,i-loc+200);
  if(loc>150 && loc<=160)
  line(36,i-loc+200,56,i-loc+200);
  if(loc>=100 && loc<110)
  line(31,i-loc+200,51,i-loc+200);
  if(loc>160 && loc<=170)
  line(31,i-loc+200,51,i-loc+200);
  if(loc>=90 && loc<100)
  line(26,i-loc+200,46,i-loc+200);
  if(loc>170 && loc<=180)
  line(26,i-loc+200,46,i-loc+200);

  if(kbhit())
  {
   int ch=getch();
   if(ch==27)
   {
    closegraph();
    exit(0);
   }
  }
 }
 i=0;j=300;k=0;

 setcolor(0);
 if(loc>=130 && loc<=140)
  outtextxy(250,60,"Points: 100");
 if(loc>=120 && loc<130)
  outtextxy(250,60,"Points: 70");
 if(loc>140 && loc<=150)
  outtextxy(250,60,"Points: 70");
 if(loc>=110 && loc<120)

  outtextxy(250,60,"Points: 50");
 if(loc>150 && loc<=160)
  outtextxy(250,60,"Points: 50");
 if(loc>=100 && loc<110)
  outtextxy(250,60,"Points: 40");
 if(loc>160 && loc<=170)
  outtextxy(250,60,"Points: 40");
 if(loc>=90 && loc<100)
  outtextxy(250,60,"Points: 35");
 if(loc>170 && loc<=180)
  outtextxy(250,60,"Points: 35");
 if(arrows==10)
 {
  gameover();
 }
 dartboard();
 return 0;
}

shoot()
{
 if(arrows==10)
 {
  gameover();
 }
 arrows=arrows+1;
 setcolor(0);
 for(ll=15;ll<=15*arrows;ll+=15)
 {
  outtextxy(550,40+ll,"_______");
  outtextxy(600,44+ll,"<");
 }
 a:
 for(i=i;i<300;i++)
 {
  if(k==350 && i>=110 && i<=160)
  {
   int loc=i;
   stick1(loc);
  }
  if(k==360 && i>=90 && i<=110)
  {
   int loc=i;
   stick1(loc);
  }
  if(k==360 && i>=160 && i<180)
  {
   int loc=i;
   stick1(loc);
  }

  if(k==400)
  {
   k=0;
   dartboard();
  }
  k=k+10;
  setfillstyle(1,8);
  setcolor(2);
  bar(20,20+i,25,110+i);
  setfillstyle(1,7);
  bar(27,30+i,30,100+i);
  setfillstyle(1,9);
  bar(32,40+i,35,90+i);
  setfillstyle(1,14);
  bar(37,50+i,40,80+i);
  setfillstyle(1,4);
  bar(42,60+i,45,70+i);

  line(400-k,200,420-k,200);

  delay(20);
  setcolor(0);
  setfillstyle(SOLID_FILL,0);
  bar(20,20+i,25,110+i);
  bar(27,30+i,30,100+i);
  bar(32,40+i,35,90+i);
  bar(37,50+i,40,80+i);
  bar(42,60+i,45,70+i);

  line(400-k,200,420-k,200);


  if(kbhit())
  {
   int ch=getch();
   if(ch==27)
  {
   closegraph();
   exit(0);
  }
  }
 }
 i=0;j=300;
 if(arrows==10)
 {
  gameover();
 }
 goto a;
}

void dartboard()
{
 a:
 for(i=i;i<300;i++)
 {
  setfillstyle(1,8);
  bar(20,20+i,25,110+i);
  setfillstyle(1,7);
  bar(27,30+i,30,100+i);
  setfillstyle(1,9);
  bar(32,40+i,35,90+i);
  setfillstyle(1,14);
  bar(37,50+i,40,80+i);
  setfillstyle(1,4);
  bar(42,60+i,45,70+i);

  delay(20);
  setfillstyle(SOLID_FILL,0);
  bar(20,20+i,25,110+i);
  bar(27,30+i,30,100+i);
  bar(32,40+i,35,90+i);
  bar(37,50+i,40,80+i);
  bar(42,60+i,45,70+i);
  if(kbhit())
  {
   int ch=getch();
   if(ch==27)
   {
    closegraph();
    exit(0);
   }
   if(ch==32 && m==0)
   {
    shoot();
   }
  }
 }
 i=0;j=300;
 goto a;
}

void life(int c)
{ int i, x1=20,x2=600,a=0,b=0;
if(c==1)
{a=1;
b=0;}
else if(c==2)
{a=2;
b=0;}
else if(c==-1)
{a=0;
b=0;}
else if(c==119)
{a=0;
b=1;}
else if(c==113)
{a=0;
b=2;}
::n= ::n-a;
::m1= ::m1-b;
for (i=1;i<=::n;i++,x1=x1+8)
outtextxy (x1,10,"Û");
for (i=::m1;i>=1;i--,x2=x2-8)
outtextxy (x2,10,"Û");
}

void attack(int n)
{
if(n==2)
{ //stick one
    //Head
   circle(250,105,25);
   //line
   line(250,125,250,200);
   //1st Leg
   line(250,200,230,250);
   line(230,250,240,250);
   //2nd Leg
   line(250,200,280,250);
   line(280,250,290,250);
   //1st Hand
   line(250,125,230,150);
   line(230,150,270,120);
   //2nd Hand
   line(250,125,280,150);
   line(280,150,310,130);
   //stick two
   //Head
    circle(350,105,25);
    //Line
   line(350,125,350,200);
   //1st Leg
   line(350,200,330,250);
   line(330,250,320,250);
   //2nd Leg
   line(350,200,320,150);
   line(380,150,310,140);
   //1st Hand
   line(350,125,320,150);
   line(320,150,290,130);
   //2nd Hand
   line(350,125,370,150);
   line(370,150,330,120);
   }
else if (n==1)
{ //stick one
    //Head
   circle(250,105,25);
   //line
   line(250,125,250,200);
   //1st Leg
   line(250,200,230,250);
   line(230,250,240,250);
   //2nd Leg
   line(250,200,280,250);
   line(280,250,290,250);
   //1st Hand
   line(250,125,230,150);
   line(230,150,270,120);
   //2nd Hand
   line(250,125,280,150);
   line(280,150,310,130);
   //stick two
   //Head
    circle(350,105,25);
    //Line
   line(350,125,350,200);
   //1st Leg
   line(350,200,330,250);
   line(330,250,320,250);
   //2nd Leg
   line(350,200,380,250);
   line(380,250,370,250);
   //1st Hand
   line(350,125,250,100);
   //2nd Hand
   line(350,125,370,150);
   line(370,150,330,130);
   }
else if (n==113)
{ //stick one
    //Head
   circle(250,105,25);
   //line
   line(250,125,250,200);
   //1st Leg
   line(250,200,230,250);
   line(230,250,240,250);
   //2nd Leg
   line(250,200,330,150);
   line(330,150,330,140);
   //1st Hand
   line(250,125,230,150);
   line(230,150,270,140);
   //2nd Hand
   line(250,125,280,150);
   line(280,150,310,130);
   //stick two
   //Head
    circle(350,105,25);
    //Line
   line(350,125,350,200);
   //1st Leg
   line(350,200,330,250);
   line(330,250,320,250);
   //2nd Leg
   line(350,200,380,250);
   line(380,250,370,250);
   //1st Hand
   line(350,125,320,150);
   line(320,150,290,130);
   //2nd Hand
   line(350,125,370,150);
   line(370,150,330,120);
   }
   else
   {
    if (n==119)
{
   //stick one
    //Head
   circle(250,105,25);
   //line
   line(250,125,250,200);
   //1st Leg
   line(250,200,230,250);
   line(230,250,240,250);
   //2nd Leg
   line(250,200,280,250);
   line(280,250,290,250);
   //1st Hand
   line(250,125,230,150);
   line(230,150,270,120);
   //2nd Hand
   line(250,125,350,100);
   //stick two
   //Head
    circle(350,105,25);
    //Line
   line(350,125,350,200);
   //1st Leg
   line(350,200,330,250);
   line(330,250,320,250);
   //2nd Leg
   line(350,200,380,250);
   line(380,250,370,250);
   //1st Hand
   line(350,125,320,150);
   line(320,150,290,130);
   //2nd Hand
   line(350,125,370,150);
   line(370,150,330,120);
   }
   }
   }
void defaultscreen()
{
   //stick one
    //Head
   circle(250,105,25);
   //line
   line(250,125,250,200);
   //1st Leg
   line(250,200,230,250);
   line(230,250,240,250);
   //2nd Leg
   line(250,200,280,250);
   line(280,250,290,250);
   //1st Hand
   line(250,125,230,150);
   line(230,150,270,120);
   //2nd Hand
   line(250,125,280,150);
   line(280,150,310,130);
   //stick two
   //Head
    circle(350,105,25);
    //Line
   line(350,125,350,200);
   //1st Leg
   line(350,200,330,250);
   line(330,250,320,250);
   //2nd Leg
   line(350,200,380,250);
   line(380,250,370,250);
   //1st Hand
   line(350,125,320,150);
   line(320,150,290,130);
   //2nd Hand
   line(350,125,370,150);
   line(370,150,330,120);
   }
