// class Solution {
    
//     static bool cmp(const string lhs, const string rhs) {
//    return lhs.length() < rhs.length();
// }
// public:
//     string longestCommonPrefix(vector<string>& strs) {
//         sort(strs.begin(),strs.end(), cmp);
//         string res="";
//         int a = strs[0].length();
//         // cout<<a<<endl;
//         int b=0,c=0;
//         while(a>0){
//             for(int i=1;i<strs.size();i++){
//                 if(strs[0][c]==strs[i][c])
//                     b++;
//             }
//             if(b==strs.size())
//                 res=strs[0][c];
//             else
//                 break;
//             b=0;
//             c++;
//             a--;
//         }
//         return res;
//     }
// };

class Solution {
    static bool cmp(const string& lhs, const string& rhs) {
        return lhs.length() < rhs.length();
    }

public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end(), cmp);
        string res = "";
        int b = 0, c = 0;
        while (c < strs[0].length()) {
            for (int i = 1; i < strs.size(); i++) {
                if (strs[0][c] != strs[i][c])
                    return res;
            }
            res += strs[0][c];
            c++;
        }
        return res;
    }
};
