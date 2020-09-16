import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.io.PrintWriter;
import java.io.StreamTokenizer;
import java.util.Arrays;

public class C{
	
	public static void main(String[] args) throws IOException{
		StreamTokenizer in = new StreamTokenizer(new BufferedReader(new InputStreamReader(System.in)));
		PrintWriter out = new PrintWriter(new OutputStreamWriter(System.out));
		
		in.nextToken();
		int n = (int)in.nval;
		in.nextToken();
		int m = (int)in.nval;

		int[] a = new int[n];
		int[] b = new int[n];
		int[] sub = new int[n];
		long sum = 0, sumb = 0;
		for(int i = 0 ; i < n; i++) {
			in.nextToken();
			a[i] = (int)in.nval;
			in.nextToken();
			b[i] = (int)in.nval;
			sub[i] = a[i]-b[i];
			sum += a[i];
			sumb += b[i];
		}
		int ans = 0;
		if(sumb > m) {
			out.println(-1);
			out.flush();
			return;
		}
		Arrays.sort(sub);
		for(int i = n-1; i >= 0; i--) {
			sum -= sub[i];
			ans++;
			if(sum <= m)
				break;
		}
		out.println(ans);
		out.flush();
	}
}



