class Solution {
    public List<List<Integer>> threeSum(int[] nums) {
        Arrays.sort(nums);
        List<List<Integer>> list=new ArrayList<>();
        for(int i=0;i<nums.length;i++){
            for(int j=i+1;j<nums.length;j++){
                for(int k=j+1;k<nums.length;k++){
                    List<Integer> li=new ArrayList<>();
                    // if(i!=j && i!=k && j!=k){
                        if(nums[i]+nums[j]+nums[k]==0){
                            li.add(nums[i]);
                            li.add(nums[j]);
                            li.add(nums[k]);
                            System.out.println(i+" "+j+" "+k);
                            if(!list.contains(li))
                            list.add(li);
                        }
                    // }
                }
            }
        }
        return list;
    }
}

//Doesn't work on leetcode due to high time complexity, hence time exceeded
