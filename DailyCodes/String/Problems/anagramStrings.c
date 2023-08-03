
/*	Prog : Given two strings. The task is to check whether the given strings are "anagrams" of each other or not.
 *
 *	Input : str1 = "listen", str2 = "silent"
 *	Ouput : "Anagram"
 *
 *	Input : str1 = "gram", str2 = "arm"
 *	Ouput : "Not Anagram"
*/

/*	The idea is based in an assumption that the set of possible characters in both strings is small.That the characters are not stored using 8 bit and there can be 256 possible characters.
 *
 *	So count the frequency of the characters and if the frequency of charcters in both strings are the same, they are anagram of each other.
 *
 *	Follow the below steps to implement the idea :
 *
 *		- Create count arrays of size 256 for both strings.Initialze all values in count arrays as 0
 *
 *		- Iterate through every character of both strings and increment the count of characters in the corresponding count arrays.
 *
 *		- Compare count arrays. If both count arrays are the same, then return "true" else return "false".
*/		

#include<stdio.h>
#include<stdbool.h>

bool areAnagram(char *str1, char *str2){
	
	// create 2 count arrays and initialize all values as 0
	int count1[256] = {0};
	int count2[256] = {0};
	int i;
	
	// for each character in input strings, increment count
	// in the corresponding count array
	for(i = 0; str1[i] && str2[i]; i++){
		
		count1[str1[i]]++;
		count2[str2[i]]++;
	}

	// if both  strings are of different length. Removing this condition	    // will make the program fail for strings like "acca" and "aca"
	if(str1[i] || str2[i]){
		
		return false;
	}

	// compare count arrays
	for(int i = 0; i < 256; i++){
		
		if(count1[i] != count2[i]){
			
			return false;
		}
	}

	return true;
}

void main(){
	
	char str1[] = "gram";
	char str2[] = "arm";

	if(areAnagram(str1, str2)){
		
		printf("The two strings are anagram of each other\n");
	}else{
		
		printf("Not anagram of each other\n");
	}
}
