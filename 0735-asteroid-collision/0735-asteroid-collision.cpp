class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        for (int i = 0; i < asteroids.size(); ++i){
            int b=asteroids[i];
            while(!st.empty() && st.top()>0 && b<0){
                int prev=st.top();
                st.pop();
                if(prev>abs(b)){
                    st.push(prev);
                    b=0;
                }else if(prev==abs(b)){
                    b=0;
                }
            }
            if(b!=0){
                st.push(b);
            }
        }
        vector<int> result(st.size(), 0);
        for (int i = result.size() - 1; i >= 0; --i) {
            result[i] = st.top();
            st.pop();
        }
        return result;
    }
};


// class Solution {
// public:
//     vector<int> asteroidCollision(vector<int>& asteroids) {
//         stack<int> st;
//         st.push(asteroids[0]);
//         int i=1;
//         while(i<asteroids.size()){
//             int a=st.top();
//             int b=asteroids[i];
//             if(a>0 && b<0 && abs(b)<a){
//              continue;   
//             }
//             if(a>0 && b<0 && abs(b)>a){
//                 st.pop();
//                 st.push(b);
//             }else if(a>0 && b<0 && abs(b)<a){
                
//             }
//             else if(a>0 && b<0 && abs(b)==a){
//                 st.pop();
//             }else{
//                 st.push(b);
//             }
//             i++;
//         }
//         i=st.size();
//         vector<int> arr(i,0);
//         while(!st.empty()){
//             arr[i-1]=st.top();
//             st.pop();
//             i--;
//         }
//         return arr;
//     }
// };


// // class Solution {
// // public:
// //     vector<int> asteroidCollision(vector<int>& asteroids) {
// //         stack<int> st;
// //         int i=asteroids.size()-1;
// //         st.push(asteroids[i]);
// //         // i--;
// //         while(i>=0){
// //             i--;
// //             cout<<"4"<<endl;
// //             int a=st.top();
// //             if(a<0 && asteroids[i]>0 && abs(asteroids[i])<a){
// //                 st.pop();
// //             }else if(a<0 && asteroids[i]>0 && abs(asteroids[i])>a){
                
// //             }else{
// //                 st.push(asteroids[i]);
// //             }
// //             // i--;
// //         }
// //         vector<int> arr;
// //         while(!st.empty()){
// //             arr.push_back(st.top());
// //             st.pop();
// //         }
// //         return arr;
// //     }
// // };




// // class Solution {
// // public:
// //     vector<int> asteroidCollision(vector<int>& asteroids) {
// //         stack<int> st;
// //         int i=asteroids.size()-1;
// //         while(i>=0){ 
// //             st.push(asteroids[i]);
// //             int a=st.top();
// //             cout<<a<<" "<<i<<endl;
// //             int b;
// //             if(i>=1) b=asteroids[i-1];
// //             if(a<0 && b>0 && abs(a)<b){
// //                 st.pop();
// //                 st.push(b); i--;
// //             }else if(a<0 && b>0 && abs(a)>b){
// //             }else if(a<0 && b>0 && abs(a)==b){
// //                 st.pop(); i--;
// //             }else{
// //                 st.push(b); i--;
// //             }
// //             i--;
// //         }
// //         // cout<<"*"<<endl;
// //         vector<int> arr;
// //         while(!st.empty()){
// //             arr.push_back(st.top());
// //             st.pop();
// //         }
// //         return arr;
// //     }
// // };

// class Solution {
// public:
//     vector<int> asteroidCollision(vector<int>& asteroids) {
//         stack<int> st;
//         int i=0;
//         st.push(asteroids[i]);
//         while(i<asteroid.size()){ 
//             st.push(asteroids[i]);
//             int a=st.top();
//             cout<<a<<" "<<i<<endl;
//             int b;
//             if(i>=1) b=asteroids[i-1];
//             if(a<0 && b>0 && abs(a)<b){
//                 st.pop();
//                 st.push(b); i--;
//             }else if(a<0 && b>0 && abs(a)>b){
//             }else if(a<0 && b>0 && abs(a)==b){
//                 st.pop(); i--;
//             }else{
//                 st.push(b); i--;
//             }
//             i--;
//         }
//         // cout<<"*"<<endl;
//         vector<int> arr;
//         while(!st.empty()){
//             arr.push_back(st.top());
//             st.pop();
//         }
//         return arr;
//     }
// };