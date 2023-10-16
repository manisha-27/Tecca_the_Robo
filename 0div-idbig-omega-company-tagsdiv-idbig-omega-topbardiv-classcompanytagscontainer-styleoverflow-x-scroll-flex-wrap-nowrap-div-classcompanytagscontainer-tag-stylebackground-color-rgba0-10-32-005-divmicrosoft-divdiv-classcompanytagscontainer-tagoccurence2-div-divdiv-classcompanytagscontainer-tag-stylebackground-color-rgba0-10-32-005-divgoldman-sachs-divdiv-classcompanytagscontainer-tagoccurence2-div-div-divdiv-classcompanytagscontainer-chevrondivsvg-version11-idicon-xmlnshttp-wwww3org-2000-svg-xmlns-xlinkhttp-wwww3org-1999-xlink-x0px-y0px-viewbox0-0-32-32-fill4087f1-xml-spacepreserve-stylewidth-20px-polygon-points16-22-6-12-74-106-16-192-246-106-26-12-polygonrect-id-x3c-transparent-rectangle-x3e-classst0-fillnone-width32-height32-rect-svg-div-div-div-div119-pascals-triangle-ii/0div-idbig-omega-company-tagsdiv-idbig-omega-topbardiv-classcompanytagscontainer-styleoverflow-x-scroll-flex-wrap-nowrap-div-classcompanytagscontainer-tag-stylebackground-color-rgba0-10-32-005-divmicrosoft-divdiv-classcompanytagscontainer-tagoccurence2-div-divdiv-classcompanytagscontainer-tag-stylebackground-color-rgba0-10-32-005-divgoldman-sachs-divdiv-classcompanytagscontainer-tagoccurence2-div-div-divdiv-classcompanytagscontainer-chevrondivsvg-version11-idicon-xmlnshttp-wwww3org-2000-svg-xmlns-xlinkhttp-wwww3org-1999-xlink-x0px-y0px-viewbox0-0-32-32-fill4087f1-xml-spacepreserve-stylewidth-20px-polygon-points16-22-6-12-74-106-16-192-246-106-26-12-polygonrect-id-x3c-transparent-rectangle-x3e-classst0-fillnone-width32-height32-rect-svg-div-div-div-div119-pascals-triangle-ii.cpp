// class Solution {
// public:
//     vector<int> pascalRow(vector<int> prevRow,int idx,vector<int> newRow){
//         if(idx==0){
//             newRow.push_back(1);
//             //idx++;
//         }
//         if(idx==prevRow.size()){
//             // int n=prevRow[idx-1]+prevRow[idx];
//             newRow.push_back(1);
//             return newRow;
//         }else{
//             int n=prevRow[idx-1]+prevRow[idx];
//             newRow.push_back(n);
//             //idx++;
//         }
//         pascalRow(prevRow,idx+1,newRow);
//         return newRow;
//     }
//     vector<int> rowIdx(int idx,int rowIndex,vector<int> prevRow){
//         if(idx==rowIndex)
//             return prevRow;
//         prevRow=pascalRow(prevRow,0,{});
//         return rowIdx(idx+1,rowIndex,prevRow);
//     }
//     vector<int> getRow(int rowIndex) {
//         if(rowIndex==0)
//             return {1};
//         if(rowIndex==1)
//             return {1,1};
//         vector<int> prevRow;
//         prevRow={1,1};
//         return rowIdx(0,rowIndex,prevRow);
//     }
// };


#include <vector>

class Solution {
public:
    void generateRow(vector<int>& row) {
        vector<int> temp(row);
        row.clear();
        row.push_back(1);

        for (int i = 1; i < temp.size(); ++i) {
            row.push_back(temp[i - 1] + temp[i]);
        }

        row.push_back(1);
    }

    vector<int> getRow(int rowIndex) {
        vector<int> row = {1};

        for (int i = 1; i <= rowIndex; ++i) {
            generateRow(row);
        }

        return row;
    }
};
