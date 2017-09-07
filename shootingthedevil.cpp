#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<windows.h>
#include<stdlib.h>
 

typedef struct bulletc_count
{
        int x11;
        int y11;
        }bc;
typedef struct witch1
{
        int x0;
        int y0;
}wt;
   int n=0;
struct witch1 f[4];

void entry();
void scorechart();
void highscore();
void push(int);
int pop();
void popq();
void displayq();
void addition(char [],int);       
void insert(char [],int);    
void displaysc();        
void bull(int,int,int,int); 
void displaymenu();       
void fun1();
void fun2();
void fun3();
void game1();
void gun(void);
void menu1();
void collide1(int,int,int,int);
void collide2(int,int,int,int);
int bullet_live(int,int,int,int);
void witch(int,int);

int main()
{   
    initwindow(1300, 680, " Shooting The Devil");
    //fun1();
    displaymenu();
    //printf("Hello");
    getch();
    return 0;
}
    
 
  /* settextstyle(4, HORIZ_DIR, 2);x
   outtextxy(100,150,"1.Start Game");
   outtextxy(100,190,"2.Help");
   outtextxy(100,230,"3.Exit");
   while (!ismouseclick(WM_LBUTTONDOWN));
   getmouseclick(WM_LBUTTONDOWN, mx, my);
   
   if(mx>100 && mx<278 && my>151 && my<167)
             {
                      count=0;
                      length=3;
                      snake();
             }
   if(mx>100 &&mx<188 && my>189 && my<207)
             {
                    cleardevice();
                    readimagefile("inst.bmp",0,0,632,480);
                    help();
             }
   if(mx>100 &&mx<175 && my>231 && my<245)                 
   exit(0);
   */
    
    
void displaymenu()
{    
     char ch;
     int font=0,x=25,y=25,mx,my;
     readimagefile("wtbackground.bmp",0,0,1300,680); 
     delay(4000);
     cleardevice();
    // settextstyle(0, HORIZ_DIR, 5);
     readimagefile("nbck.bmp",0,0,1300,680);
     settextstyle(4, HORIZ_DIR, 2);
     outtextxy(100,150,"1.Start Game");
     outtextxy(100,190,"2.Help");
     outtextxy(100,230,"3.High score");
     outtextxy(100,270,"4.Exit");
     while (!ismouseclick(WM_LBUTTONDOWN));
     getmouseclick(WM_LBUTTONDOWN, mx, my);
     printf("%d %d",mx,my);
     if(mx>100 && mx<278 && my>151 && my<167)
             {
                      fun1();
             }
    if(mx>100 &&mx<188 && my>189 && my<207)
             {
                    cleardevice();
                    readimagefile("instr.bmp",0,0,1300,680);
                    
             }
   if(mx>100 &&mx<175 && my>231 && my<245)                 
   highscore();
     } 
void fun1(void)
{
    //int x1=570,x2=630,y1=400,y2=500;
    readimagefile("dback.bmp",0,0,1300,680);
    readimagefile("b.bmp",0,150,200,200);
    readimagefile("b.bmp",150,250,350,300);
    readimagefile("b.bmp",500,250,700,300);
    readimagefile("b.bmp",700,250,900,300);
    readimagefile("b.bmp",350,400,550,450);
    readimagefile("b.bmp",700,550,900,600);
    readimagefile("b.bmp",930,350,1130,400);
    readimagefile("b.bmp",1130,150,1300,200);
    //readimagefile("dex.bmp",570,400,630,500);
readimagefile("dex.bmp",0,400,60,500);
   // witch(630,500);
    //readimagefile("bullet2.bmp",400,500,450,530);
   //while(kbhit()) 
    gun();
   

    //fun3();
    
     }
     
     
     void display22()
     {
      int x,y,x0,y0;
      x=1100;
      y=400;
      x0=x+20;
      y0=y+30;
    readimagefile("dback.bmp",0,0,1300,680);
    readimagefile("b.bmp",0,150,200,200);
    readimagefile("b.bmp",150,250,350,300);
    readimagefile("b.bmp",500,250,700,300);
    readimagefile("b.bmp",700,250,900,300);
    readimagefile("b.bmp",350,400,550,450);
    readimagefile("b.bmp",700,550,900,600);
    readimagefile("b.bmp",930,350,1130,400);
    readimagefile("b.bmp",1130,150,1330,200);
   // readimagefile("wt.bmp",x,y,x0,y0);
}

     
          void game1(void)
     {
          
          }
          
          
          
          void display11()
          {
               
    readimagefile("nf3.bmp",0,0,1300,680);
    readimagefile("b.bmp",0,0,200,50);
    readimagefile("b.bmp",0,50,200,100);
    readimagefile("b.bmp",1100,0,1300,50);
    readimagefile("b.bmp",1100,50,1300,100);
    readimagefile("b.bmp",0,100,200,150);
    readimagefile("b.bmp",200,0,400,50);
    readimagefile("b.bmp",200,50,400,100);
    readimagefile("b.bmp",200,100,400,150);
    readimagefile("b.bmp",1100,100,1300,150);
    readimagefile("b.bmp",0,630,200,680);
    readimagefile("b.bmp",0,580,200,630);
    readimagefile("b.bmp",0,530,200,580);
           }
           
          
          
