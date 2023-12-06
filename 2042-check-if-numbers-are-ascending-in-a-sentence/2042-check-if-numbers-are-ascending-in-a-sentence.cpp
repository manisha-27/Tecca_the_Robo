class Solution {
public:
    bool areNumbersAscending(string s) {
        int maxi=INT_MIN;
        for(int i=0;i<s.size();i++){
            if(isdigit(s[i])){
                string str="";
                while(isdigit(s[i])){
                    str+=s[i];
                    i++;
                }
                int k=stoi(str);
                int j=maxi;
                maxi=max(maxi,k);
                if(maxi!=k || maxi==j)
                    return false;
            }
        }
        return true;
    }
};

// int(ch - '0')