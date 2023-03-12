
string reverseWord(string str){
    string s="";
    for(int i=str.length()-1;i>=0;i--){
        // s.append(str.at(i));
        s += str.at(i);
    }
    return s;
}
