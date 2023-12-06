class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int k=coordinates[0]-'a';
        k++;
        int n=(int)(coordinates[1]-'0');
        cout<<k<<" "<<n<<endl;
        if(k%2==0 && n%2==0)
            return false;
        if(k%2!=0 && n%2!=0)
            return false;
        return true;
    }
};