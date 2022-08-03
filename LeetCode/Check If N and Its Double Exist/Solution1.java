class Solution {
    public boolean checkIfExist(int[] arr) {
        // for(int i=0;i<arr.length;i++){
        //     if(arr[i]<0){
        //         arr[i]=Math.abs(arr[i]);
        //     }
        // }
        Arrays.sort(arr);
        for(int i=0;i<arr.length;i++){
            // System.out.println(arr[i]);
            for(int j=0;j<arr.length;j++){
                if(arr[i]*2==arr[j] && i!=j)
                    return true;
            }
        }
        return false;
    }
}

// [-10,12,-20,-8,15] =>true
// [-16,-13,8]  =>false
