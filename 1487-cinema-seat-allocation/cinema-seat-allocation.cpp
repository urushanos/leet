class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {

        //can max allocate n*2 - 2 per row max
        long long ans = n*2;
        int k = reservedSeats.size(); //num of rows occupied
        unordered_map <int, unordered_set<int>> seats; //each row -> the seat occupied

        for(int i=0; i<k; i++){
            seats[reservedSeats[i][0]].insert(reservedSeats[i][1]);
        }

        for(auto &[row, seat]: seats){
            bool left=true;
            bool middle = true;
            bool right = true;

            for(int i =2; i<=5; i++){
                if(seat.count(i)){
                    left = false;
                    break;
                }
            }

            for(int i=4; i<=7; i++){
                if(seat.count(i)){
                    middle=false;
                    break;
                }
            }

            for(int i=6; i<=9; i++){
                if(seat.count(i)){
                    right = false;
                    break;
                }
            }
            if(left && right) {}
            else if(left||middle||right){
                ans -= 1;
            }
            else{
                ans -=2;
            }
        }
        return ans;
    }
};