class Solution {
    public char findTheDifference(String s, String t) {
        if(s.isEmpty())
            return t.charAt(0);
        StringBuilder sb1=new StringBuilder(s);
        // StringBuilder sb2=new StringBuilder(t);
        for(int i=0;i<t.length();i++){
            String st=String.valueOf(t.charAt(i));
            if(sb1.indexOf(st) > -1){
                int index=sb1.indexOf(st);
                // sb1.charAt(index)='0';
                sb1.setCharAt(index,'0');
            }
            else
                return t.charAt(i);
        }
        return '0';
    }
}
