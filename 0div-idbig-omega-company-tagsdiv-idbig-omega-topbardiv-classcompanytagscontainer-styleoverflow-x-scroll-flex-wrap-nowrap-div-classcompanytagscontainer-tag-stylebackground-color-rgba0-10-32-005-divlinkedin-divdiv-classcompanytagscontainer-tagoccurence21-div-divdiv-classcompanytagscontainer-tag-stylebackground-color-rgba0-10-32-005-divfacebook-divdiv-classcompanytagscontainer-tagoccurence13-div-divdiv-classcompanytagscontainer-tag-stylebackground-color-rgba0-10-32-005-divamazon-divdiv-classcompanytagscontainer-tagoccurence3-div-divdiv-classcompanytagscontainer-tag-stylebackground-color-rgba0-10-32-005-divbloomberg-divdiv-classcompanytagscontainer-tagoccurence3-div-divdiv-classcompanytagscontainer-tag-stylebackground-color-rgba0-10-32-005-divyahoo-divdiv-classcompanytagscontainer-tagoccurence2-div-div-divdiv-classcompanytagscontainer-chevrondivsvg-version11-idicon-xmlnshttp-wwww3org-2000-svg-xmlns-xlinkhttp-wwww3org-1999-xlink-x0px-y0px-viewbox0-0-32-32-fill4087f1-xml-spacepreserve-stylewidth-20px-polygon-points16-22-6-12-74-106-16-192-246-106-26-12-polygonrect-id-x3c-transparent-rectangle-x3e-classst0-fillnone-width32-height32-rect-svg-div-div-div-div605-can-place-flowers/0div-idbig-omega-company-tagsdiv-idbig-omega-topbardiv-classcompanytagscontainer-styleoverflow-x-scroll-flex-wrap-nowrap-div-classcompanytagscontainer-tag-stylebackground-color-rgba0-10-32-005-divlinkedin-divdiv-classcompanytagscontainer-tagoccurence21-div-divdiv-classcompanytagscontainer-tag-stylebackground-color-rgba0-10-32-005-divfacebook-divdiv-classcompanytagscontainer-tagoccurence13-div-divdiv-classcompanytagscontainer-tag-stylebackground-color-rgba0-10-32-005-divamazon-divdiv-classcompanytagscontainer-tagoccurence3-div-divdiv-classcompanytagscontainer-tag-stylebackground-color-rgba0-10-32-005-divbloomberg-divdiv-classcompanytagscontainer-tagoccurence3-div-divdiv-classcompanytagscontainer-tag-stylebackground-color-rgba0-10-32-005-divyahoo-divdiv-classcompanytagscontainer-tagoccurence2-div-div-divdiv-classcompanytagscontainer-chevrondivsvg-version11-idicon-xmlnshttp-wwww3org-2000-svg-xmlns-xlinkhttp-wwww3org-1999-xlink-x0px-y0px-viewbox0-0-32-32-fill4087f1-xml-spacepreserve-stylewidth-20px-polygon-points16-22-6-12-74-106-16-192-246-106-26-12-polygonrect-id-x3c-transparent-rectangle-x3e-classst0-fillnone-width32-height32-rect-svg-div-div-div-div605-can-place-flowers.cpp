class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int i=0, count=0;
        // if(flowerbed.size()==1){
        //     return !(flowerbed[0]&n);
        // }
        while(i<flowerbed.size()){
            if(flowerbed[i]==0){
                if((i==0 || flowerbed[i-1]==0) && (i==flowerbed.size()-1 || flowerbed[i+1]==0)){
                    flowerbed[i]=1;
                    count++;
                }
            }
            i++;
        }
        // cout<<count<<endl;
        return count>=n;
    }
};