// class Solution {
// public:
//     int minSteps(string s, string t) {
//         map<char,int> s1;
//         map<char,int> s2;
//     }
// };
//NOT DONE
//CHEATED
class Solution {
public:
    int minSteps(string s, string t) {
        int count[26] = {0};
        // Storing the difference of frequencies of characters in t and s.
        for (int i = 0; i < s.size(); i++) {
            count[t[i] - 'a']++;
            count[s[i] - 'a']--;
        }

        int ans = 0;
        // Adding the difference where string t has more instances than s.
        // Ignoring where t has fewer instances as they are redundant and
        // can be covered by the first case.
        for (int i = 0; i < 26; i++) {
            ans += max(0, count[i]);
        }
        
        return ans;
    }
};

// cdeeelot
// c=1
// d=1  -
// e=3
// l=1  -
// o=1  -
// t=1
// acceiprt
// acipr
// c-e-----t
// accdeeeilport
// cdeeelot
// a=1  -
// c=2  -
// e=1
// i=1  -
// p=1  -
// r=1  -
// t=1 
// accdeeeilport
// cdeeelot