package chapter1;

public class Solution_1_1 {
	public static boolean isUnique(String str) {
		if(str.length() > 256) {
			return false;
		}
		int checker = 0;
		for(int i = 0; i< str.length(); i++){
			int val = str.charAt(i);
			if((checker & (1 << val)) > 0){
				return false;
			}
			checker |= (1 << val);
		}
		return true;
	}

	public static void main(String[] args) {
		String[] words = {"apple", "peach","0123","01230"};
		for(String word : words){
			System.out.println(word + ":" + isUnique(word));
		}
	}
}
