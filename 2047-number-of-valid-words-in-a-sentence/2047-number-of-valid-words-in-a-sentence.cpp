class Solution {
public:
    bool isValid(string str){
        int n=str.size()-1;
        if(str.empty() || str[0]=='-' || str[n]=='-')
            return false;
        if(n==0 && (str[0]=='.' || str[0]==',' || str[0]=='!'  ))
            return true;
        int hy=0;
        for(int i=0;i<=n;i++){
            if(str[i]=='-'){
                hy++;
            }
            if(str[i]=='-' && (!islower(str[i - 1]) || !islower(str[i + 1])))
                return false;
            if(i!=n && (str[i]==',' || str[i]=='!' || str[i]=='.'))
                return false;
            if(isdigit(str[i]) || hy>1)
                return false;
        }
        return true;
    }
    int countValidWords(string sentence) {
        int count=0;
        for(int i=0;i<sentence.size();i++){
            string str="";
            while(sentence[i]!=' ' && i<sentence.size()){
                str+=sentence[i];
                i++;
            }
            if(isValid(str)){
                cout<<str<<endl;
                count++;
            }
        }
        return count;
    }
};