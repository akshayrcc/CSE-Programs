#include<graphics.h>
#include<stdio.h>
#include<conio.h>
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\turboc3\\bgi");
	rectangle(2,2,630,479);
	rectangle(80,20,180,60);
	outtextxy(120,35,"PC");
	outtextxy(85,50,"write");
	rectangle(180,80,280,120);
	outtextxy(215,95,"MBR");
	outtextxy(185,110,"write");
	outtextxy(80,90,"External");
	outtextxy(80,100,"Memory");
	outtextxy(80,110,"Data Bus");
	rectangle(80,140,180,180);
	outtextxy(115,155,"OUT");
	outtextxy(85,170,"write");
	rectangle(80,200,180,240);
	outtextxy(120,215,"B");
	outtextxy(85,230,"write");
	rectangle(80,260,180,300);
	outtextxy(120,275,"A");
	outtextxy(85,290,"write");
	line(80,360,180,360);
	line(80,360,120,420);
	line(180,360,200,380);
	line(200,380,290,380);
	line(290,380,310,360);
	line(310,360,410,360);
	line(410,360,370,420);
	line(370,420,120,420);
	outtextxy(240,395,"ALU");
	outtextxy(100,350,"A-BUS");
	outtextxy(360,350,"B-BUS");
	outtextxy(250,430,"C-BUS");
	rectangle(220,140,300,180);
	setcolor(4);
	rectangle(225,145,255,175);
	rectangle(265,145,295,175);
	setcolor(7);
	line(260,140,260,180);
	outtextxy(240,185,"External");
	outtextxy(250,195,"Display");
	int a[]={300,270,360,270,360,320,330,330,300,320,300,270};
	drawpoly(6,a);
	outtextxy(320,280,"MUX");
	line(242,420,242,450);    //bus to pc
	line(248,420,248,456);
	line(242,450,45,450);
	line(248,456,39,456);
	line(45,450,45,48);
	line(39,456,39,42);
	line(45,48,80,48);
	line(39,42,80,42);         //end
	line(45,167,80,167);       //bus to out
	line(45,173,80,173);
	line(45,217,80,217);       //bus to B
	line(45,223,80,223);
	line(45,277,80,277);       //bus to A
	line(45,283,80,283);
	line(328,330,328,360);     //mux to ALU
	line(332,330,332,360);
	line(180,277,220,277);     //A to ALU
	line(180,283,214,283);
	line(214,283,214,335);
	line(220,277,220,341);
	line(214,335,137,335);
	line(220,341,143,341);
	line(137,335,137,360);
	line(143,341,143,360);     //end
	line(180,167,220,167);     //out to external display
	line(180,173,180,173);

	getch();	
	return 0;
	
}
