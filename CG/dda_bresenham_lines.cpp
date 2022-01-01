#include<graphics.h>
#include<iostream.h>
#include<math.h>
#include<conio.h>
class pl3
{
	protected:
		int x,y,col1;
		float xc,yc;
		void setpixel(int,int,int);
		void drawpixel();
};

class myline:public pl3
{
	private:
		int x1,y1,x2,y2,col1;
	public:

		void setline(int,int,int,int,int);
		void dda();
		void bresenham();
		int sign(int);
};

void myline::setline(int p,int q,int r,int s,int t)
{
	x1=p;
	y1=q;
	x2=r;
	y2=s;
	col1=t;

}
void myline::dda()
{
	float x,y,length,dx,dy;
	int i;
	if(abs(x2-x1)>=abs(y2-y1))
	{
		length=abs(x2-x1);
	}
	else
	{
		length=abs(y2-y1);
	}
	dx=(x2-x1)/length;
	dy=(y2-y1)/length;
	x=x1+0.5;
	y=y1+0.5;
	//cout<<x<<y;
	i=1;
	while(i<=length)
	{
		setpixel(x,y,col1);
		drawpixel();
		x=x+dx;
		y=y+dy;
		i=i+1;
	}
}

void myline::bresenham()
{
    int s1,s2,exchange,x,y,i;
    float dx,dy,temp,g;
    dx=abs(x2-x1);
    dy=abs(y2-y1);
    x=x1;
    y=y1;
    s1=sign(x2-x1);
    s2=sign(y2-y1);
    if(dy>dx)
    {
	temp=dx;
	dx=dy;
	dy=temp;
	exchange=1;
    }
    else
	exchange=0;
    g=2*dy-dx;
    for(i=1;i<=dx;i++)
    {
	setpixel(x,y,col1);
	drawpixel();
	while(g>=0)
	{
		if(exchange==1)
			x=x+s1;
		else
			y=y+s2;
		g=g-2*dx;
		setpixel(x,y,col1);
		drawpixel();

	}
	if(exchange==1)
		y=y+s2;
	else
		x=x+s1;
	g=g+2*dy;
	i++;

    }
}
int myline::sign(int s)
{
	if(s<0)
		return -1;
	else if(s==0)
		return 0;
	else
		return 1;
}
void pl3::setpixel(int u,int v,int z)
{
	x=u;
	y=v;
	col1=z;
}
void pl3::drawpixel()
{
	xc=319.5;
	yc=239.5;
	putpixel(xc+x,yc-y,col1);
}

int main()
{

	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\turboc3\\bgi");
	setbkcolor(15);
	int x1,y1,x2,y2,col1,a,b,ch;
	myline l;
	cout<<"enter the co-ordinates of 1st line: \n";
	cin>>x1>>y1;
	cout<<"enter the co-ordinates of 2nd line: \n";
	cin>>x2>>y2;
	cout<<"Enter the color: \n";
	cin>>col1;
	cout<<"MENU\n1.DDA\n2.Bresenhem\nEnter ur choice\n";
	cin>>ch;
	switch(ch)
	{
		case 1:
		       l.setline(x1,y1,x2,y2,col1);
		       l.dda();
		       break;
		case 2:
		       l.setline(x1,y1,x2,y2,col1);
		       l.bresenham();
		       break;
	}
	getch();
	return 0;
}

