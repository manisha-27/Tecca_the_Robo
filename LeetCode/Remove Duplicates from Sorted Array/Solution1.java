class Solution {
    public int removeDuplicates(int[] nums) {
        // LinkedHashSet V/s HashSet
        Set<Integer> set=new LinkedHashSet<>();
        int i=0;
        for(int p: nums){
            set.add(p);
        }
        i=0;
        for(int p:set){
            nums[i++]=p;
        }
        // System.out.println(set);
        return set.size();
    }
}
