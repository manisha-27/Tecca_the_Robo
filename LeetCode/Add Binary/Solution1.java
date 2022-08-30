class Solution {
    public String addBinary(String a, String b) {
        int rem=0,q=0;
        StringBuilder sb=new StringBuilder(); 
        int c=a.length()-1;
        int d=b.length()-1;
        while(c>=0 || d>=0){
            int sum=q;
            // System.out.println(d+" "+c);
            if(d>=0)
                sum+=(b.charAt(d--)-'0');
            if(c>=0)
                sum+=(a.charAt(c--)-'0');
            if(sum==2)
                sum=10;
            else if(sum==3)
                sum=11;
            rem=sum%10;
            q=sum/10;
            sb.insert(0,rem);
        }
        if(q==1)
            sb.insert(0,q);
        return sb.toString();
    }
}

// Test Case 1:
// a=1010
// b=1011
// rem=0
// q=0
// 1+0+q=1+0+0=1
// rem=1%10=1
// q=1/10=0
// s=s+rem=1 <=string

// 1+1+q=1+1+0=10
// rem=10%10=0
// q=10/10=1
// s=10

// 0+0+q=0+0+1=1
// rem=1%10=1
// d=1/10=0
// s=101

// 1+1+q=1+1+0=10
// rem=10%10=0
// d=10/10=1
// s=1010

// st1 and st2 length exceeds
// s=s+d
// s=10101

// reverse string 
// s=10101

//.......................................|
//.......................................|

// Test Case 2:
// a=1111
// b=1

// c=4

// rem=0
// q=0

// 1+1+q=1+1+0=10
// rem=10%10=0
// q=10/10=1
// s=0

// 1+q=1+1=10
// rem=10%10=0
// q=10/10=1
// s=00

// 1+q=1+1=10
// rem=10%10=0
// q=10/10=1
// s=000

// 1+q=1+1=10
// rem=10%10=0
// q=10/10=1
// s=0000

// a and b string length exceed
// s=s+q=00001

// reverse
// s=10000
