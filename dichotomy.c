#include<stdio.h>

int get_index(int goal, int *sorted_array){
    int array_len = sizeof(sorted_array);
    int first = 0;
    int end = array_len;
    while(first <= end){
	int mid = (first + end)/2;
	if(goal > sorted_array[mid]){
	    first = mid + 1;
	}
	else if(goal < sorted_array[mid]){
	    end = mid - 1;
	}
	else{
  	    return mid;
	}
    }
    return -1;
}

int main(){
    int sorted_array[] = {1, 2, 5, 6, 12, 14, 23, 25, 29, 30, 46};
    int goal = 46;
    int goal_index = get_index(goal, sorted_array);
    printf("变量在数组中的位置是%d", goal_index);
}
