class Solution {
    public String licenseKeyFormatting(String s, int k) {
        s=s.replaceAll("-","").toUpperCase();
        StringBuilder sb=new StringBuilder(s);
        sb.reverse();
        int m=-1;
        for(int i=k;i<sb.length();i+=(k+1)){
             sb.insert(i,'-');
        }
        return sb.reverse().toString();
    }
}
