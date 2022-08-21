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


// Input
// "3876620623801494171"
// "6529364523802684779"

// Output
// "10405985147604178950"

// String s1=3876620623801494171
// String s2=6529364523802684779
// String s3
// borrow b=0
// 9+1+b=9+1+0=10   => (10%10=0)0 b(10/10=1)=1
// s3=0
// 7+7+b=7+7+1=15   => (15%10=5)5 b(15/10=1)=1
// s3=51
// 1+7+b=1+7+1=9    => (9%10=9)9  b(9/10=0)=0
// s3=951
// 4+4+b=4+4+0=8    => (8%10=8)8  b(8/10=0)=0
// s3=8951
//.....