void fun2(void)
{  char ch;
//int x1=570,x2=630,y1=400,y2=500;
int x1=0,x2=60,y1=400,y2=500;

    readimagefile("nf3.bmp",0,0,1300,680);
    readimagefile("b.bmp",0,0,200,50);
    readimagefile("b.bmp",0,50,200,100);
    readimagefile("b.bmp",1100,0,1300,50);
    readimagefile("b.bmp",1100,50,1300,100);
    readimagefile("b.bmp",0,100,200,150);
    readimagefile("b.bmp",200,0,400,50);
    readimagefile("b.bmp",200,50,400,100);
    readimagefile("b.bmp",200,100,400,150);
    readimagefile("b.bmp",1100,100,1300,150);
    readimagefile("b.bmp",0,630,200,680);
    readimagefile("b.bmp",0,580,200,630);
    readimagefile("b.bmp",0,530,200,580);
    readimagefile("dex.bmp",x1,y1,x2,y2);
    
 //if(kbhit())
{
    gun();
}
      }
void gun(void)
{
    
     bc a[10];
     char c;
     int n=10,i=0,j,x11,y11,x22,y22;
      int x,y,x0,y0;
      x=1100;
      y=400;
      x0=x+20;
      y0=y+30;
    //readimagefile("dex.bmp",x1,y1,x2,y2);
     //int x1=570,x2=630,y1=400,y2=500,flag=0;
int x1=0,x2=60,y1=400,y2=500,flag=0;
      x11=x1;
      y11=(35*y2+65*y1)/100;         
      x22=x1+50;
      y22=(65*y2+35*y1)/100;
    //readimagefile("dex.bmp",x1,y1,x2,y2);
     char ch;  
    // readimagefile("dex.bmp",x1,y1,x2,y2);  
    getch();
    kbhit();
              ch=getch();
                  
                  
        while(ch!=27)                                           

        {
   /* 
    if(ch==27)
    {
              exit(0);
              }
  */   
                  //For changing the direction of dex through arrow keys.
                        if(ch==72)                          
                        {
                                                           
                               x1=x1;
                               y1=y1-10;
                               x2=x2;
                               y2=y2-10; 
                              
                              cleardevice();
                              display22();
                              
                              readimagefile("dex.bmp",x1,y1,x2,y2);
                             // witch(x2,y2);
                              collide1(x1,y1,x2,y2);
                             
                               //Upward         
                        }

                        else if(ch==75)                          
                        {    
                              x1=x1-10;
                              y1=y1;
                              x2=x2-10;
                              y2=y2;
                              cleardevice();
                              display22();
                              readimagefile("dex.bmp",x1,y1,x2,y2);
                               // witch(x2,y2);
                              collide1(x1,y1,x2,y2);
                        }
                               //Left
                        

                        else if(ch==77)                         
                        {
                              x1=x1+10;
                              y1=y1;
                              x2=x2+10;
                              y2=y2;
                              cleardevice();
                              display22();
                              readimagefile("dex.bmp",x1,y1,x2,y2);
                                          
                                          // readimagefile("dex.bmp",x1,y1,x2,y2);
                              collide1(x1,y1,x2,y2);
                                //Right
                        }

                        else if(ch==80)                          
                        {
                             
                              x1=x1;
                              y1=y1+10;
                              x2=x2;
                              y2=y2+10;     
        
                              cleardevice();
                              display22();
                              readimagefile("dex.bmp",x1,y1,x2,y2);
                               // witch(x2,y2);        
                                          // readimagefile("dex.bmp",x1,y1,x2,y2);
                              collide1(x1,y1,x2,y2);
                         }
                                //Down
                                //getch();
  //                              kbhit();
//                                ch=getch();
                                
                                
 //                       }
 // c=getchar();
 else if(ch==32){
            if(i<n){
                a[i].x11=x1+10;
                a[i].y11=y1;
                i++; 
                }
        }
        
        if( kbhit())
            ch=getch();
        else
            ch=0;
        delay(100); 
        cleardevice();
        display22();
        readimagefile("dex.bmp",x1,y1,x2,y2);
          //witch(x2,y2);
        collide1(x1,y1,x2,y2);
        printf("i==%d\n",i);
        for(j=0;j<i;j++){
            if((a[j].x11)+10!=1300){
                a[j].x11=a[j].x11+5;
                readimagefile("bullet2.bmp",a[j].x11,a[j].y11,a[j].x11+50,a[j].y11+10);          
            witch(a[j].x11+50,a[j].y11+50);
            }
        }
        
    }
   /*else if(ch==32)
  {
            while(i!=n)
            {
                       i++; 
                       //c=getchar();
                       //if(c==32)
                       //{
                                for(j=0;j<i;j++)
                                {
                                                a[i].x11=a[i].x11+10;
                                                cleardevice();
                                                display22();
                                                readimagefile("bullet2.bmp",x11,y11,x22,y22);          
                                }   
           
                       //}
            }                     
                
            delay(1000);
            for(j=0;j<i;j++)
            {
                            do
                            {
                                  a[i].x11=a[i].x11+20;  
                                  readimagefile("bullet2.bmp",x11,y11,x22,y22);          
                            }while((a[i].x11)+10!=1300);
            }
            witch(x22,y22);
}
kbhit();
ch=getch();
  /*{n++;
  //adimagefile("bullet2.bmp",x1,(35*y2+65*y1)/100,x1+100,(65*y2+35*y1)/100);
  bull(x1,(35*y2+65*y1)/100,x1+50,(65*y2+35*y1)/100);
}
*/
getch();
}
void collide1(int x1,int y1,int x2,int y2)
{    
     if((x1>=0 && x1<=200 && y1>=150 && y1<=200)||(x1>=150 && x1<=350 && y1>=250 && y1<=300)||(x1>=500 && x1<=700 && y1>=250 && y1<=300)||(x1>=700 && x1<=900 && y1>=250 && y1<=300)||(x1>=350 && x1<=550 && y1>=400 && y1<=450)||(x1>=700 && x1<=900 && y1>=550 && y1<=600)||(x1>=930 && x1<=1130 && y1>=350 && y1<=400)||(x1>=1130 && x1<=1330 && y1>=150 && y1<=200)||
     (x2>=0 && x2<=200 && y2>=150 && y2<=200)||(x2>=150 && x2<=350 && y2>=250 && y2<=300)||(x2>=500 && x2<=700 && y2>=250 && y2<=300)||(x2>=700 && x2<=900 && y2>=250 && y2<=300)||(x2>=350 && x2<=550 && y2>=400 && y2<=450)||(x2>=700 && x2<=900 && y2>=550 && y2<=600)||(x2>=930 && x2<=1130 && y2>=350 && y2<=400)||(x2>=1130 && x2<=1300 && y2>=150 && y2<=200))
     
     {
          settextstyle(4, HORIZ_DIR, 5);
          outtextxy(100,300,"Game Over!");
//          delay(3000);
     }
}


