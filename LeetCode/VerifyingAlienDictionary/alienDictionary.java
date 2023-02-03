class Solution {
    public boolean isAlienSorted(String[] words, String order) {
        int i=0;                     // count words[]
        // boolean flag=true;
        while(i<words.length-1){
            int n=0;              // count words character count
            int w1=words[i].length();
            int w2=words[i+1].length();
            while(n<(w1>w2?w2:w1)){
                // System.out.println(order.indexOf(words[i].charAt(n))+" ::  "+order.indexOf(words[i+1].charAt(n)));
                // System.out.println(words[i].charAt(n)+"  :  "+words[i+1].charAt(n));
                if(order.indexOf(words[i].charAt(n))>order.indexOf(words[i+1].charAt(n))){
                    return false;
                }else if(order.indexOf(words[i].charAt(n))<order.indexOf(words[i+1].charAt(n))){
                    break;
                }
                if(n+1>w2-1 && w2<w1)
                  return false;
                n++;
            }
            i++;
        }
        return true;
    }
}
