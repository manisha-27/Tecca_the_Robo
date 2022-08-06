class Solution {
    public boolean isValid(String s) {
        Stack<Character> st=new Stack<Character>();
        for(int i=0;i<s.length();i++){
            // if(s.charAt(0)==']' || s.charAt(0)==')' || s.charAt(0)=='}')
            //     return false;
            if(s.charAt(i)=='(' || s.charAt(i)=='{' || s.charAt(i)=='['){
                st.push(s.charAt(i));
            // }else if(s.charAt(i)==')'){
            //     if(st.peek()=='(')
            //         st.pop();
            //     else 
            //         return false;
            // }else if(s.charAt(i)==']'){
            //     if(st.peek()=='[')
            //         st.pop();
            //     else 
            //         return false;
            // }else if(s.charAt(i)=='}'){
            //     if(st.peek()=='{')
            //         st.pop();
            //     else 
            //         return false;
            }else if(st.isEmpty()){
                return false;
            }else{
                char c=st.peek();
                if(s.charAt(i)==')' && c=='(')
                    st.pop();
                else if(s.charAt(i)=='}' && c=='{')
                    st.pop();
                else if(s.charAt(i)==']' && c=='[')
                    st.pop();
                else return false;
            }
        }
        return st.isEmpty();
    }
}


// Input: s= "[}{]"
// Output: false

// Input: s= "[{]}"
// Output: false

// Input: s= "]"
// Output: false
