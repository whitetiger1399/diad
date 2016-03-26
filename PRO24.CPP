#include<iostream.h>
#include<dos.h>
#include<process.h>
#include<graphics.h>
#include<string.h>
#include<stdio.h>
#include<conio.h>
int ascii(int a,char str[3],int &score);
int result(int kk[6][6],int pos[200][8],int &jj,int &score);
int edit(int ,int,int,int,int kk[6][6],int pos[200][8],int &jj,int &score);
int edit2(int kk[6][6],int pos[200][8],int &jj,int &score);
int check(int kk[6][6],int pos [200][8],int ,int,int,int,int &jj,int &score);
int side(int kk[6][6],int &jj,int pos[200][8],int &score);
int scoring(int &score,int pos[200][8]);
int main()
{int i=300,jj=0,p=0,q=0,a,v,h,b,res,w=0,e=0,r=0,j=100,x=0,kk[6][6],y=0,ch=0,gd=DETECT,gm,k,l;
 int str[18][5]={222,420,140,35,100,
		 13,260,150,70,60,
		 435,120,35,456,354,
		 35,54,32,432,98,
		 334,30,545,24,12,
		 10,90,49,46,234,
		 112,32,121,600,225,
		 729,16,98,564,875,
		 76,86,86,974,36,
		 780,660,732,96,208,
		 31,75,568,930,836,
		 32,22,765,312,54,
		 65,54,86,50,90,
		 570,352,46,27,35,
		 786,540,314,876,289,
		 230,372,948,938,732,
		 328,244,144,134,385,
		 456,382,395,85,384
		 };
 char pop[5],arr[2][25]={" ","RULES AND REGULATION :"};
 int score=0;
 initgraph(&gd,&gm,"C:\\TC\\BGI");

int pos[200][8];
setbkcolor(5);

for(a=0;a<=200;a++)
{ for(b=0;b<=8;b++)
  {pos[a][b]=0;
  }
}
for(a=0;a<=6;a++)
{for(b=0;b<=6;b++)
 {kk[a][b]=0;
 }
}
b=0;

for(a=2;a<30;a++)
{line(1,a,1000,a);
a++;
}

 setfillstyle(1,14);
 settextstyle(TRIPLEX_FONT,HORIZ_DIR,9);
 b=0;
 setfillstyle(1,8);
 bar(550,60+b,620,160+b);
 b=b+100;
 setfillstyle(1,58);
 bar(550,60+b,620,160+b);
 b=b+100;

 setfillstyle(1,14);
 bar(550,60+b,620,160+b);

 b+=100;
 setfillstyle(1,1);
 bar(550,60+b,620,160+b);

  setcolor(15);
  outtextxy(560,50,"T");
  setcolor(0);
  outtextxy(560,150,"E");
  setcolor(2);
  outtextxy(560,250,"C");
  setcolor(14);
  outtextxy(555,350,"H");
  setcolor(9);
  settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
  setcolor(15);
  outtextxy(160,50,"MATHEMATICAL DYAD");
  setfillstyle(6,15);
  bar(140,90,500,95);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
setcolor(15);
outtextxy(30,120,arr[1]);
bar(20,145,270,150);
outtextxy(30,160,"Rule 1: Points are awarded when numbers are paired");
outtextxy(90,180," as multiples (vertically) and the lower number");
outtextxy(90,200," is greater. ");
outtextxy(30,230,"Rule 2: Points are deducted when numbers are paired");
outtextxy(90,250," as multiples (vertically) and the lower number");
outtextxy(90,270," is smaller. ");
outtextxy(30,300,"Rule 3: The HCF of the two adjacent numbers");
outtextxy(90,320," (horizontally) is divided from both the numbers");
outtextxy(90,340," and points are awarded accordingly.");
outtextxy(30,370,"Rule 4: 1 being a special number, no points are ");
outtextxy(90,390," awarded or deducted when numbers are paired");
outtextxy(90,410," with 1. ");
outtextxy(90,430,"            Press spacebar to continue");

  settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
  ch=getch();
for(a=0;;a++)
{if(ch==32)
  {break;
  }
  else
 {ch=getch();
 }
}
  cleardevice();
  setbkcolor(9);
  for(a=2;a<30;a++)
{line(1,a,1000,a);
a++;
}
setfillstyle(1,14);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,9);
   b=0;
   setfillstyle(1,8);
   bar(550,60+b,620,160+b);
   b=b+100;
   setfillstyle(1,58);
   bar(550,60+b,620,160+b);
   b=b+100;

