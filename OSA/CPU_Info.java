import java.io.BufferedReader;
import java.io.InputStream;
import java.io.InputStreamReader;

public class CPU_Info {
	InputStream in;
	BufferedReader br;
	Process p;
	String str;
	ass()
	{
		in=null;
		br=null;
		p=null;
		str=null;
	}
	public void display()
	{
		try
		{
		p=Runtime.getRuntime().exec("cat /proc/cpuinfo");
		in=p.getInputStream();
		br=new BufferedReader(new InputStreamReader(in)) ;
		str=br.readLine();
		while(str!=null)
		{
			System.out.println(str);
			str=br.readLine();
		}
		}catch(Exception e)
		{
			System.out.println(e.getMessage());
		}
		
		
	}
	public static void main(String[] args) {
		ass a=new ass();
	a.display();

	}
}