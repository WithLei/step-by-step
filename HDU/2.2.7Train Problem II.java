package cn.renly.ACM;
import java.math.*;
import java.text.*;
import java.util.Scanner;
public class cin {
	public static void main(String[] args) {
		int a,b;
		Scanner cin = new Scanner(System.in);
		while(cin.hasNextInt()){
			a=cin.nextInt();
			b=cin.nextInt();
			System.out.println(a+b);
		}
	}

}
