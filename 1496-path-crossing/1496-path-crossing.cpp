class Solution {
public:
    bool isPathCrossing(string path) {
        int x=0,y=0;
        unordered_set<string> cross;
        cross.insert(to_string(x)+" , "+to_string(y));
        for(char c: path){
            if(c=='N'){
                x++;
            } else if(c=='S'){
                x--;
            }else if(c=='E'){
                y++;
            }else if(c=='W'){
                y--;
            }
            string hash=to_string(x)+" , "+to_string(y);
            // cout<<hash<<endl;
            if(cross.find(hash)!=cross.end()){
                // cout<<hash<<endl;
                return true;
            }
            cross.insert(hash);
        }
        return false;
    }
};