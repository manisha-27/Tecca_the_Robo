class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.empty()) {
            return 0; // An empty needle is always found at index 0
        }
        if(needle.length()>haystack.length()){
            return -1;
        }
        int i=0,j=0, index=-1;
        while(j<haystack.length() && i<needle.length()){
            index=j;
            while(j<haystack.length() && i<needle.length() && haystack[j]==needle[i]){
                i++;j++;
            }
            if(i>=needle.length())
               return index;
            else{
                // cout<<i<<endl;
                i=0;
            }
            j=index+1;
            // cout<<j<<endl;
        }
        // cout<<i<<endl;
        return -1;
    }
};

// class Solution {
// public:
//     int strStr(string haystack, string needle) {
//         if (needle.empty()) {
//             return 0; // An empty needle is always found at index 0
//         }
        
//         if (needle.length() > haystack.length()) {
//             return -1; // Needle is longer than haystack, so no match possible
//         }
        
//         for (int i = 0; i <= haystack.length() - needle.length(); i++) {
//             int j = 0;
//             while (j < needle.length() && haystack[i + j] == needle[j]) {
//                 j++;
//             }
            
//             if (j == needle.length()) {
//                 return i; // Found a match at index i
//             }
//         }
        
//         return -1; // No match found
//     }
// };
