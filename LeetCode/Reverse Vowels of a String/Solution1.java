class Solution {
    public String reverseVowels(String s) {
        char[] ch=s.toCharArray();
        int rev[]=new int[s.length()];
        for(int i=0;i<s.length();i++){
            if(s.charAt(i)=='a' || s.charAt(i)=='e' || s.charAt(i)=='i' || s.charAt(i)=='o' || s.charAt(i)=='u' || s.charAt(i)=='A' || s.charAt(i)=='E' || s.charAt(i)=='I' || s.charAt(i)=='O' || s.charAt(i)=='U')
                rev[i]=1;
            // else
            //     rev[i]=0;
        }
        // System.out.println(Arrays.toString(rev));
        // System.out.println(Arrays.toString(ch));
        int m=0,n=s.length()-1;
        while(m<n){
            if(rev[m]==1){
                if(rev[n]==1){
                    // System.out.println(rev[m]+" "+ch[m]+" "+rev[n]+" "+ch[n]);
                    char c;
                    c=ch[m];
                    ch[m]=ch[n];
                    ch[n]=c;
                    m++;
                    n--;
                }else
                    n--;
            }else
                m++;
        }
        String st=new String(ch);
        return st;
    }
}
