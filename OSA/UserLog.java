
import java.io.*;
public class UserLog  implements Runnable {
	String str;
	String users;
	int  count;
	public UserLog()
	{
		count=0;
		str="";
		users="";
	}
	public void login()
	{
		int i=0;
	try{
			Runtime rt = Runtime.getRuntime();
			Process lsProc = rt.exec("who -q");
			InputStream in = lsProc.getInputStream();
			BufferedReader br =	new BufferedReader(new InputStreamReader(in));
			str=br.readLine();
			users=users+str;
			while(str!=null)
				{
					count++;
					str=br.readLine();
					users=users+str;
				}
				System.out.println(users);			 			
			
		}catch(Exception e)

			{
				e.printStackTrace();
			}

	}
	public void getNo()
	{
		System.out.println("total users are->"+count);
	}
	public void createForeProcess()
	{	int j=0;
		DataInputStream din;
		System.out.println("please select a user where u want to create a process");
		try
		{
			System.out.println(users);
			din=new DataInputStream(System.in);
			String str2=din.readLine();
			Thread thread;
			for(int i=0;i<users.length();i++)
			{
				
				if(users.charAt(i)==str2.charAt(j))
					{
						j++;
					}
				if(j==str2.length())
				{
					thread=new Thread(this);
					thread.run();
						
					break;
				}
				
			}
			if(j!=str2.length())
			{
				System.out.println("sorry");
			}
		}catch (Exception e)
		{
			System.out.println(e.getMessage());
		}

	}
	public void createbackProcess()
	{
		Runtime rt = Runtime.getRuntime();
		try
		{
			Process lsProc1 = rt.exec("java -cvfe UserLog.tar UserLog.class");
			Process lsProc = rt.exec("java -jar UserLog &");
			Process ls=rt.exec("ps -ecl ");
		}
		catch(Exception e)
		{
			System.out.println("unable to crate bakgound process");
		}

					

	}

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		DataInputStream din = null;
		int ch=0;
		UserLog ul=new UserLog();
	//System.out.println("Ente Ur choice\n");
	System.out.println(" 1.users\n2. no of useres\n3. create foregroudn process\n4. create background process");
	try
	{
	din=new DataInputStream(System.in);
	ch=Integer.parseInt(din.readLine());
	}catch(Exception e)
	{
		System.out.println(e.getMessage());
	}
	while(true)
	{
		switch(ch)
		{
				case 1:
						ul.login();
						break;
				case 2:
						ul.getNo();
						break;
				case 3:
						ul.createForeProcess();
						break;
				case 4:
						System.out.println("Creating background process -----------");
						ul.createbackProcess();
						break;
				default:
					System.out.println("sorry no choice\n");
		}
		try
		{
			System.out.println("want contrinue\n");
			String chr=din.readLine();
			if((chr.equals("y"))|| (chr.equals("Y")))
			{
				System.out.println("please enter ur choice\n");
				din=new DataInputStream(System.in);
				ch=Integer.parseInt(din.readLine());
			}
			else
			{
				break;
			}
		}catch(Exception e)
		{
			System.out.println("sdfkj");
		}
	}
}
	@Override
	public void run() {
			System.out.println("i am foreground process");
			Runtime rt = Runtime.getRuntime();
			try {
				Process lsProc = rt.exec("ps  -ax");
				
				InputStream in = lsProc.getInputStream();
				BufferedReader br =	new BufferedReader(new InputStreamReader(in));
				str=br.readLine();
				System.out.println(str);			 			

				while(str!=null)
					{
						count++;
						str=br.readLine();
						System.out.println(str);			 			

					}
				
				
			} catch (IOException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
		

	}
}