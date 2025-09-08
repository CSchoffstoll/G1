#include <iostream>
#include <search.h>
#include <vector>
#include <string>
#include <cctype>

using namespace std;

int main() {
	char choice = '';  //user entered decision -> while loop
	//vector containing all books in database for assignment
	vector<string> book_list = {"Star Wars", "The Empire Strikes Back (Star Wars)"
										 "Splinter of the Mind's Eye (Star Wars", "Return of the Jedi (Star Wars)",
										 "Heir to the Empire (Star Wars: The Thrawn Trilogy, Vol. 1)",
										 "Dark Force Rising (Star Wars: The Thrawn Trilogy, Vol. 2)",
										 "The Last Command (Star Wars: The Thrawn Trilogy)",
										 "Specter of the Past (Star Wars: The Hand of Thrawn #1)",
										 "Vision of the Future (Star Wars: The Hand of Thrawn, Book 2)",
										 "Battlestar Galactica",
										 "New Battlestar Galactica Volume 1 (Battlestar Galactica (Dynamite)) (v. 1)",
										 "New Battlestar Galactica Volume II Hardcover (Battlestar Galactica (Dynamite))",
										 "The Hobbit", "The Lord of the Rings: 50th Anniversary, One Vol. Edition",
										 "The Two Towers", "The Return of the King", "The Fellowship of the Ring",
										 "C++ Programming: From Problem Analysis to Program Design 7th Edition",
										 "Digital Computer Electronics",
										 "Assembly Language for x86 Processors (7th Edition)"};

	//setup for user to read and make decision
	cout << "LINEAR SEARCH\n\n" 
		  << "<S>earch\n"
		  << "<Q>uit\n\n"
		  << "Choice: ";
	cin >> choice; //accept users choice

	choice = tolower(choice); //prevents capitalization errors

	do {

		string search = ""; //user entered keyword to search for results

		cout << "Search: "; //prompts user to input their search

		cin.ignore(); //clears buffer for user to enter multiple keywords
		getline(cin, search); //accepts users search

		int index = -1; //stores index of matched keywords, -1 as default for if statement logic

		index = searchLinear(book_list, search); //function call to search matching keywords

		if (index != -1) //logic where title of first matched book gets printed along with it's index
			cout << "FOUND: "<< book_list[index] << " Index = " << index << "\n\n\n";

		else //prints that the user's keyword could not be found
			cout << search << " was not found!\n\n\n";

		cout << "Choice: "; //prompts user to make another choice like just before the do while
		cin >> choice;

		choice = tolower(choice); //to remove capitalization errors


	} while (choice != q);

	return 0;
}
