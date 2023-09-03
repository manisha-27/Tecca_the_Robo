class Solution {
public:
    int a=0;
    map<string,string> tinyURL;
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        string s="https://tinyurl.com/"+to_string(a);
        a++;
        tinyURL[s]=longUrl;
        return s;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return tinyURL[shortUrl];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));