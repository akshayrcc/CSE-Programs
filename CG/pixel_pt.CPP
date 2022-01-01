#include<graphics.h>
#include<iostream.h>
#include<conio.h>

class pixel_pt
{
	int x,y, col;

	public:
		void pixel();
		pixel_pt(int a,int b,int c)
		{
			x=a;
			y=b;
			col=c;
		};
};

void pixel_pt::pixel()
{
	cout<<"enter the x co-ordinate: ";
	cin>>x;
	cout<<"enter the y co-ordinate: ";
	cin>>y;
	cout<<"enter the color: ";
	cin>>col;

	putpixel(x,y,col);
}

void main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\turboc3\\bgi");
	int a,b,c;
	pixel_pt p1(a,b,c);
	p1.pixel();
	getch();
}