void collide2(int x1,int x2,int y1,int y2)
{
    if((x1>=0 && x1<=200 && y1>=150 && y1<=200)||(x1>=0 && x1<=200 && y1>=50 && y1<=100)||(x1>=1100 && x1<=1300 && y1>=0 && y1<=100)||(x1>=0 && x1<=200 && y1>=100 && y1<=150)||(x1>=200 && x1<=400 && y1>=0 && y1<=100)||(x1>=200 && x1<=400 && y1>=100 && y1<=150)||(x1>=1100 && x1<=1300 && y1>=100 && y1<=150)||(x1>=0 && x1<=200 && y1>=630 && y1<=680)||(x1>=0 && x1<=200 && y1>=580 && y1<=630)||(x1>=0 && x1<=200 && y1>=530 && y1<=580)||
     (x2>=0 && x2<=200 && y2>=150 && y2<=200)||(x2>=0 && x2<=200 && y2>=50 && y2<=100)||(x2>=1100 && x2<=1300 && y2>=0 && y2<=100)||(x2>=0 && x2<=200 && y2>=100 && y2<=150)||(x2>=200 && x2<=400 && y2>=0 && y2<=100)||(x2>=200 && x2<=400 && y2>=100 && y2<=150)||(x2>=1100 && x2<=1300 && y2>=100 && y2<=150)||(x2>=0 && x2<=200 && y2>=630 && y2<=680)||(x2>=0 && x2<=200 && y2>=580 && y2<=630)||(x2>=0 && x2<=200 && y2>=530 && y2<=580))
     {
            settextstyle(4, HORIZ_DIR, 5);
            outtextxy(100,300,"Game Over!");
     }
}     
     
