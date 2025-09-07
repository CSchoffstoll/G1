#include "search.h"

//Define Function

int linearSearch(const std::vector<std::string>& list, const std::string& key){
	//Loop through vector for key (basic vector search from notes)
	for (std:: size_t i = 0; i <list.size(); i++){
		if(list[i] == key){
		return static_cast<int>(i);
		}
	} return -1; //returns -1 if the value is not present
}
