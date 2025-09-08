#include "search.h"
#include <cctype>

//Function to convert string to lowercase 
std::string toLowerCase(const std:: string& str){
	std::string lower = str; 
	for(size_t i =0; i <lower.size(); i++){
		lower[i] = std::tolower(static_cast<unsigned char>(lower[i]));
	}
	return lower; 
}


//Define Linear Search Function

int linearSearch(const std::vector<std::string>& list, const std::string& key){
	//converts the string to lowercase
	std::string lowerKey = toLowerCase(key); 

	
	//Loop through vector for key (basic vector search from notes)
	for (std:: size_t i = 0; i <list.size(); i++){
		if(toLowerCase(list[i]) == lowerKey){
			return static_cast<int>(i);
		}
	} return -1; //returns -1 if the value is not present
}