void fun3(void)
{
     readimagefile("b3.bmp",0,0,1300,680);
     
     }
void witch(int x22,int y22)
{         int wx1,wy1,wx2,wy2; 
          struct witch1 f[4];
          f[0].x0=1000;
          //f[0].y0=500;
          f[0].y0=420;
          //f[1].x0=800;
         // f[1].y0=320;
          f[1].x0=610;
          f[1].y0=450;
          f[2].x0=1200;
          f[2].y0=500;
          //f[4].x0=600;
         // f[4].y0=420;
          wx1=f[rand()%3].x0;
          wy1=f[rand()%3].y0;
          wx2=wx1+50;
          wy2=wy1+80;
          readimagefile("wt.bmp",wx1,wy1,wx2,wy2);
          delay(100);
        if(x22==wx1 || y22>wy1 && y22<wy2)
        {
         outtextxy(100,300,"Game Over!");          
        }
        
         
}

struct queue
{
	int scoref;
	char namef[20];
	struct queue *next;
};


struct queue *p,*q,*r,*start=NULL,*end;
 
//char namef[20];
//score dataf d[10];
FILE *fp;

struct stack
{
	int data;
	struct stack *link;
};

struct list
{
	char str[20];
	int score;
	struct list *link;
};

struct list *start1=NULL,*end1;
struct stack *top=NULL;
int gscore,counts,lengths,fscore;
int pscore;
int pcount=0,s1=0;
char dscore[100],fname[50];
void entry()
{
char pname[20];
gscore=counts;
push(gscore);
readimagefile("nbck.bmp",0,0,1300,680);
outtextxy(50,50,"ENTER YOUR NAME");
gets(pname);

pcount=pcount+1;

fp=fopen("score.txt","a");
fprintf(fp,"%d\n",pcount);
fprintf(fp,"%s  %d\n",pname,gscore);
fclose(fp);
insert(pname,gscore);
outtextxy(50,70 ,"PREVIOUS SCORE");
pscore=pop();
sprintf(dscore,"%d",pscore);
outtextxy(100,70,dscore);
}
void scorechart()
{
readimagefile("nbck.bgi",0,0,1300,680);
outtextxy(200,100,"SCORE CHART");
displaysc();
}
void highscore()
{
fp=fopen("score.txt","a");
fscanf(fp,"%d",&lengths);
s1=0;
while(s1!=lengths)
{
	fscanf(fp,"%s%d",fname,&fscore);	
	addition(fname,fscore);
	s1++;
}
outtextxy(200,100,"HIGH SCORE");
displayq();
fclose(fp);
}







// Function to insert elements in priority queue as per their score.

