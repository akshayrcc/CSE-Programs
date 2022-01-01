import java.io.BufferedReader;
import java.io.DataInputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;


public class HardwareDetail {

	public static void main(String[] args) {
		InputStream din=null;
		BufferedReader br=null;
		String str=null;
	System.out.println("\nThe hardware detail\n");
	try
	{
	Process p=Runtime.getRuntime().exec("lshw -short");
	din=p.getInputStream();
	br=new BufferedReader(new InputStreamReader(din));
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

}
