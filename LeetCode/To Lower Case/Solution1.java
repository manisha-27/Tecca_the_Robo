class Solution {
    public String toLowerCase(String s) {
        StringBuilder sb=new StringBuilder();
        for(int i=0;i<s.length();i++){
            int a=s.charAt(i);
            if(a>=65 && a<=90)
                a=a+32;
            sb.append((char)a);
        }
        return sb.toString();
    }
}

// A-Z = 65-90
// a-z = 97-122

// 97-65=32

// 65+32=97
// 75+32=107
