
#include <iostream>
#include <string>
#include <map>

using namespace std;

std::map<char, int> getRomanNumeralsMap() {
    std::map<char, int> map;
    map['I'] = 1;
    map['V'] = 5;
    map['X'] = 10;
    map['L'] = 50;
    map['C'] = 100;
    map['D'] = 500;
    map['M'] = 1000;
    
    return map;
}

int romanToInt(string s) {
    std::map<char, int> map = getRomanNumeralsMap();
    
    int total = 0;
    for(unsigned i = 0; i < s.length(); i++) {
        // if not at last char
        if(i < s.length() - 1) {
            // if next char is a greater value than the current
            if(map[s[i]] < map[s[i+1]]) {
                total += map[s[i+1]] - map[s[i++]];
                continue;
            }
        }
        total += map[s[i]];
    }
    return total;
  }

  int main() {
    std::cout << romanToInt("IIIV") << std::endl;
  }