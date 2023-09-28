// class Solution {
// public:
//     bool canPlaceFlowers(vector<int>& flowerbed, int n) {
//         int i=0, count=0;
//         if(flowerbed.size()==1){
//             return !(flowerbed[0]&n);
//         }
//         while(i<flowerbed.size()){
//             if((i==0 && flowerbed[i]==0 && flowerbed[i+1]==0) || (i==flowerbed.size()-1 && flowerbed[i-1]==0 && flowerbed[i]==0)){
//                 count++;
//                 flowerbed[i]=1;
//             }else{
//                 if(flowerbed[i]==0 && flowerbed[i-1]==0 && flowerbed[i+1]==0){
//                     count++;
//                     flowerbed[i]=1;
//                 }
//             }
//             i++;
//         }
//         cout<<count<<endl;
//         return count>=n;
//     }
// };
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int i = 0, count = 0;
        while (i < flowerbed.size()) {
            if (flowerbed[i] == 0) {
                // Check if the current position is empty
                if ((i == 0 || flowerbed[i - 1] == 0) && (i == flowerbed.size() - 1 || flowerbed[i + 1] == 0)) {
                    flowerbed[i] = 1; // Place a flower
                    count++;
                }
            }
            i++;
        }
        return count >= n;
    }
};
