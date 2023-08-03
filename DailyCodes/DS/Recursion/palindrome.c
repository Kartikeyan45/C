
//	Palindrome

#include<stdio.h>
#include<stdbool.h>

bool isPalindrome(char arr[], int start, int end){

	if(start > end){
	
		return true;
	}

	if(arr[start] == arr[end]){
	
		return isPalindrome(arr, start+1, end-1);
	}else{
		
		return false;
	}
}

void main(){

	char arr[] = {'m','a','d','a','m','\0'};

	bool ret = isPalindrome(arr, 0, 4);

	if(ret){
	
		printf("String is Palindrome\n");
	}else{
	
		printf("String is not a Palindrome\n");
	}
}
