#include <string>
/*
Recursion: Length of a String
Write a function that returns the length of a string. Make your function recursive.

Examples
length("apple") ➞ 5

length("make") ➞ 4

length("a") ➞ 1

length("") ➞ 0
Notes
Check the Resources tab for info on recursion.
*/

int length(std::string str) {
	if(str[0] == '\0')
		return 0;
	
	return length(str.substr(1)) + 1;
}