setfillstyle(1,14);
bar(550,60+b,620,160+b);
b+=100;
setfillstyle(1,1);

bar(550,60+b,620,160+b);

setcolor(15);
  outtextxy(560,50,"T");
  setcolor(0);
  outtextxy(560,150,"E");
  setcolor(2);
  outtextxy(560,250,"C");
  setcolor(14);
  outtextxy(555,350,"H");
  setcolor(9);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
setcolor(15);
outtextxy(160,50,"MATHEMATICAL DYAD");
setfillstyle(8,15);
bar(140,90,510,95);

  settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
  setfillstyle(5,15);
  b=0;

  for(a=0;a<=6;a++)
  {
   bar(185, 125+b,415,130+b);
   b+=45;
   }
   b=0;
   for(a=0;a<=5;a++)
    { bar(185+b,125,190+b,395);
      b+=45;
    }
	setcolor(15);
	settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
	setfillstyle(1,1);
	bar3d(55,130,155,170,5,5);
	bar3d(55,180,155,220,5,5);
	bar3d(55,230,155,270,5,5);
	bar3d(55,280,155,320,5,5);
	bar3d(55,330,155,370,5,5);
	     outtextxy(65,140,"LEFT");
	     outtextxy(65,190,"DOWN");
	     outtextxy(65,240,"RIGHT");
	     outtextxy(65,290,"ESC");
	     outtextxy(65,340,"'H' HALT");

 for(p=0;p<=18;p++)
 {
  for(q=0;q<5;q++)
   { setcolor(15);
    i=300;
    j=150;
    x=0;
    y=0;
    ascii(str[p][q],pop,score);
    res=check(kk,pos,i,j,x,y,jj,score);
    if(res==1)
    {scoring(score,pos);
    }

   while(ch!=1)
   {
    settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);

    /*"DEFAULT font","TRIPLEX fontSMALL font","SMALL font",
      "SANS SERIF font","GOTHIC font" */

   a=result(kk,pos,jj,score);
   a=side(kk,jj,pos,score);
   a=result(kk,pos,jj,score);
   setfillstyle(1,1);
   bar(i-20,j-20,i+20,j+20);
   if(str[p][q]>=100)
   {outtextxy(i-15,j-7,pop);
   }
   else if(str[p][q]<100)
   {outtextxy(i-7,j-7,pop);
   }

   delay(500);

   if(kbhit())
    {  a=side(kk,jj,pos,score);
       ch=getch();

      if(ch==75)
	{x=-45;
	 y=0;

       }
      if(ch==77)
      {x=45;
       y=0;
      }

      if(ch==72||ch==104)
     {  settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
	ch=0;

	for(a=2;;a++)
       {setfillstyle(1,60);
	bar(420,130,540,180);
	setcolor(15);
	settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
	outtextxy(445,140,"HALT");

	setfillstyle(1,1);
	bar(420,190,540,250);
	setfillstyle(1,15);
	bar(460,200,475,240);
	bar(485,200,500,240);
	delay(1000);

	setfillstyle(1,1);
	bar(420,190,540,250);

	delay(1000);

	setcolor(15);
	settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
	outtextxy(90,420,"       Press 'R' to resume the game !!");

	if(kbhit())
	 {ch=getch();
	  if(ch==82||ch==114)
	   {ch=0;
	   setfillstyle(1,9);
	   bar(420,130,540,180);
	   bar(420,190,540,250);
	   bar(80,410,500,450);

	   goto lable2;
	   }
       }

     }
     }
     lable2:
     settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
     setcolor(15);

      if(ch==97||ch==65)
      { goto lable;
      }
      if(ch==80)
      {x=0;
       y=45;
      }
      if(ch==27)
      {  delay(2000);
	 cleardevice();
	 setbkcolor(14);
	 setcolor(1);
	 settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);

	 outtextxy(220,110,"GAME OVER !!");
	 setfillstyle(1,4);
	 bar(210,170,430,250);
	 setcolor(15);
	 outtextxy(230,200,"SCORE : " );
	 ascii(score,pop,score);
	 if(score==0)
	   {outtextxy(475,200,"0");
	    }
	 else if(score>0&&score<10)
	   { outtextxy(370,200,pop );
	   }
	 else if(score>=10&&score<100)
	   { outtextxy(365,200,pop );
	   }
	 else if(score>99&&score<1000)
	   { outtextxy(350,200,pop);
	    }
	 else if(score>999)
	   { outtextxy(345,200,pop);
	   }



	 setcolor(2);
	 settextstyle(TRIPLEX_FONT,HORIZ_DIR,3);

	 outtextxy(120,250,"We hope that you enjoyed our game" );
	 outtextxy(120,290,"to the fullest. Please give your " );
	 outtextxy(120,330,"prescious feedback on our website " );
	 setcolor(12);
	 outtextxy(200,370,"www.catexpo_games.com " );
	 getch();
	 closegraph();
	 exit(0);
	      }

      if((i+x)>390)
      {x=0;
      }
      if((i+x)<210)
      {x=0;
      }
     if((y+j)>375)
     { y=0;
       ch=1;
     }
      setfillstyle(3,9);
      res=check(kk,pos,i,j,x,y,jj,score);
      if(res==0)
       {
      delay(100);
      bar(i-20,j-20,i+20,j+20);
      i=i+x;
      j=j+y;

      setfillstyle(1,1);
      bar(i-20,j-20,i+20,j+20);
       if(str[p][q]>=100)
	  {outtextxy(i-15,j-7,pop);
	  }
       else if(str[p][q]<100)
	 {outtextxy(i-7,j-7,pop);
	 }

      x=0;
      y=0;

      a=result(kk,pos,jj,score);
      a=side(kk,jj,pos,score);
      scoring(score,pos);
      a=result(kk,pos,jj,score);
      scoring(score,pos);
       }

      }

  else
  {
   if((j+45)>375)
   {
    y=0;

    ch=1;
    a=result(kk,pos,jj,score);
    scoring(score,pos);
    a=side(kk,jj,pos,score);
    scoring(score,pos);
    a=result(kk,pos,jj,score);
    scoring(score,pos);
   }
   else
   {y=45;
    x=0;
    res=check(kk,pos,i,j,x,y,jj,score);
    if(res==0)
       {
	setfillstyle(1,9);
	bar(i-20,j-20,i+20,j+20);
	j=j+45;
	i=i+x;
       }
      else
      {
      ch=1;
      }

    }
    a=result(kk,pos,jj,score);
    scoring(score,pos);
    a=side(kk,jj,pos,score);
    scoring(score,pos);
    a=result(kk,pos,jj,score);
    scoring(score,pos);
 }
 }
 pos[jj][0]=i;
 pos[jj][1]=j;

 w=0;
 e=0;
 r=0;

 for(a=210;a<=390;)
 {
  if(i==a)
   { e=r;
   }
   r++ ;
   a=a+45;
 }
 r=5;

 for(b=375;b>=100;)
 {if(j==b)
   { w=r;
   }
   r-- ;
   b=b-45;
 }

