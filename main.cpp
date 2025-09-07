#include <iostream>
#include <search.h>
#include <vector>
#include <ctype>
#include <string>

using namespace std;

int main() {
	char choice ='';  //user entered decision -> while loop
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

		cin.ignore(); //clears buffer for user to enter multiple words
		getline(cin, search); //accepts users search

		for (size_t i = 0; i < book_list.size(); i++) {

	} while (choice != q);
