class Solution {
    public int firstUniqChar(String s) {
        for(int i=0;i<s.length();i++){
            int n=s.length();
            String st=s.substring(0,i)+s.substring(i+1,n);
            //.............................
            // //1st Wrong Approach (As Time limit exceeds)
            //.............................
            // System.out.println(s.substring(0,i)+" "+s.substring(i+1,n)+" -> "+st);
            // int char_index=st.indexOf(s.charAt(i));
            // if(char_index==-1){
            //     if(char_index<i)
            //         return i;
            // }
            //.............................
            if(!st.contains(String.valueOf(s.charAt(i)))) 
                return i;
            continue;
        }
        
        //.............................
        // //2nd Wrong Approach (As Time limit exceeds)
        //.............................
        // int[] arr=new int[s.length()];
        // for(int i=0;i<s.length();i++){
        //     for(int j=0;j<s.length();j++){
        //         if(i!=j && s.charAt(i)==s.charAt(j))
        //             arr[i]++;
        //     }
        // }
        // for(int i=0;i<s.length();i++){
        //     if(arr[i]==0)
        //         return i;
        // }
        //.............................
        return -1;
    }
}


// Runtime: 2869 ms, faster than 5.00% of Java online submissions for First Unique Character in a String.
// Memory Usage: 696.4 MB, less than 5.15% of Java online submissions for First Unique Character in a String.