kk[w][e]=str[p][q];

ch=0;
r=0;
i=300;
j=150;
e=0;
w=0;
x=0;
jj++;
y=0;

}

    a=result(kk,pos,jj,score);
    scoring(score,pos);
    a=side(kk,jj,pos,score);
    scoring(score,pos);
    a=result(kk,pos,jj,score);
    scoring(score,pos);
}
lable:
cleardevice();
closegraph();
getch();
return 0;
}

int check(int kk[6][6],int pos[8][8],int i,int j,int x,int y,int &jj,int &score)
{ int m;
  m=result(kk,pos,jj,score);
  for(m=0;m<=100;m++)
  {
   if((pos[m][0]==(i+x))&&(pos[m][1]==(j+y)))
   {
     return 1;
    }
   }
  return 0;
}
int result(int kk[6][6],int pos[200][8],int &jj,int &score)
{int i,j,p,a,b,l,r,e,m,n;

 for(i=5;i>=1;i--)
 { for(j=4;j>=0;j--)
  {
  r=375;
  e=390;

     for(l=5;l>=1;l--)
    {if(i==l)
	{ m=r;
	}
	r=r-45;
     }

      for(l=4;l>=0;l--)
      {if(j==l)
	{ n=e;
	 }
       e=e-45;
      }
    a=kk[i][j];
    b=kk[i-1][j];
    if((a!=0)&&(b!=0))
    {

    if(a>=b)
       {
	if((a%b)==0)
	  { if(b>1)
	     {
	      score=score+(a/b);
	     }
	scoring(score,pos);
	setfillstyle(1,14);

	bar(n-20,m-65,n+20,m-25);
	bar(n-20,m-20,n+20,m+20);
	edit(n,m,i,j,kk,pos,jj,score);
	edit2(kk,pos,jj,score);
	   }
	}
     else if(b>a)
     {
     if((b%a)==0)
      {
	  if(a>1)
	  { score=score-(b/a);
	  }
       scoring(score,pos);
       setfillstyle(1,12);
       bar(n-20,m-65,n+20,m-25);
       bar(n-20,m-20,n+20,m+20);
       edit(n,m,i,j,kk,pos,jj,score);
       edit2(kk,pos,jj,score);
      }
     }
    }

    }
  }
  delay(100);
  return 0;

}


