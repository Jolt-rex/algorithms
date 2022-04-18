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

