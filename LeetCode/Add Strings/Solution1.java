public class AddStrings {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        String s1=sc.next();
        String s2=sc.next();
        System.out.println(addStrings(s1,s2));
    }
    public static String addStrings(String num1, String num2) {
        StringBuilder sb=new StringBuilder();
        int m=num1.length();
        int n=num2.length();
        int b=0;
        int rem;
        for(int i=0;i<m && i<n;i++){
            int sum=(num1.charAt(m-1-i)-'0')+(num2.charAt(n-1-i)-'0')+b;
            rem=sum%10;
            b=sum/10;
            sb.insert(0,rem);
            // int sum=('1'-'0')+('8'-'0');
//             System.out.println(sum+" "+rem+" "+b+" "+(char)(rem+'0'));
        }
//        System.out.println(b);
        if(m>n){
            for(int i=m-n-1;i>=0;i--){
                rem=(num1.charAt(i)-'0')+b;
                b=rem/10;
                rem=rem%10;
                sb.insert(0,rem);
            }
        }else if(n>m){
            for(int i=n-m-1;i>=0;i--){
                rem=(num2.charAt(i)-'0')+b;
                b=rem/10;                     //used for (6994,36) as if this not used then it will give 61030 as output
                rem=rem%10;
                sb.insert(0,rem);
            }
        }
//        else{
            if(b!=0)
                sb.insert(0,b);         // used for (9,1) and (99,9) cases where if this condition not used then 
                                 // it will result in => 0 and 00 as abouve conditions will ignore b if the length satisfies num1.length and num2.length
//        }
        return sb.toString();
    }
}
