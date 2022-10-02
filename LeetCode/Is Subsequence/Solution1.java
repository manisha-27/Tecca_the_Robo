class Solution {
    public boolean isSubsequence(String s, String t) {
        int s1=0,t1=0;
        while(s1<s.length() && t1<t.length()){
            // System.out.println(s.charAt(s1)+" "+t.charAt(t1));
            if(s.charAt(s1)!=t.charAt(t1)){
                t1++;
            }else{
                s1++;
                t1++;
            }
        }
        if(s1==s.length())
            return true;
        return false;
    }
}
