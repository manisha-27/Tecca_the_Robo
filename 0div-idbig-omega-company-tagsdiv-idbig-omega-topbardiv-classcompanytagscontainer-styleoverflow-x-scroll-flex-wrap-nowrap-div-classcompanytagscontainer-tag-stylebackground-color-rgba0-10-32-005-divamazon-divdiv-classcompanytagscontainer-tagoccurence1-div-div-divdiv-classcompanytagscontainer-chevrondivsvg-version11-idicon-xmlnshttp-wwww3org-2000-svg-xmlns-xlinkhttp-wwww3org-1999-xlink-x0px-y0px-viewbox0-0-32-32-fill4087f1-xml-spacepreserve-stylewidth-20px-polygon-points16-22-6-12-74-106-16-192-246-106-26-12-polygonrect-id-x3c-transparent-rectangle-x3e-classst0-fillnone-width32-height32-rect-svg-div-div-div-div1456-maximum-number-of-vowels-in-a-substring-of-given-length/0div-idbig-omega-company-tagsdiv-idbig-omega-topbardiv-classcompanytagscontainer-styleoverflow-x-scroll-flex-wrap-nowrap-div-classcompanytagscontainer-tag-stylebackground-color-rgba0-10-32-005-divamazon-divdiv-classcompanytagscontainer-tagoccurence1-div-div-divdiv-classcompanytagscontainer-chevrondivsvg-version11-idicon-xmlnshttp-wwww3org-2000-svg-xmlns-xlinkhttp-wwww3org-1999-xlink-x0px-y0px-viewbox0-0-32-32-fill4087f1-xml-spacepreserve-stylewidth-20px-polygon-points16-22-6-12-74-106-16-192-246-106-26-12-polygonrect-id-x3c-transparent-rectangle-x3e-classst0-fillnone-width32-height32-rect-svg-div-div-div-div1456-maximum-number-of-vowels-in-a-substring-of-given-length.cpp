class Solution {
public:
    int maxVowels(string s, int k) {
        int sum=0,maxi=0;
        int i=0,j=0;
        while(j<s.length()){
            if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u') sum+=1;
            // maxi=max(maxi,sum);
            if(j-i+1==k){
                maxi=max(maxi,sum);
                if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u') sum-=1;
                cout<<maxi<<" - "<<sum<<" - "<<i<<" - "<<j<<endl;
                i++;
                // maxi=max(maxi,sum);
            }
            // maxi=max(maxi,sum);
            j++;
        }
        return maxi;
    }
};