# include "iGraphics.h"
#include<stdlib.h>
#include<time.h>

/* 
	function iDraw() is called again and again by the system.
*/
int a,b,s=0,r=0,q=0,y=0,z=0,c=200,p,pause,resume,count1=0,count2=0,count3=0;
char scoreText1[100], scoreText2[100],scoreText3[100];

struct list
{
    int data;
    struct list *next;
};
typedef struct list node;
node *start;

void sorted_insert()
{
	s=rand()%52+1;
	printf("%d ",s);
    if(start==NULL)
    {
        node *temp=(node*)malloc(sizeof(node));
        temp->data=s;
        temp->next=NULL;
        start=temp;
    }
    else
    {
        node *temp=(node*)malloc(sizeof(node));
        temp->data=s;
        temp->next=NULL;
        if(start->data>temp->data)
        {
            temp->next=start;
            start=temp;
        }
        else if(start->data<=temp->data)
        {
            node *t=start;
            while((t->next!=NULL) &&(t->next->data<temp->data))
            {
				t=t->next;
            }
            temp->next=t->next;
            t->next=temp;
        }
    }
}
void display()
{
    node *temp=start;
	printf("\n");
    while(temp!=NULL)
    {
        printf("show: %d  ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

void delete_card(int q)
{
    node *temp=start;
    node *prev;
    while(temp!=NULL)
    {
        if(temp->data!=q)
        {
            prev=temp;
            temp=temp->next;
        }
        else
        {
           if(start->data==q)
           {
               start=temp->next;
               free(temp);
           }
           else
           {
               prev->next=temp->next;
               free(temp);
           }
          break;
        }
    }
}

void delete_new()
{
	node *temp;
	while(start!=NULL)
	{
		temp=start;
		start=temp->next;
		free(temp);
	}
}

void data_structure()
{
	for(int i=0;i<4;i++)
	{
		sorted_insert();
	}
	s=0;
		//display();
}

void iDraw()
{
	iClear();
	iShowBMP(0, 0, "front_R.bmp"); //background for the 1st page
	iShowBMP(170, 500, "SPIDER123.bmp"); //game name
	iShowBMP(298, 300, "PLAY123.bmp"); //play button
	iShowBMP(298, 216, "ABOUT123.bmp"); //about button
	iShowBMP(298, 132, "SETTING123.bmp");//setting button

	//for play click
	if(a==1|| p==1 || resume==1 || resume==2)
	{
		iClear();
		//printf("page showed\n");

		//for background
		iShowBMP(0, 0, "background_resume2.bmp");

		//for name
		iShowBMP(200, 605, "spider_name.bmp");

		//for deck
		iShowBMP(80, 20, "deck1.bmp"); 
		iShowBMP(77, 20, "deck1.bmp"); 
		iShowBMP(74, 20, "deck1.bmp"); 

		iShowBMP(80, 452,"deck1.bmp"); 
		iShowBMP(77, 452,"deck1.bmp"); 
		iShowBMP(74, 452,"deck1.bmp"); 

		
		node *temp=start;
		while(temp!=NULL)
		{
			s=temp->data;

			//for chira
			if(s==1)
			{
				iShowBMP(c, 20, "card-A-chira.bmp");
			}
			else if(s==2)
			{
				iShowBMP(c, 20, "card-2-chira.bmp");
			}
			else if(s==3)
			{
				iShowBMP(c, 20, "card-3-chira.bmp");
			}
			else if(s==4)
			{
				iShowBMP(c, 20, "card-4-chira.bmp");
			}
			else if(s==5)
			{
				iShowBMP(c, 20, "card-5-chira.bmp");
			}
			else if(s==6)
			{
				iShowBMP(c, 20, "card-6-chira.bmp");
			}
			else if(s==7)
			{
				iShowBMP(c, 20, "card-7-chira.bmp");
			}
			else if(s==8)
			{
				iShowBMP(c, 20, "card-8-chira.bmp");
			}
			else if(s==9)
			{
				iShowBMP(c, 20, "card-9-chira.bmp");
			}
			else if(s==10)
			{
				iShowBMP(c, 20, "card-10-chira.bmp");
			}
			else if(s==11)
			{
				iShowBMP(c, 20, "card-J-chira.bmp");
			}
			else if(s==12)
			{
				iShowBMP(c, 20, "card-Q-chira.bmp");
			}
			else if(s==13)
			{
				iShowBMP(c, 20, "card-K-chira.bmp");
			}

			//for daimond
			else if(s==14)
			{
				iShowBMP(c, 20, "card-A-spade.bmp");
			}
			else if(s==15)
			{
				iShowBMP(c, 20, "card-2-spade.bmp");
			}
			else if(s==16)
			{
				iShowBMP(c, 20, "card-3-spade.bmp");
			}
			else if(s==17)
			{
				iShowBMP(c, 20, "card-4-spade.bmp");
			}
			else if(s==18)
			{
				iShowBMP(c, 20, "card-5-spade.bmp");
			}
			else if(s==19)
			{
				iShowBMP(c, 20, "card-6-spade.bmp");
			}
			else if(s==20)
			{
				iShowBMP(c, 20, "card-7-spade.bmp");
			}
			else if(s==21)
			{
				iShowBMP(c, 20, "card-8-spade.bmp");
			}
			else if(s==22)
			{
				iShowBMP(c, 20, "card-9-spade.bmp");
			}
			else if(s==23)
			{
				iShowBMP(c, 20, "card-10-spade.bmp");
			}
			else if(s==24)
			{
				iShowBMP(c, 20, "card-J-spade.bmp");
			}
			else if(s==25)
			{
				iShowBMP(c, 20, "card-Q-spade.bmp");
			}
			else if(s==26)
			{
				iShowBMP(c, 20, "card-K-spade.bmp");
			}

			//for diamond
			else if(s==27)
			{
				iShowBMP(c, 20, "card-A-diamond.bmp");
			}
			else if(s==28)
			{
				iShowBMP(c, 20, "card-2-diamond.bmp");
			}
			else if(s==29)
			{
				iShowBMP(c, 20, "card-3-diamond.bmp");
			}
			else if(s==30)
			{
				iShowBMP(c, 20, "card-4-diamond.bmp");
			}
			else if(s==31)
			{
				iShowBMP(c, 20, "card-5-diamond.bmp");
			}
			else if(s==32)
			{
				iShowBMP(c, 20, "card-6-diamond.bmp");
			}
			else if(s==33)
			{
				iShowBMP(c, 20, "card-7-diamond.bmp");
			}
			else if(s==34)
			{
				iShowBMP(c, 20, "card-8-diamond.bmp");
			}
			else if(s==35)
			{
				iShowBMP(c, 20, "card-9-diamond.bmp");
			}
			else if(s==36)
			{
				iShowBMP(c, 20, "card-10-diamond.bmp");
			}
			else if(s==37)
			{
				iShowBMP(c, 20, "card-J-diamond.bmp");
			}
			else if(s==38)
			{
				iShowBMP(c, 20, "card-Q-diamond.bmp");
			}
			else if(s==39)
			{
				iShowBMP(c, 20, "card-K-diamond.bmp");
			}

			else if(s==40)
			{
				iShowBMP(c, 20, "card_A.bmp");
			}
			else if(s==41)
			{
				iShowBMP(c, 20, "card_2.bmp");
			}
			else if(s==42)
			{
				iShowBMP(c, 20, "card_3.bmp");
			}
			else if(s==43)
			{
				iShowBMP(c, 20, "card_4.bmp");
			}
			else if(s==44)
			{
				iShowBMP(c, 20, "card_5.bmp");
			}
			else if(s==45)
			{
				iShowBMP(c, 20, "card_6.bmp");
			}
			else if(s==46)
			{
				iShowBMP(c, 20, "card_7.bmp");
			}
			else if(s==47)
			{
				iShowBMP(c, 20, "card_8.bmp");
			}
			else if(s==48)
			{
				iShowBMP(c, 20, "card_9.bmp");
			}
			else if(s==49)
			{
				iShowBMP(c, 20, "card_10.bmp");
			}
			else if(s==50)
			{
				iShowBMP(c, 20, "card_J.bmp");
			}
			else if(s==51)
			{
				iShowBMP(c, 20, "card_Q.bmp");
			}
			else if(s==52)
			{
				iShowBMP(c, 20, "card_K.bmp");
			}
			temp=temp->next;
			c=c+120;
		}
		c=200;

		//for computer's card
		iShowBMP(200, 452, "card.bmp"); 
		iShowBMP(320, 452, "card.bmp"); 
		iShowBMP(440, 452, "card.bmp"); 
		iShowBMP(560, 452, "card.bmp");

		
		//for middle card
		if(q==0 && r==0)
		{
			iShowBMP(320, 166, "card.bmp");
			iShowBMP(320, 304, "card.bmp");
		}

		//for turn button
		iShowBMP(450, 180, "your_turn.bmp");
		iShowBMP(100, 366, "computer_turn.bmp");

		//for score rectangle
		iSetColor(70, 70, 70);
		iFilledRectangle(704,0, 148, 700);

		//for player A
		if(q==1)
		{
			iShowBMP(320, 166, "card-A-chira.bmp");
		}
		else if(q==2)
		{
			iShowBMP(320, 166, "card-2-chira.bmp");
		}
			else if(q==3)
			{
				iShowBMP(320, 166, "card-3-chira.bmp");
			}
			else if(q==4)
			{
				iShowBMP(320, 166, "card-4-chira.bmp");
			}
			else if(q==5)
			{
				iShowBMP(320, 166, "card-5-chira.bmp");
			}
			else if(q==6)
			{
				iShowBMP(320, 166, "card-6-chira.bmp");
			}
			else if(q==7)
			{
				iShowBMP(320, 166, "card-7-chira.bmp");
			}
			else if(q==8)
			{
				iShowBMP(320, 166, "card-8-chira.bmp");
			}
			else if(q==9)
			{
				iShowBMP(320, 166, "card-9-chira.bmp");
			}
			else if(q==10)
			{
				iShowBMP(320, 166, "card-10-chira.bmp");
			}
			else if(q==11)
			{
				iShowBMP(320, 166, "card-J-chira.bmp");
			}
			else if(q==12)
			{
				iShowBMP(320, 166, "card-Q-chira.bmp");
			}
			else if(q==13)
			{
				iShowBMP(320, 166, "card-K-chira.bmp");
			}

			//for daimond
			else if(q==14)
			{
				iShowBMP(320, 166, "card-A-spade.bmp");
			}
			else if(q==15)
			{
				iShowBMP(320, 166, "card-2-spade.bmp");
			}
			else if(q==16)
			{
				iShowBMP(320, 166, "card-3-spade.bmp");
			}
			else if(q==17)
			{
				iShowBMP(320, 166, "card-4-spade.bmp");
			}
			else if(q==18)
			{
				iShowBMP(320, 166, "card-5-spade.bmp");
			}
			else if(q==19)
			{
				iShowBMP(320, 166, "card-6-spade.bmp");
			}
			else if(q==20)
			{
				iShowBMP(320, 166, "card-7-spade.bmp");
			}
			else if(q==21)
			{
				iShowBMP(320, 166, "card-8-spade.bmp");
			}
			else if(q==22)
			{
				iShowBMP(320, 166, "card-9-spade.bmp");
			}
			else if(q==23)
			{
				iShowBMP(320, 166, "card-10-spade.bmp");
			}
			else if(q==24)
			{
				iShowBMP(320, 166, "card-J-spade.bmp");
			}
			else if(q==25)
			{
				iShowBMP(320, 166, "card-Q-spade.bmp");
			}
			else if(q==26)
			{
				iShowBMP(320, 166, "card-K-spade.bmp");
			}

			//for diamond
			else if(q==27)
			{
				iShowBMP(320, 166, "card-A-diamond.bmp");
			}
			else if(q==28)
			{
				iShowBMP(320, 166 ,"card-2-diamond.bmp");
			}
			else if(q==29)
			{
				iShowBMP(320, 166, "card-3-diamond.bmp");
			}
			else if(q==30)
			{
				iShowBMP(320, 166, "card-4-diamond.bmp");
			}
			else if(q==31)
			{
				iShowBMP(320, 166, "card-5-diamond.bmp");
			}
			else if(q==32)
			{
				iShowBMP(320, 166, "card-6-diamond.bmp");
			}
			else if(q==33)
			{
				iShowBMP(320, 166, "card-7-diamond.bmp");
			}
			else if(q==34)
			{
				iShowBMP(320, 166, "card-8-diamond.bmp");
			}
			else if(q==35)
			{
				iShowBMP(320, 166, "card-9-diamond.bmp");
			}
			else if(q==36)
			{
				iShowBMP(320, 166, "card-10-diamond.bmp");
			}
			else if(q==37)
			{
				iShowBMP(320, 166, "card-J-diamond.bmp");
			}
			else if(q==38)
			{
				iShowBMP(320, 166, "card-Q-diamond.bmp");
			}
			else if(q==39)
			{
				iShowBMP(320, 166, "card-K-diamond.bmp");
			}

			else if(q==40)
			{
			iShowBMP(320, 166, "card_A.bmp");
			}
			else if(q==41)
			{
				iShowBMP(320, 166, "card_2.bmp");
			}
			else if(q==42)
			{
				iShowBMP(320, 166, "card_3.bmp");
			}
			else if(q==43)
			{
				iShowBMP(320, 166, "card_4.bmp");
			}
			else if(q==44)
			{
				iShowBMP(320, 166, "card_5.bmp");
			}
			else if(q==45)
			{
				iShowBMP(320, 166, "card_6.bmp");
			}
			else if(q==46)
			{
				iShowBMP(320, 166, "card_7.bmp");
			}
			else if(q==47)
			{
				iShowBMP(320, 166, "card_8.bmp");
			}
			else if(q==48)
			{
				iShowBMP(320, 166, "card_9.bmp");
			}
			else if(q==49)
			{
				iShowBMP(320, 166, "card_10.bmp");
			}
			else if(q==50)
			{
				iShowBMP(320, 166, "card_J.bmp");
			}
			else if(q==51)
			{
				iShowBMP(320, 166, "card_Q.bmp");
			}
			else if(q==52)
			{
				iShowBMP(320, 166, "card_K.bmp");
			}

		//for computer turn
			if(r==1)
			{
				iShowBMP(320, 304, "card-A-chira.bmp");
			}
			else if(r==2)
			{
				iShowBMP(320, 304, "card-2-chira.bmp");
			}
			else if(r==3)
			{
				iShowBMP(320, 304, "card-3-chira.bmp");
			}
			else if(r==4)
			{
				iShowBMP(320, 304, "card-4-chira.bmp");
			}
			else if(r==5)
			{
				iShowBMP(320, 304, "card-5-chira.bmp");
			}
			else if(r==6)
			{
				iShowBMP(320, 304, "card-6-chira.bmp");
			}
			else if(r==7)
			{
				iShowBMP(320, 304, "card-7-chira.bmp");
			}
			else if(r==8)
			{
				iShowBMP(320, 304, "card-8-chira.bmp");
			}
			else if(r==9)
			{
				iShowBMP(320, 304, "card-9-chira.bmp");
			}
			else if(r==10)
			{
				iShowBMP(320, 304, "card-10-chira.bmp");
			}
			else if(r==11)
			{
				iShowBMP(320, 304, "card-J-chira.bmp");
			}
			else if(r==12)
			{
				iShowBMP(320, 304, "card-Q-chira.bmp");
			}
			else if(r==13)
			{
				iShowBMP(320, 304, "card-K-chira.bmp");
			}

			//for daimond
			else if(r==14)
			{
				iShowBMP(320, 304, "card-A-spade.bmp");
			}
			else if(r==15)
			{
				iShowBMP(320, 304, "card-2-spade.bmp");
			}
			else if(r==16)
			{
				iShowBMP(320, 304, "card-3-spade.bmp");
			}
			else if(r==17)
			{
				iShowBMP(320, 304, "card-4-spade.bmp");
			}
			else if(r==18)
			{
				iShowBMP(320, 304, "card-5-spade.bmp");
			}
			else if(r==19)
			{
				iShowBMP(320, 304, "card-6-spade.bmp");
			}
			else if(r==20)
			{
				iShowBMP(320, 304, "card-7-spade.bmp");
			}
			else if(r==21)
			{
				iShowBMP(320, 304, "card-8-spade.bmp");
			}
			else if(r==22)
			{
				iShowBMP(320, 304, "card-9-spade.bmp");
			}
			else if(r==23)
			{
				iShowBMP(320, 304, "card-10-spade.bmp");
			}
			else if(r==24)
			{
				iShowBMP(320, 304, "card-J-spade.bmp");
			}
			else if(r==25)
			{
				iShowBMP(320, 304, "card-Q-spade.bmp");
			}
			else if(r==26)
			{
				iShowBMP(320, 304, "card-K-spade.bmp");
			}

			//for diamond
			else if(r==27)
			{
				iShowBMP(320, 304, "card-A-diamond.bmp");
			}
			else if(r==28)
			{
				iShowBMP(320, 304, "card-2-diamond.bmp");
			}
			else if(r==29)
			{
				iShowBMP(320, 304, "card-3-diamond.bmp");
			}
			else if(r==30)
			{
				iShowBMP(320, 304, "card-4-diamond.bmp");
			}
			else if(r==31)
			{
				iShowBMP(320, 304, "card-5-diamond.bmp");
			}
			else if(r==32)
			{
				iShowBMP(320, 304, "card-6-diamond.bmp");
			}
			else if(r==33)
			{
				iShowBMP(320, 304, "card-7-diamond.bmp");
			}
			else if(r==34)
			{
				iShowBMP(320, 304, "card-8-diamond.bmp");
			}
			else if(r==35)
			{
				iShowBMP(320, 304, "card-9-diamond.bmp");
			}
			else if(r==36)
			{
				iShowBMP(320, 304, "card-10-diamond.bmp");
			}
			else if(r==37)
			{
				iShowBMP(320, 304, "card-J-diamond.bmp");
			}
			else if(r==38)
			{
				iShowBMP(320, 304, "card-Q-diamond.bmp");
			}
			else if(r==39)
			{
				iShowBMP(320, 304, "card-K-diamond.bmp");
			}
		else if(r==40)
		{
			iShowBMP(320, 304, "card_A.bmp");
		}
		else if(r==41)
		{
			iShowBMP(320, 304, "card_2.bmp");
		}
		else if(r==42)
		{
			iShowBMP(320, 304, "card_3.bmp");
		}
		else if(r==43)
		{
			iShowBMP(320, 304, "card_4.bmp");
		}
		else if(r==44)
		{
			iShowBMP(320, 304, "card_5.bmp");
		}
		else if(r==45)
		{
			iShowBMP(320, 304, "card_6.bmp");
		}
		else if(r==46)
		{
			iShowBMP(320, 304, "card_7.bmp");
		}
		else if(r==47)
		{
			iShowBMP(320, 304, "card_8.bmp");
		}
		else if(r==48)
		{
			iShowBMP(320, 304, "card_9.bmp");
		}
		else if(r==49)
		{
			iShowBMP(320, 304, "card_10.bmp");
		}
		else if(r==50)
		{
			iShowBMP(320, 304, "card_J.bmp");
		}
		else if(r==51)
		{
			iShowBMP(320, 304, "card_Q.bmp");
		}
		else if(r==52)
		{
			iShowBMP(320, 304, "card_K.bmp");
		}

		iShowBMP(745, 70, "pause3.bmp");//pause button

		//for score
		iSetColor(122,129,234);
		iText(710, 535, "COMPUTER ", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(735, 510, "SCORE ", GLUT_BITMAP_TIMES_ROMAN_24);
		_itoa_s(count1,scoreText1,10);
		iText(770, 485, scoreText1,GLUT_BITMAP_TIMES_ROMAN_24);

		iText(740, 380, "YOUR ", GLUT_BITMAP_TIMES_ROMAN_24);
		iText(735, 360, "SCORE ", GLUT_BITMAP_TIMES_ROMAN_24);
		_itoa_s(count2,scoreText2,10);
		iText(770,335, scoreText2,GLUT_BITMAP_TIMES_ROMAN_24);

		iText(740,242 , "DRAW ", GLUT_BITMAP_TIMES_ROMAN_24);
		_itoa_s(count3,scoreText3,10);
		iText(770,220, scoreText3,GLUT_BITMAP_TIMES_ROMAN_24);

		//for win part
		if(count1>=10)
		{
			iClear();
			iShowBMP(0,0,"computer_win.bmp");
			iShowBMP(195,310,"play_again_button.bmp");
			iShowBMP(524,310,"exit_button.bmp");
		}
		else if(count2>=10)
		{
			iClear();
			iShowBMP(0,0,"you_win.bmp");
			iShowBMP(195,310,"play_again_button.bmp");
			iShowBMP(524,310,"exit_button.bmp");
		}
		else if(count3>=10)
		{
			iClear();
			iShowBMP(280,450,"draw.bmp");
			iShowBMP(195,310,"play_again_button.bmp");
			iShowBMP(524,310,"exit_button.bmp");
		}

		//pause button work
		if(pause==1)
		{
			iClear();
			iShowBMP(0,0,"background_resume4.bmp");
			iShowBMP(298,434,"resume_game.bmp");
			iShowBMP(298,300,"new_game.bmp");
			iShowBMP(298,166,"exit_resume.bmp");
		}

	}

}

/* 
	function iMouseMove() is called when the user presses and drags the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouseMove(int mx, int my)
{
	//place your codes here
}

/* 
	function iMouse() is called when the user presses/releases the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void score()
{
	if((q>=1 && q<=13)&&(r>=1 && r<=13))
	{
		if(q<r)
			count1++;
		else if(q>r)
			count2++;
		else if (q==r)
			count3++;
	}
	else if((q>=14 && q<=26)&&(r>=14 && r<=26))
	{
		if(q<r)
			count1++;
		else if(q>r)
			count2++;
		else if (q==r)
			count3++;
	}
	else if((q>=27 && q<=39)&&(r>=27 && r<=39))
	{
		if(q<r)
			count1++;
		else if(q>r)
			count2++;
		else if (q==r)
			count3++;
	}
	else if((q>=40 && q<=52)&&(r>=40 && r<=52))
	{
		if(q<r)
			count1++;
		else if(q>r)
			count2++;
		else if (q==r)
			count3++;
	}
	else if((q>=1 && q<=26)&&(r>=27 && r<=52))
	{
		count1+=2;
	}
	else if((q>=27 && q<=52)&&(r>=1 && r<=26))
	{
		count2+=2;
	}
}

void iMouse(int button, int state, int mx, int my)
{
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		//for play button
		if(mx>=298 && mx<=554 && my>=300 && my<=364)
		{
			a=1;
			data_structure();
		}
		printf("%d  %d\n",mx,my);

		if((mx>=200 && mx<= 240) && (my>=20 && my<=148 ))
		{
			q=start->data;
			r=rand()%52+1;
			score();
			delete_card(q);
			display();
			sorted_insert();
			display();
		}

		else if((mx>=320 && mx<=360)&& (my>=20 && my<=148 ))
		{
			q=start->next->data;
			r=rand()%52+1;
			score();
			delete_card(q);
			display();
			sorted_insert();
			display();
		}
		else if((mx>=440 && mx<=480)&& (my>=20 && my<=148 ))
		{
			q=start->next->next->data;
			r=rand()%52+1;
			score();
			delete_card(q);
			display();
			sorted_insert();
			display();
		}
		else if((mx>=560 && mx<=600)&& (my>=20 && my<=148 ))
		{
			q=start->next->next->next->data;
			r=rand()%52+1;
			score();
			delete_card(q);
			display();
			sorted_insert();
			display();
		}

		if(mx>=745 && mx<=809 && my>=70 && my<=134 )
		{
			pause=1;
		}

		//pause click
		if(mx>=298 && mx<=554 && my>=434 && my<=498)//for resume game
		{
			pause=0;
			resume=1;
		}
		else if((mx>=298 && mx<=554) && (my>=300 && my<=364))//for new game button
		{
			resume=2;
			pause=0;
			count1=0;
			count2=0;
			count3=0;
			s=0;
			r=0;
			q=0;
			delete_new();
			data_structure();
		}
		else if((mx>=298 && mx<=554)&&(my>=166 && my<=230))//for exit
		{
			exit(0);
		}
		//for play again button
		if((mx>=195 && mx<=323) && (my>=310 && my<=374))//for play again 
		{
			p=1;
			count1=0;
			count2=0;
			count3=0;
			s=0;
			r=0;
			q=0;
			delete_new();
			data_structure();
		}
		//for exit button
		else if((mx>=524 && mx<=652)&&(my>=310 && my<=374))
		{
			exit(0);
		}

	}
	 
	if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		
	}
}

/*
	function iKeyboard() is called whenever the user hits a key in keyboard.
	key- holds the ASCII value of the key pressed. 
*/
void iKeyboard(unsigned char key)
{
	if(key == 'q')
	{
		//do something with 'q'
	}
	//place your codes for other keys here
}

/*
	function iSpecialKeyboard() is called whenver user hits special keys like-
	function keys, home, end, pg up, pg down, arraows etc. you have to use 
	appropriate constants to detect them. A list is:
	GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6, 
	GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12, 
	GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP, 
	GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT 
*/
void iSpecialKeyboard(unsigned char key)
{

	if(key == GLUT_KEY_END)
	{
		exit(0);	
	}
	//place your codes for other keys here
}

int main()
{
	iInitialize(852, 670, "Spider");
	return 0;
}	