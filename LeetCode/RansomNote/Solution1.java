class Solution {
    public boolean canConstruct(String ransomNote, String magazine) {
        char[] rch=ransomNote.toCharArray();
        char[] mch=magazine.toCharArray();
        int a=0;
        a:
        for(int i=0;i<rch.length;i++){
            b:
            for(int j=0;j<mch.length;j++){
                if(rch[i]==mch[j]){
                    mch[j]='1';
                    a++;
                    // rch[i]='0';   Will Take More Space and Time   <-st1
                    // OR
                    break b;        // Will minimize a bit from st1
                }
            }
        }
        System.out.println(a+" "+mch.length);
        return a==rch.length?true:false;
    }
}
