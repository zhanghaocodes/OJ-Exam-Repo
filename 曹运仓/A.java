import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.io.PrintWriter;
import java.io.StreamTokenizer;

public class A{
	
	public static void main(String[] args) throws IOException{
		StreamTokenizer in = new StreamTokenizer(new BufferedReader(new InputStreamReader(System.in)));
		PrintWriter out = new PrintWriter(new OutputStreamWriter(System.out));
		
		in.nextToken();
		int t = (int)in.nval;
		while(t-- != 0) {
			in.nextToken();
			int L = (int)in.nval;
			in.nextToken();
			int v = (int)in.nval;
			in.nextToken();
			int l = (int)in.nval;
			in.nextToken();
			int r = (int)in.nval;
			int ans = L/v;
			int cnt = r/v - l/v;
			if((r%v == 0 || l%v == 0) && l >= v)
				cnt++;
			else if(r%v == 0 && l % v == 0)
				cnt++;
			ans -= cnt;
			out.println(ans);
			out.flush();
		}
	}
}

//1000000000 2 1 2

