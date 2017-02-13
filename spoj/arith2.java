import java.io.*;
import java.util.*;
import java.math.BigInteger;

public class arith2{
	public static void main(String args[]) throws IOException{
		Scanner sc = new Scanner(System.in);
		int tt = sc.nextInt();	
		while(tt>0){
			long ans= sc.nextLong();	
			while(sc.hasNext()){
				String t = sc.next();
				if(t.equals("=")) {
					System.out.println(ans);
					break;
				}
				Long c = sc.nextLong();
				if(t.equals("+")) ans+=c;
				if(t.equals("*")) ans*=c;
				if(t.equals("-")) ans-=c;
				if(t.equals("/")) ans/=c;
			}
			tt--;
		}
	}
}