import java.util.*;
public class oodle{
	public static void main(String[] args) {
		for(int k=0;k<args.length;k++){
		String oodle=args[k];
		for(int i=0;i<oodle.length();i++){
		if((oodle.charAt(i) == 'a') || (oodle.charAt(i) == 'e') || (oodle.charAt(i) == 'i') ||
           (oodle.charAt(i) == 'o') || (oodle.charAt(i) == 'u') || (oodle.charAt(i) == 'y') ||
           (oodle.charAt(i) == 'A') || (oodle.charAt(i) == 'E') || (oodle.charAt(i) == 'I') ||
           (oodle.charAt(i) == 'O') || (oodle.charAt(i) == 'U') || (oodle.charAt(i) == 'Y')) {
		          System.out.print("oodle");
		        } else {
		          System.out.print(oodle.charAt(i));
		        }
		}
			System.out.print(" ");
		}
		System.out.println();
	}
}