int edit(int n,int m,int i,int j,int kk[6][6],int pos[200][8],int &jj,int &score)
{int p,l,k,r,e,s,d,w=0,t,y;

 for(p=0;p<=50;p++)
 { if((pos[p][0]==n)&&(pos[p][1]==m))
    { pos[p][0]=0;
      pos[p][1]=0;
    }

   if((pos[p][0]==n)&&(pos[p][1]==m-45))
    {  pos[p][0]=0;
       pos[p][1]=0;
    }
 }
for(p=0;p<=5;p++)
{for(l=0;l<=4;l++)
 {if((i==p)&&(l==j))
   {kk[p][j]=0;
    kk[p-1][j]=0;
   }
 }

}
 edit2(kk,pos,jj,score);
 return 0;
}

int ascii(int a,char pop[5],int &score)
{ int b,w,temp,c;
  strcpy(pop,"     ");
  char ch;
	if(a>0)
	       {  b=a;
		  w=0;
		if(b>0)
		{while(b>0)
		 {temp=b%10;
		  pop[w]=temp+48;
		  w++;
		  b=b/10;
		 }
		 a=w;
		 for(c=0;c<(w/2);c++)
		  {ch=pop[a-1];
		   pop[a-1]=pop[c];
		   pop[c]=ch;
		   a--;
		  }
		}
	      }

	      return 0;

}
int side(int kk[6][6],int &jj,int pos[200][8],int &score)
{  int i,a,b,j,e,r,x,y,l,m,n,temp,w=0;
   char ch,str[3]={"   "};

 for(i=5;i>=0;i--)
  { for(j=4;j>=0;j--)
   {
   r=375;
   e=390;
   strcpy(str,"   ");
      for(l=5;l>=1;l--)
     { if(i==l)
	 { m=r;
	 }
	  r=r-45;
     }

      for(l=4;l>=0;l--)
      {if(j==l)
	{ n=e;
	 }
	  e=e-45;
       }
    if((kk[i][j]>0)&&(kk[i][j-1]>0))
    {
      if(kk[i][j]>=kk[i][j-1])
      {a=kk[i][j];
      }
      else
      {a=kk[i][j-1];
      }

      for(x=a;x>=1;x--)
      {
       if(((kk[i][j]%x)==0)&&((kk[i][j-1]%x)==0))
	{
	  kk[i][j]=kk[i][j]/x;
		ascii(kk[i][j],str,score);
		setcolor(8);
		setfillstyle(1,10);
		bar(n-20,m-20,n+20,m+20);

		if(kk[i][j]>=100)
		   {outtextxy(n-15,m-7,str);
		   }
		else if(kk[i][j]<100)
		   {outtextxy(n-7,m-7,str);
		   }

		delay(200);
		w=0;
		kk[i][j-1]=kk[i][j-1]/x;

	    ascii(kk[i][j-1],str,score);
	    bar(n-65,m-20,n-25,m+20);

	    if(kk[i][j-1]>=100)
		 {outtextxy(n-60,m-7,str);
		 }
	    else if(kk[i][j-1]<100)
		 {outtextxy(n-52,m-7,str);
		 }

	    setcolor(15);
	      if(x>1)
	      {
	       score=score+x;
	       scoring(score,pos);
	      }
  }
	}
      }
    }

 }

 return 0;
}
int edit2(int kk[6][6],int pos[200][8],int &jj,int &score)
{
 int loop=0,w=0,a,b,ss,i,j,m,n,u,r,q,z,e,l,c,v,f,p,qq;
   char pop[3];
 for(loop=0;loop<=5;loop++)
{ for(i=5;i>=0;i--)
  { for(j=4;j>=0;j--)
   {
   r=375;
   e=390;
      for(l=5;l>=1;l--)
	{if(i==l)
	 { m=r;
	 }
	  r=r-45;
	}

       for(l=4;l>=0;l--)
       {if(j==l)
	{ n=e;
	 }
	 e=e-45;
	}
       v=m;
       c=n;
       u=i;
       z=j;
    if(u>1)
    { if((kk[u][z]==0)&&((kk[u-1][z]==0)&&(kk[u-2][z]>0)))
      { jj++;

       for(a=u-2;kk[a][z]!=0;a--)
	{
	 if(a<0)
	  {break;
	  }
	}
	 a=a+1;
	 r=375;
      for(l=5;l>=1;l--)
	{if(a==l)
	 { ss=r;
	 }
	   r=r-45;
	}
	r=375;
	for(l=5;l>=1;l--)
	{if(u==l)
	 { qq=r;
	 }
	   r=r-45;
	}

	pos[jj][0]=n;
	pos[jj][1]=qq;
	jj++;
	setfillstyle(1,9);
	bar(n-20,ss-20,n+20,ss+20);

       if(kk[u-3][z]>0)
       {setfillstyle(1,9);
	bar(n-20,ss+25,n+20,ss+65);
	pos[jj][0]=n;
	pos[jj][1]=qq-45;
	jj++;
	}

       for(b=0;b<200;b++)
      {
       if((pos[b][0]==n)&&(pos[b][1]==ss))
	{pos[b][0]=0;
	 pos[b][1]=0;
	}

	if((pos[b][0]==n)&&(pos[b][1]==ss+45))
	{pos[b][0]=0;
	 pos[b][1]=0;
	}

      }
	for(a=u;a>1;a--)
	{ kk[a][z]=kk[a-2][z];
	  r=375;
	     for(l=5;l>=1;l--)
	     {if(a==l)
		{ ss=r;
		}
		r=r-45;
	     }
	if(kk[a][z]>0)
	  { ascii(kk[a][z],pop,score);
	    setfillstyle(1,1);
	    bar(n-20,ss-20,n+20,ss+20);

	    if(kk[a][z]>=100)
	      {outtextxy(n-15,ss-7,pop);
	      }
	    else if(kk[a][z]<100)
	      { outtextxy(n-7,ss-7,pop);
	      }

	  }
	  else if(kk[a][z]==0)
	  {setfillstyle(1,9);
	  bar(n-20,ss-20,n+20,ss+20);
	  }
	  setfillstyle(1,9);
	  bar(n-20,ss-65,n+20,ss-25);
	  bar(n-20,ss-110,n+20,ss-70);
	}

      }
     }
 }
 }
 }

 return 0;
}
int scoring(int &score,int pos[200][8])
{ char pop[5],count=0,p;
     ascii(score,pop,score);
     settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
  if(score<0)
  {score=0;
  }

    setfillstyle(1,4);
    bar(420,260,540,385);
    outtextxy(435,285,"SCORE" );

if(score==0)
{outtextxy(475,330,"0");
}
else if(score>0&&score<10)
{ outtextxy(475,330,pop );
}
else if(score>=10&&score<100)
{ outtextxy(465,330,pop );
}
else if(score>99&&score<1000)
{ outtextxy(450,330,pop);
}
else if(score>999)
{ outtextxy(440,330,pop);
}



  for(p=0;p<100;p++)
  {
      if(pos[p][0]==300&&pos[p][1]==150)
      {count++;
      }
      if(count>0)
      {	 cleardevice();
	 setbkcolor(14);
	 setcolor(1);
	 settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);

	 outtextxy(220,110,"GAME OVER !!");
	 setfillstyle(1,4);
	 bar(210,170,430,250);
	 setcolor(15);
	 outtextxy(230,200,"SCORE : " );
	 ascii(score,pop,score);

	 if(score==0)
	   {outtextxy(475,200,"0");
	    }
	 else if(score>0&&score<10)
	   { outtextxy(370,200,pop );
	   }
	 else if(score>=10&&score<100)
	   { outtextxy(365,200,pop );
	   }
	 else if(score>99&&score<1000)
	   { outtextxy(350,200,pop);
	    }
	 else if(score>999)
	   { outtextxy(345,200,pop);
	   }

	 setcolor(2);
	 settextstyle(TRIPLEX_FONT,HORIZ_DIR,3);
	 outtextxy(120,250,"We hope that you enjoyed our game" );
	 outtextxy(120,290,"to the fullest. Please give your " );
	 outtextxy(120,330,"prescious feedback on our website " );
	 setcolor(12);
	 outtextxy(200,370,"www.catexpo_games.com " );
	 getch();
	 closegraph();
	 exit(0);
	}
  }
   settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
return 0;
}

