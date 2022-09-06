class Solution {
    public List<List<Integer>> generate(int numRows) {
        List<List<Integer>> tri=new ArrayList<>();
        for(int i=0;i<numRows;i++){
        List<Integer> list=new ArrayList<>();
            if(i==0){
                // System.out.println("Hello1");
                list.add(1);
            }else if(i==1){
                // System.out.println("Hello2");
                list.add(1);
                list.add(1);
            }else{
                list.add(tri.get(i-1).get(0));
                // System.out.println("Hello3");
                for(int j=0;j<tri.get(i-1).size()-1;j++){
                    // System.out.println("Hello4");
                    list.add(tri.get(i-1).get(j)+tri.get(i-1).get(j+1));
                }
                list.add(tri.get(i-1).get(0));
            }
            // System.out.println(list);
            tri.add(list);
        }
        return tri;
    }
}
