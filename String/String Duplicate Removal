//String Duplicates Removal
class Solution {
  public:
    string removeDuplicates(string &s) {
        // code here
        unordered_set<char> seen; // To keep track of seen characters
    string result = "";       // To store the resultant characters
    
    for (char c : s) {
        if (seen.find(c) == seen.end()) { // If character is not in the set
            seen.insert(c);              // Add it to the set
            result += c;                 // Append it to the result
        }
    }
    
    return result;
}

int main() {
    string s1 = "geEksforGEeks";
    cout << removeDuplicates(s1) << endl; // Output: "geEksforG"

    string s2 = "HaPpyNewYear";
    cout << removeDuplicates(s2) << endl; // Output: "HaPpyNewYr"
    }
};
