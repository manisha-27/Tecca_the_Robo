class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(), s.end());

        istringstream iss(s);
        string word, result;

        while (iss >> word) {
            reverse(word.begin(), word.end());
            result += word + " ";
        }

        if (!result.empty()) {
            // Remove the trailing space
            result.pop_back();
        }

        return result;
    }
};


// class Solution { 
// public:
//     string leadtrail(string s){
//         int i = 0,j=0;
//         while(i<s.length() && j<s.length()){
//             while(j<s.length() && s[j]==' '){
//                 j++;
//             }
//             if((i==0 && j>i) || (j==s.length()-1 && i<j)){
//                 s.erase(i,j-i);
//             }else{
//                 s.replace(i,j-i," ");
//             }
//             i=j;
//         }
//         return s;
//     }
//     string reverseWords(string s) {
//         string str="";
//         int i=s.length()-1;
//         stack<char> st;
//         while(i>=0){
//             if(i==0){
//                 st.push(s[i]);
//                 while(!st.empty()){
//                     char c=st.top();
//                     str+=c;
//                     st.pop();
//                 }
//             }
//             if(s[i]==' '){
//                 while(!st.empty()){
//                     char c=st.top();
//                     str+=c;
//                     st.pop();
//                 }
//                 str+=" ";
//             }else{
//                 st.push(s[i]);
//             }
//             i--;
//         }
//         return leadtrail(str);
//     }
// };