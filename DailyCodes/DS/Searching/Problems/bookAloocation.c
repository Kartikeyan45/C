
//	Prog : Book Allocation PRoblem

#include<stdio.h>
#include<stdbool.h>

bool isPossible(int arr[], int size, int students, int mid){
	
	int studentsCount = 1;
	int pageSum = 0;

	for(int i = 0; i < size; i++){
		
		if(pageSum + arr[i] <= mid){
			
			pageSum += arr[i];
		}else{

			studentsCount++;

			if(studentsCount > students || arr[i] > mid){
				
				return false;
			}

			pageSum = arr[i];
		}
	}

	return true;
}

int allocationBooks(int arr[], int size, int students){
	
	int start = 0, sum;

	for(int i = 0; i < sum; i++){
		
		sum += arr[i];
	}

	int end = sum;
	int ans = -1;

	while(start <= end){
		
		int mid = start + (end - start) / 2;

		if(isPossible(arr, size, students, mid)){
			
			ans = mid;
			end = mid - 1;
		}
		else{
			start = mid + 1;
		}
	}
	return ans;
}

void main(){
	
	int arr[] = {10,20,30,40};

	int students = 2;

	int size = sizeof(arr) / sizeof(arr[0]);

	int ret = allocationBooks(arr, size, students);
	printf("%d\n", ret);
}
