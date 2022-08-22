class Solution {
    public String multiply(String num1, String num2) {
        
        // if(num1=="0" || num2=="0")
        //     return "0";
        if ("0".equals(num1) || "0".equals(num2))
			return "0";
        
        int m=num1.length(),n=num2.length();
        int ch[]=new int[m+n+1];
        StringBuilder sb=new StringBuilder();
        int b=0,rem;
        // System.out.println(Arrays.toString(ch));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int mul=(num1.charAt(m-1-j)-'0')*(num2.charAt(n-1-i)-'0');
                // System.out.println("=>"+ch[i+j]+" and "+(i+j)+" , "+ch[i+j+1]+" and "+(i+j+1));   //=> Debug Updates
                rem=(mul%10)+ch[i+j];
                ch[i+j]=rem%10;
                // b=mul/10;
                // ch[i+j]=rem;  =>changes
                ch[i+j+1]=(mul/10)+ch[i+j+1]+(rem/10);
                // System.out.println(mul+" "+rem+" "+ch[i+j+1]+" "+ch[i+j]);   //=> Debug Updates
            }
        }
        int a=0;
        for(int i=ch.length-1;i>=0;i--){
            if(a==0 && ch[i]==0)
                continue;
            else
                a++;
            sb.append(ch[i]);
        }
        return sb.toString();
    }
}
