struct CustomComparator {
    bool operator()(const pair<int, string>& a, const pair<int, string>& b) const {
        // Compare ratings in descending order
        if (a.first != b.first) {
            return a.first < b.first;  // Note the use of less than for descending order
        }
        
        // If ratings are the same, compare lexicographically smaller name string
        return a.second > b.second;  // Note the use of greater than for lexicographical order
    }
};


class FoodRatings {
public:
    // map<string, priority_queue<pair<int,string>>> CuisineFoodMap;
    map<string, priority_queue<pair<int, string>, vector<pair<int, string>>, CustomComparator>> CuisineFoodMap;
    map<string,int> foodRatingMap;
    map<string,string> foodCuisineMap;
    FoodRatings(vector<string>& foods, vector<string>& cuisines, vector<int>& ratings) {
        for(int i=0;i<foods.size();i++){
            foodRatingMap[foods[i]]=ratings[i];
            foodCuisineMap[foods[i]]=cuisines[i];
            CuisineFoodMap[cuisines[i]].push({ratings[i],foods[i]});
        }
    }
    
    void changeRating(string food, int newRating) {
        CuisineFoodMap[foodCuisineMap[food]].push({newRating,food});
        foodRatingMap[food]=newRating;
    }
    
    string highestRated(string cuisine) {
        while(foodRatingMap[CuisineFoodMap[cuisine].top().second]!=CuisineFoodMap[cuisine].top().first)
            CuisineFoodMap[cuisine].pop();
        return CuisineFoodMap[cuisine].top().second;
    }
};

/**
 * Your FoodRatings object will be instantiated and called as such:
 * FoodRatings* obj = new FoodRatings(foods, cuisines, ratings);
 * obj->changeRating(food,newRating);
 * string param_2 = obj->highestRated(cuisine);
 */