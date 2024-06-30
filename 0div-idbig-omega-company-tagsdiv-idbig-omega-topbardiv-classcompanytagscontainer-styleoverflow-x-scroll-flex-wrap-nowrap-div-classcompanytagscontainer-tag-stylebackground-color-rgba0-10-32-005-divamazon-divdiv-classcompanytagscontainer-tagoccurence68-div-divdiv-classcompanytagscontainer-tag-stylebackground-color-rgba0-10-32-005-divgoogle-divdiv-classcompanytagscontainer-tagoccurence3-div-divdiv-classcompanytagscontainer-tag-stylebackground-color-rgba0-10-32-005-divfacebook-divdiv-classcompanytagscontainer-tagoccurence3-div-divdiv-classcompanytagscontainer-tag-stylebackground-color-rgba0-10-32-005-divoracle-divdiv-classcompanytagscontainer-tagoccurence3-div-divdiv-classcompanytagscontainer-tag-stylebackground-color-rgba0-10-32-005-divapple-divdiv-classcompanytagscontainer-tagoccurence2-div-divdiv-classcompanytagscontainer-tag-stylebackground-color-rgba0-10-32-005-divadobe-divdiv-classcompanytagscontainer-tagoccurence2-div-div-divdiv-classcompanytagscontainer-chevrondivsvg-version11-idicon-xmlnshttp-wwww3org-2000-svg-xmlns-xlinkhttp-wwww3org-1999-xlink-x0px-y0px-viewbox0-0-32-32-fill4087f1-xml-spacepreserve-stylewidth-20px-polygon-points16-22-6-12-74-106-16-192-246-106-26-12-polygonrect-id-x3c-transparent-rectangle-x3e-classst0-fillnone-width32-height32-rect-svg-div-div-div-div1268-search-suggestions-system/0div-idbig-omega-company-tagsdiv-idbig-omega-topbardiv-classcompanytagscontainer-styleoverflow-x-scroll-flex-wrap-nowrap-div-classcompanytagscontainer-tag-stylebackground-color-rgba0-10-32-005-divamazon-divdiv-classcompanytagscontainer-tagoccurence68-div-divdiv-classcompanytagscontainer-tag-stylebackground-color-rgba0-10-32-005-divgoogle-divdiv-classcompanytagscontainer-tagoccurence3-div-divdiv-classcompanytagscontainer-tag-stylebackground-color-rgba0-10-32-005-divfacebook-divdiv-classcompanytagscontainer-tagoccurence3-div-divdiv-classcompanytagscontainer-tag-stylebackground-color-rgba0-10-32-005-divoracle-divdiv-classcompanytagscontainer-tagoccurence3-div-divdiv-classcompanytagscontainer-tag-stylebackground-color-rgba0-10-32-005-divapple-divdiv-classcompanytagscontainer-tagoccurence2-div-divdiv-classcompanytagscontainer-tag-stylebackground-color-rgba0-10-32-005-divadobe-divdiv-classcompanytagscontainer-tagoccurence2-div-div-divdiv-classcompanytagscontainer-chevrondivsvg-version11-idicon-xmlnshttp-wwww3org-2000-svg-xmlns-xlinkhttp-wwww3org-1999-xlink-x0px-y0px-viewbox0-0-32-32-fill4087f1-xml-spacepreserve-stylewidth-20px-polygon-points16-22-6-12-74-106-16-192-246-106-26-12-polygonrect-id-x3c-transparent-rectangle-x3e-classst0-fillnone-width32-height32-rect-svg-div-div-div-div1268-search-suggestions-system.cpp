class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        sort(products.begin(), products.end());
        vector<vector<string>> suggestions;
        int i=0;
        while(i<searchWord.size()){
            // char ch=searchWord[i];
            // cout<<ch<<endl;
            vector<string> prefixsuggestions;
            int j=0;
            while(j<products.size()){
                if(products[j][i]==searchWord[i]){
                    prefixsuggestions.push_back(products[j]);
                    // cout<<products[j]<<" ";
                }
                j++;
            }
            // cout<<endl;
            products=prefixsuggestions;
            j=prefixsuggestions.size();
            while(j>3){
                prefixsuggestions.pop_back();
                j=prefixsuggestions.size();
            }
            suggestions.push_back(prefixsuggestions);
            i++;
        }
        return suggestions;
    }
};