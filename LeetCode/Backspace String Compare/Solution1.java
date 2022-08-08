class Solution {
    public boolean backspaceCompare(String s, String t) {
        Stack<Character> st1=new Stack<>();
        Stack<Character> st2=new Stack<>();
        for(int i=0;i<s.length();i++){
            if(s.charAt(i)!='#' ){
                st1.push(s.charAt(i));
            }else if(!st1.isEmpty()){
                st1.pop();
            }
        }
        for(int i=0;i<t.length();i++){
            if(t.charAt(i)!='#'){
                st2.push(t.charAt(i));
            }else if(!st2.isEmpty()){
                st2.pop();
            }
        }
        if(st1.size()!=st2.size())
            return false;
        int a=st1.size();
        for(int i=0;i<a;i++){
            if(st1.peek()==st2.peek()){
                st1.pop();
                st2.pop();
            }else{
                return false;
            }
        }
        return true;
    }
}


// edge cases:
// "a##c"
// "#a#c"

// char[] a =>String s
// char[] b =>String t
// iteration
// compare
// i=m for (i=m+1)==# skip
// i<s.length()-1
// else 
//     add it in the char[]
    
// char[] a compare char[] b


// cases1: "#"

// 2:
// Map<Character,Integer>
// // ab#c map ->  {a,0}, {c,3}
// // ab#b#c map -> {a,0}, {c,6}


// 3. Stack:
// String s =>stack 1   => ab#c
// String t=> stack 2   =>ab#b#c

// stack 1
// i=0 check char!=#
// check i+1 char!=#
// push =>a
// else 
//     pop=>a
// i=1 check i+1 char!=#
