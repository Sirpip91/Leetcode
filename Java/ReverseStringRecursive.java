/*
 *<Bradley Allen>
 *
 *Description:
 * 	This is a program that uses a recursive method to reverse a string.
 * 	The user is prompted to enter a string;
 * 	The recursive method is then called to reverse the string
 * 	The string is then shown to the user.
 */

//imports
import java.util.Scanner;


//Main class
public class main {
		
	//recursive method that will recursively reverse a string. Takes in a string value;
		public static void reverseDisplay(String value) {
			//base case:
			//if the string is empty or less than equal to 1 output the 'reversed' string since it cannot be reversed.
			if((null == value) || (value.length() <= 1))
			{
				System.out.println(value);
			}
			else
			{
				//output the last letter of the string
				System.out.print(value.charAt(value.length()-1));
				
				//reduce the last letter and call the method again.
				reverseDisplay(value.substring(0,value.length()-1));
			
			}
		}
	
		//main method
	  public static void main(String[] args) {
		 //create a scanner to get user input
		 Scanner input = new Scanner(System.in);
		 
		 //prompt the user to enter a string
		 System.out.print("Enter a string: ");
		 
		 //store the user string into value
		 String value = input.next();
		 
		 //output the string before reversal
		 System.out.print("The reversal of " + value + " is " );
		 
		 //call the reverseDisplay recursive method.
		 reverseDisplay(value);
		 
	  }
}
