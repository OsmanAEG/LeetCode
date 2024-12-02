#include<stack>
#include<string>

using string = std::string;

class Solution {
public:
  int minSwaps(string s) {
    std::stack<char> unclosed;

    for(const auto c : s) {
      if(c == '[') unclosed.push(c);
      else if(unclosed.size() > 0) unclosed.pop();
    }

    return (unclosed.size() + 1)/2;
  }
};