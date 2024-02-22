class Solution {
    public List<List<Integer>> generate(int numRows) {
        List<List<Integer>> list=new ArrayList<>();
        list.add(Arrays.asList(1));
        if(numRows==1) return list;
        list.add(Arrays.asList(1,1));
        for(int i=2;i<numRows;i++){
            List<Integer> temp=new ArrayList<>();
            temp.add(1);
            int n=list.size()-1;
            for(int j=0;j<n;j++){
                int a=list.get(n).get(j)+list.get(n).get(j+1);
                temp.add(a);
            }
            temp.add(1);
            list.add(temp);
        }
        return list;
    }
}