//Reverse a String
#include <iostream> 
using namespace std;
int main(){
class Solution {
  public:
    string revStr(const string& s) {
    string reversed = s;
    reverse(reversed.begin(), reversed.end());
    return reversed;
}
};

}
