package cn.renly.ACMtest;
import java.math.BigInteger;
import java.lang.String;
import java.util.Scanner;

public class Main {
 public static void main(String[] args) {
  Scanner cin=new Scanner(System.in);
  BigInteger range[] = new BigInteger[103];
  for(int i=0;i<103;i++)
	range[i]=BigInteger.ONE;
  
  for(int i=1;i<103;i++){
	  range[i]=range[i-1].multiply(BigInteger.valueOf(4*i-2)).divide(BigInteger.valueOf(i+1));
  }
  for(int i=1;i<103;i++){
	  range[i]=range[i].multiply(BigInteger.valueOf(2));
  }
  int num,cases=0;
  while(cin.hasNext()){
	  num=cin.nextInt();
	  if(num==-1)break;
	  System.out.print(++cases);
	  System.out.print(" ");
	  System.out.print(num);
	  System.out.print(" ");
	  System.out.println(range[num]);
  }
  
 }
}