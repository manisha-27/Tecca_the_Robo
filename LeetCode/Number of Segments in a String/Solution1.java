class Solution {
    public int countSegments(String s) {
        StringBuilder sb=new StringBuilder();
        List<String> ls=new ArrayList<>();
        // int a=0;
        s=s.trim();
        if(s.isEmpty()){
            return 0;
        }
        for(int i=0;i<s.length();i++){
            if(s.charAt(i)==' ' && s.charAt(i+1)!=' '){
                ls.add(sb.toString());
                sb.setLength(0);
                // a++;
            }
            sb.append(s.charAt(i));
            if(i==s.length()-1){
                ls.add(sb.toString());
            }
        }
        System.out.println(ls);
        return ls.size();
        // String st[]=s.split(" ");
        // return st.length;
    }
}
