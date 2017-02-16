import java.io.*;
import java.util.*;
import java.math.BigInteger;

public class bishops{
	public static void main(String args[]) throws IOException{
		Scanner sc = new Scanner(System.in);
		while(sc.hasNextBigInteger()){
			BigInteger b = sc.nextBigInteger();
			BigInteger t = new BigInteger("1");
			if(b.equals(t)) {
				System.out.println("1");
				continue;
			}
			b=b.multiply(new BigInteger("2"));
			b=b.subtract(new BigInteger("2"));
			String ans = b.toString();
			System.out.println(ans);
		}
	}
}