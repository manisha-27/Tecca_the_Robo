// class SeatManager {
// public:
//     vector<bool> seats;
//     // map<string,priority_queue<int,vector<int>,greater<int>>> seatManage;
//     map<string, variant<priority_queue<int, vector<int>, greater<int>>, set<int>>> seatManage;
//     SeatManager(int n) {
//         seats=vector<bool>(n+1,true);   // 0=>waste  true=unreserve
//         seatManage["unreserve"] = priority_queue<int>();
//         seatManage["reserve"] = vector<int>();
//         for(int i=1;i<=n;i++){
//             seatManage["unreserve"].push(i);
//         }
//     }
    
//     int reserve() {
//         while(!seatManage["unreserve"].empty() && seats[seatManage["unreserve"].top()])
//             seatManage["unreserve"].pop();
//         int n=seatManage["unreserve"].top();
//         seatManage["unreserve"].pop();
//         seats[n]=false;
//         seatManage["reserve"].insert(n);
//         return n;
//     }
    
//     void unreserve(int seatNumber) {
//         auto pos=seatManage["reserve"].find(seatNumber);
//         seatManage["reserve"].erase(pos);
//         seatManage["unreserve"].push(seatNumber);
//         seats[seatNumber]=true;
//     }
// };

class SeatManager {
public:
    priority_queue<int,vector<int>, greater<int>> minSeat;
    SeatManager(int n) {
        for(int i=1;i<=n;i++)
            minSeat.push(i);
    }
    
    int reserve() {
        int n=minSeat.top();
        minSeat.pop();
        return n;
    }
    
    void unreserve(int seatNumber) {
        minSeat.push(seatNumber);
    }
};
// class SeatManager {
// public:
//     priority_queue<int, vector<int>, greater<int>> availableSeats;
//     SeatManager(int n) {
//         // Initially all seats are unreserved.
//         for (int i = 1; i <= n; i++) {
//             availableSeats.push(i);
//         }
//     }

//     int reserve() {
//         int m = availableSeats.top();
//         availableSeats.pop();
//         return m;
//     }

//     void unreserve(int seatNumber) {
//         // Push the unreserved seat in the min heap.
//         availableSeats.push(seatNumber);
//     }
// };

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */