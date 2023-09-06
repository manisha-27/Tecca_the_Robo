class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        map<char,int> ch;
        for(int i=0;i<stones.size();i++)
            ch[stones[i]]+=1;
        int count=0;
        for(int i=0;i<jewels.size();i++)
            if(ch.find(jewels[i])!=ch.end())
                count+=ch[jewels[i]];
        return count;
    }
};