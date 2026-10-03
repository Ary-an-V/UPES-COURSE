//Q101: Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.

/*
Sample Test Cases:
Input 1:
nums = [5,7,7,8,8,10], target = 8
Output 1:
3,4

Input 2:
 nums = [5,7,7,8,8,10], target = 6
Output 2:
-1,-1

Input 3:
 nums = [5,7,7,8,8,10], target = 10
Output 3:
5,5

*/

#include <stdio.h>

int main(void) {
	int n;
	int target;
	printf("Input: ");
	if (scanf("%d", &n) != 1 || n <= 0) {
		printf("-1,-1\n");
		return 0;
	}

	int nums[n];
	for (int i = 0; i < n; i++) {
		if (scanf("%d", &nums[i]) != 1) {
			return 1;
		}
	}
	if (scanf("%d", &target) != 1) {
		return 1;
	}

	int left = 0;
	int right = n;
	while (left < right) {
		int middle = left + (right - left) / 2;
		if (nums[middle] < target) {
			left = middle + 1;
		} else {
			right = middle;
		}
	}
	int first = left;

	left = 0;
	right = n;
	while (left < right) {
		int middle = left + (right - left) / 2;
		if (nums[middle] <= target) {
			left = middle + 1;
		} else {
			right = middle;
		}
	}
	int last = left - 1;

	if (first == n || nums[first] != target) {
		printf("-1,-1\n");
	} else {
		printf("%d,%d\n", first, last);
	}

	return 0;
}

