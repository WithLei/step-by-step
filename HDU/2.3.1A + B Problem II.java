package cn.renly.ACMtest;
import java.math.BigInteger;
import java.lang.String;
import java.util.Scanner;

public class Main {
 public static void main(String[] args) {
  Scanner cin=new Scanner(System.in);
  int cases = cin.nextInt();
  for(int i=1;i<=cases;i++){
	  BigInteger a = cin.nextBigInteger();
	  BigInteger b = cin.nextBigInteger();
	  if(i!=1)System.out.println();
	  System.out.println("Case "+i+":");
	  System.out.print(a+" + "+b+" = ");
	  System.out.println(a.add(b));
  }
  
 }
}