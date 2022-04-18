/*
  Given two non-empty arrays of integers, write a function that determines
  whether the second array is a subsequence of the first one.

  A subsequence of an array is a set of numbers that aren't necessarily adjacent
  in the array but that are in the same order as they appear in the array. For
  instance, the numbers [1, 2, 3, 4], and so do the numbers [2, 4]. Note
  that a single number in an array and the array itself are both valid
  subsequences of the array.
*/

#include <iostream>
#include <assert.h>
#include <vector>

using namespace std;

bool isValidSubsequence(std::vector<int> array, std::vector<int> sequence) {	
	for(int i = 0, s = 0; i < array.size(); i++ ) {
		if(array.at(i) == sequence.at(s))  {
			if(s++ == sequence.size() - 1) return true;
		}
	}
	return false;
}

int main() {
  std::vector<int> array = {5, 1, 22, 25, 6, -1, 8, 10};
  std::vector<int> sequence = {1, 6, -1, 10};
  assert(isValidSubsequence(array, sequence));
}

