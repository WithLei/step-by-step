
import java.util.Scanner;
import java.math.*;
import java.text.*;

public class Main {
	public static void main(String[] args) {
		Scanner cin = new Scanner(System.in);
		BigInteger n = cin.nextBigInteger();
		BigInteger k = cin.nextBigInteger();
		if((n.divide(k)).mod(BigInteger.valueOf(2))==BigInteger.valueOf(0)){
			System.out.println("NO");
		}
		else System.out.println("YES");

	}

}