void addition(char fname[20],int fscore)
{   struct queue *temp;
int i=0;
	if(start==NULL)
	{
		temp=(struct queue*) malloc(sizeof(struct queue));
		strcpy(temp->namef,fname);
		temp->scoref=fscore;
		start=temp;
		end=temp;
	}
	else
	{
		for(q=start;q->next!=NULL;q=q->next)
		{	
			i++;
		}
		if(i<3)
		{
			q=start;
		for(q=start;q->next!=NULL;q=q->next)
		{r=q->next;
	
        if(fscore < q->scoref)
		{
			temp=(struct queue *) malloc(sizeof(struct queue));	
			q->next=temp;
			temp->next=r;
		}
		else if(fscore > start->scoref)
		{
		temp=(struct queue *) malloc(sizeof(struct queue));	
		temp->next=start;
		start=temp;
    }	
		else

		{			
			p=start;
			while(p->next!=NULL)
			{
				p=p->next;
			}


			if(fscore < p->scoref)
			{
				exit(0);
			}
			else
				popq();
			q=start;
			for(q=start;q->next!=NULL;q=q->next)
			{
            r=q->next;
			if(fscore > q->scoref)
			{
				temp=(struct queue *) malloc(sizeof(struct queue));	
				q->next=temp;
				temp->next=r;
			}
			else if(fscore>start->scoref)
		temp=(struct queue *) malloc(sizeof(struct queue));	
		temp->next=start;
		start=temp;
		
			
}
		}
	}
}





     }
     }
     //Function to delete from priority queue. 
void popq()
{
	struct queue *g,*m;
	for(g=start;g->next->next!=NULL;g=g->next)
	{
	}
 	m=g->next;
	free(m);
	g->next=NULL;
}
//Function to display elements of the priority queue.
void displayq()
{
     char printname[50],printscore[50];
     int x1=50,y1=200,x2=300,y2=200;
	int i=1;
	struct queue *temp;
	temp=start;
	while(i<4)
	{
		i++;
		sprintf(printname,"%s",temp->namef);
		outtextxy(x1,y1,printname);
		sprintf(printscore,"%d",temp->scoref);
		outtextxy(x2,y2,printscore);
		temp=temp->next;
		y1=y1+50;
		y2=y2+50;
	}
}

//Function to insert names and scores in link list of score chart.
void insert(char pname[50],int gscore)
{
	struct list *temp;
	temp=(struct list*) malloc(sizeof(struct list));
	strcpy(temp->str,pname);
	temp->score=gscore;
	if(start1==NULL)
	{
		start1=temp;
		end1=temp;
	}
	else
	{
		end1->link=temp;
		end1=temp;
	}
	end1->link=NULL;
}

	

//Function to display score chart.
void displaysc()
{
	struct list *temp;
    char newname[50],newscore[50];
    int x1=50,y1=200,x2=300,y2=200;
    temp=start1;
	while(temp!=NULL)
	{
		sprintf(newname,"%s",temp->str);
		outtextxy(x1,y1,newname);
		sprintf(newscore,"%d",temp->score);
		outtextxy(x2,y2,newscore);
		temp=temp->link;
		y1=y1+50;
		y2=y2+50;
	}
}

//Function to insert score in the stack. 
void push(int c)
{
	struct stack *temp;
	temp=(struct stack *) malloc(sizeof(struct stack));
	temp->data=c;
	temp->link=top;
	top=temp;
	
}


//Function to pop the previous score from stack.
int pop()
{
	struct stack *temp;
	int k;	
	temp=top;
	k=temp->data;
	top=top->link;
	free(temp);	
	return k;
}

/*void bullet()
{    bc a[10];
     char c;
     int n=10,i,j,;
     while(i!=n)
     {
                i++; 
                c=getchar();
                if(c==32)
                {
                    for(j=0;j<i;j++)
                    {
                          a[i].x11=a[i].x11+10;
                          cleardevice();
                          display22();
                          readimagefile("bullet.bmp",x11,y11,x22,y22);          
                                    }   
                                      
                         }
                         
                }
     
     }*/


/*int bullet_live(int x1,int y1,int x2,int y2)
{
      if(x2==630)
      return 0;
      else return 1;
 }
 
 
 void bull(int x1,int y1,int x2,int y2)
 {
      int ch;
getch();
                  
         if(kbhit())                                           
        {
        ch=getch();
      if(ch==32)
      {
                n++;
                readimagefile("bullet2.bmp",x1,(35*y2+65*y1)/100,x1+50,(65*y2+35*y1)/100);
                
                
 
 int i;
 for(i=0;i<n;i++)
 {
                 tc[i].x11+=10;
                 tc[i].x22+=10;
               if(bullet_live(x1,y1,x2,y2))  
                 readimagefile("bullet2.bmp",x1,y1,x2,y2);
                 delay(100);
                 }
                 
}
}

}*/
