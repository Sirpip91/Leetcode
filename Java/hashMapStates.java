/* 
*<Bradley Allen>

 *Description:
 * 
 * This is a program that will ask the user for a state and return the capital.
 *	The state and capitals are stored in a map which then is retrieved from the method.
 *If there is no state 'no such state' will be returned.
 *This program is meant to solve the problem of finding the capital of the states.
 * 
 * 
 */

//imports
import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;


//Main class
public class MapOfStates {

	
	
	//main method
	  public static void main(String[] args) {
	
		  //create a scanner.
		Scanner input = new Scanner(System.in);
		  
		//create a Map which then is stored with the information of states and capitals.
		Map<String, String> stateCapitalMap = getInfo();
		//loop for the samples.
		for(int i = 0; i<3;i++)
		{
			//prompt the user to enter a state.
		System.out.print("Enter a state:");
		String state = input.nextLine();
		
		
		if (stateCapitalMap.get(state) != null) {
			//retrieve the state from the Map data structure.
			System.out.println(stateCapitalMap.get(state));
		}else
		{
			//If there is not state in the data structure return no such state.
			System.out.println("No such state");
		}
		}
	  }
	
	//static method that creates the map and loads all of the data.
	public static Map<String, String> getInfo(){
		//new map.
		Map<String, String> map = new HashMap<>();
		
		//string that contains all of the data.
		String[][] stateCapital = {
			      {"Alabama", "Montgomery"},
			      {"Alaska", "Juneau"},
			      {"Arizona", "Phoenix"},
			      {"Arkansas", "Little Rock"},
			      {"California", "Sacramento"},
			      {"Colorado", "Denver"},
			      {"Connecticut", "Hartford"},
			      {"Delaware", "Dover"},
			      {"Florida", "Tallahassee"},
			      {"Georgia", "Atlanta"},
			      {"Hawaii", "Honolulu"},
			      {"Idaho", "Boise"},
			      {"Illinois", "Springfield"},
			      {"Indiana", "Indianapolis"},
			      {"Iowa", "Des Moines"},
			      {"Kansas", "Topeka"},
			      {"Kentucky", "Frankfort"},
			      {"Louisiana", "Baton Rouge"},
			      {"Maine", "Augusta"},
			      {"Maryland", "Annapolis"},
			      {"Massachusettes", "Boston"},
			      {"Michigan", "Lansing"},
			      {"Minnesota", "Saint Paul"},
			      {"Mississippi", "Jackson"},
			      {"Missouri", "Jefferson City"},
			      {"Montana", "Helena"},
			      {"Nebraska", "Lincoln"},
			      {"Nevada", "Carson City"},
			      {"New Hampshire", "Concord"},
			      {"New Jersey", "Trenton"},
			      {"New York", "Albany"},
			      {"New Mexico", "Santa Fe"},
			      {"North Carolina", "Raleigh"},
			      {"North Dakota", "Bismark"},
			      {"Ohio", "Columbus"},
			      {"Oklahoma", "Oklahoma City"},
			      {"Oregon", "Salem"},
			      {"Pennslyvania", "Harrisburg"},
			      {"Rhode Island", "Providence"},
			      {"South Carolina", "Columbia"},
			      {"South Dakota", "Pierre"},
			      {"Tennessee", "Nashville"},
			      {"Texas", "Austin"},
			      {"Utah", "Salt Lake City"},
			      {"Vermont", "Montpelier"},
			      {"Virginia", "Richmond"},
			      {"Washington", "Olympia"},
			      {"West Virginia", "Charleston"},
			      {"Wisconsin", "Madison"},
			      {"Wyoming", "Cheyenne"}
			    };
		
		//go through the string load the map with state, and capital correspondence.
		for(int i = 0; i<stateCapital.length; i++) {
			map.put(stateCapital[i][0], stateCapital[i][1]);
		}
		//return the filled map of information.
		return map;
	}
	
	
}
