import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.io.PrintWriter;
import java.io.StreamTokenizer;

public class D{
	
	public static void main(String[] args) throws IOException{
		StreamTokenizer in = new StreamTokenizer(new BufferedReader(new InputStreamReader(System.in)));
		PrintWriter out = new PrintWriter(new OutputStreamWriter(System.out));
		
		out.flush();
	}
}



