class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> st;
        // for(int i=0;i<asteroids.size();i++)
        // {
        //     if(asteroids[i]>0){
        //         st.push_back(asteroids[i]);
        //     }else{
        //         while(!st.empty() && st.top()>0 && st.top() && st.top()<abs(asteroids[i])){
        //             st.pop();
        //             break;
        //             if(!st.empty() && st.top()==abs(asteroids[i])){
        //                 st.pop();
        //             }else if(st.empty() || st.top()<0){
        //                 st.push(asteroids[i]);
        //             }
        //         }
        //     }
        // }
             for (int asteroid : asteroids) {

            if (asteroid > 0) {
                st.push_back(asteroid);
            }
            else {
                while (!st.empty() && st.back() > 0 &&
                       st.back() < abs(asteroid)) {
                    st.pop_back();
                }

                if (!st.empty() && st.back() == abs(asteroid)) {
                    st.pop_back();
                }
                else if (st.empty() || st.back() < 0) {
                    st.push_back(asteroid);
                }
            }
        }
        return st;
    }
};