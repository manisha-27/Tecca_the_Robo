class Solution {
    public String licenseKeyFormatting(String s, int k) {
        s=s.replaceAll("-","").toUpperCase();
        StringBuilder sb=new StringBuilder(reverse(s));
        int m=-1;
        for(int i=0;i<sb.length();i++){
            m++;
            if(m%k==0 && m!=0){
                m=-1;
                // if(sb.charAt(i)=='-')
                //     continue;
                // else{
                    sb.insert(i,'-');
                // }
            }
            // else{
            //     while(sb.charAt(i)=='-'){
            //         sb.delete(i,i+1);
            //     }
            // }
        }
        
        return reverse(sb.toString());
    }
    public static String reverse(String s){
        StringBuilder sb=new StringBuilder();
        for(int i=s.length()-1;i>=0;i--){
            sb.append(s.charAt(i));
        }
        return sb.toString();
    }
}
