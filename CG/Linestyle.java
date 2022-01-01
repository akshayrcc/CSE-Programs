import java.awt.Graphics;
import java.awt.Point;
import java.awt.event.WindowEvent;
import java.awt.event.WindowListener;
import java.io.DataInputStream;
import javax.swing.JFrame;
public class Linestyle extends JFrame {
	int x1,x2,y1,y2,x3,y3;
	int height,width;
	DataInputStream din;
	Point p;	
	int ch1;
	@Override
	   public void paint(Graphics g) {
	      super.paint(g);
	      doChoice(g);
	}
	public void getCoord()
	{
		din=new DataInputStream(System.in);
		p=new Point();
		try
		{
			System.out.println("Enter The Value Of x1 ");
			x1=p.x=Integer.parseInt(din.readLine());
			System.out.println("Enter The Value Of y1 ");
			y1=p.y=Integer.parseInt(din.readLine());
			System.out.println("Enter The Value Of x2 ");
			x2=p.x=Integer.parseInt(din.readLine());
			System.out.println("Enter The Value Of y2 ");
			y2=p.y=Integer.parseInt(din.readLine());
		}catch(Exception e)
		{
			System.out.println(e.getMessage());
		}
	
	}
	public void doChoice(Graphics g)
	{
		char chk='y';
		int ch=0;
		System.out.println("===================================================");
		System.out.println("JAVA PROGRAM FOR THICK,THIN,DOTTED LINE");
		System.out.println("===================================================");
		System.out.println("MENU:\n1.Thin Line\n2.Dotted Line\n3.Thick Line ");
		System.out.println("Enter Your Choice ");
		din=new DataInputStream(System.in);
		try
		{
			ch=Integer.parseInt(din.readLine());
			do
			{
				switch (ch) 
				{
					case 1:
						dodata(g);
						break;
					case 2:
						DoDotted(g);
						break;
					case 3:
						DoThick(g);
						break;
					default:
						System.out.println("no choice");				
				}
				System.out.println("Do You To Continue(y/n)");
				chk=(char)Integer.parseInt(din.readLine());
			}while(ch!='y'||ch!='Y');
		}catch(Exception e)
		{
			System.out.println(e.getMessage());
		}
		din=null;
	}
	public void DoThick(Graphics g)
	{
		getCoord();
		double dx,dy,steps,x,y,k;
		double xc,yc;
		dx=x2-x1;
		dy=y2-y1;
		int thick=2;
		int wy=0;
		x=x1;
		y=y1;
		if(Math.abs(dx)>Math.abs(dy))
			steps=Math.abs(dx);
	else
		steps=Math.abs(dy);
	xc=(dx/steps);
	yc=(dy/steps);
	x=x1;
	y=y1;
	for(int j=1;j<=5;j++)
	{
		g.drawLine((int)x1+j,(int)y,(int)x,(int)y);
	}

	for(int i=1;i<=steps;i++)
	{
		x=x+xc;
		y=y+yc;
		g.drawLine((int)x,(int)y,(int)x,(int)y);	
	for(int j=1;j<=5;j++)
	{
		g.drawLine((int)x+j,(int)y,(int)x,(int)y);
	
	}
	}
	}
	public void DoDotted(Graphics g)
	{
		getCoord();
		double dx,dy,steps,x,y,k;
		double xc,yc;
		dx=x2-x1;
		dy=y2-y1;
		int thick=1;
		int wy=0;
		x=x1;
		y=y1;
		if(Math.abs(dx)>Math.abs(dy))
			steps=Math.abs(dx);
	else
		steps=Math.abs(dy);
	xc=(dx/steps);
	yc=(dy/steps);
	x=x1;
	y=y1;
	int c=0;
	for(k=1;k<=steps;k++)
	{
				x=x+xc;
				y=y+yc;			
				if(c%2==0)
				{
					c++;
				}
				else
				{
					g.drawLine((int)x,(int)y,(int)x,(int)y);
					c++;
				}
	}
	}
	public void dodata(Graphics g)
	{
		getCoord();
		double dx,dy,steps,x,y,k;
		double xc,yc;
		dx=x2-x1;
		dy=y2-y1;
		if(Math.abs(dx)>Math.abs(dy))
				steps=Math.abs(dx);
		else
			steps=Math.abs(dy);
		xc=(dx/steps);
		yc=(dy/steps);
		x=x1;
		y=y1;
		
		for(k=1;k<=steps;k++)
		{
					x=x+xc;
					y=y+yc;
					g.drawLine((int)x,(int)y,(int)x,(int)y);
		
		}
		
	}
	public static void main(String[] args) {
		
		Linestyle a=new Linestyle();		
		a.setSize(600,460);
		a.setVisible(true);
		a.addWindowListener(new WindowListener() {
			
			@Override
			public void windowOpened(WindowEvent arg0) {
				// TODO Auto-generated method stub
				
			}
			
			@Override
			public void windowIconified(WindowEvent arg0) {
				// TODO Auto-generated method stub
				
			}
			
			@Override
			public void windowDeiconified(WindowEvent arg0) {
				// TODO Auto-generated method stub
				
			}
			
			@Override
			public void windowDeactivated(WindowEvent arg0) {
				// TODO Auto-generated method stub
				
			}
			
			@Override
			public void windowClosing(WindowEvent arg0) {
				// TODO Auto-generated method stub
				
			}
			
			@Override
			public void windowClosed(WindowEvent arg0) {
				// TODO Auto-generated method stub
				
			}
			
			@Override
			public void windowActivated(WindowEvent arg0) {
				// TODO Auto-generated method stub
				
			}
		});
		}

}

/*
===================================================
JAVA PROGRAM FOR THICK,THIN,DOTTED LINE
===================================================
MENU:
1.Thin Line
2.Dotted Line
3.Thick Line 
Enter Your Choice 
1
Enter The Value Of x1 
50
Enter The Value Of y1 
50
Enter The Value Of x2 
200
Enter The Value Of y2 
200
Do You To Continue(y/n)
y
===================================================
JAVA PROGRAM FOR THICK,THIN,DOTTED LINE
===================================================
MENU:
1.Thin Line
2.Dotted Line
3.Thick Line 
Enter Your Choice 
2
Enter The Value Of x1 
50
Enter The Value Of y1 
50
Enter The Value Of x2 
200
Enter The Value Of y2 
200
Do You To Continue(y/n)
y
For input string: "y"
===================================================
JAVA PROGRAM FOR THICK,THIN,DOTTED LINE
===================================================
MENU:
1.Thin Line
2.Dotted Line
3.Thick Line 
Enter Your Choice 
3
Enter The Value Of x1 
50
Enter The Value Of y1 
50
Enter The Value Of x2 
200
Enter The Value Of y2 
200
Do You To Continue(y/n)
n
For input string: "n"
*/
