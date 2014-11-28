package chapter1;

public class Solution_1_2 {
	public static String reverseStr(String str){
		String s = new StringBuffer(str).reverse().toString();
		return s;
	}
	public static void main(String args[]){
		String words = "Tartiflette pizza ";
		System.out.println(reverseStr(words));
	}
}
