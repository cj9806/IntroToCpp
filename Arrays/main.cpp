#include <cstdlib>
#include <iostream>
#include <ctime>
#include <string>

using std::cout;
using std::endl;

void printArray(int nums[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		std::cout << nums[i] << std::endl;
	}
}

// Returns the sum of all numbers in the array.
//  - numbers is the array of integers
//  - size is the number of elements in the array
int sumNumbers(int nums[], size_t size) {
	int total = 0;
	for (size_t i = 0; i < size; i++)
	{
		total += nums[i];
	}
	return total;
}

int largestNum(int nums[], size_t size)
{
	int largest = 0;
	for (size_t i = 0; i < size; i++)
	{
		if (nums[i] > largest)
			largest = nums[i];
	}
	return largest;
}

// Returns the index of the element within the array that matches the given value.
//  - numbers is the array of integers
//  - size is the number of elements in the array
//  - value is the value we’re looking for
//  - start is the index to start looking from within the array
//
//  - Returns the index of the element within the array
//    - If not found, return -1
int findIndex(int nums[], size_t size, int value, int start)
{
	int index = 0;
	for (int i = start; i < size; i++)
	{
		if (nums[i] == value) {
			index = i;
			break;
		}
	}
	return index;
}

int CountElement(int nums[], int size, int target)
{
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		if (nums[i] == target)
			count++;
	}
	return count;
}

int main() 
{
	int nums1[] = { 1,2,3,4,5 };
	int nums2[] = { 14, 76, 262, 306, 452 };
	int nums3[] = { 2,2,2,3,3,4,3,5,8,9,10 };
	printArray(nums1,5);
	cout << sumNumbers(nums1, 5) << endl;
	cout << largestNum(nums2, 5) << endl;
	cout << "262 is at "<< findIndex(nums2, 5, 262, 0)<<endl;
	cout << "3 occours " << CountElement(nums3, 11, 3) << " times" << endl;
	return 0;
}