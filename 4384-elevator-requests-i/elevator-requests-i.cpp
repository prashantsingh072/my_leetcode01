class Solution {
public:
    int elevatorRequests(int n, vector<int>& requests) {
        int current = 0;
        int time = 0;

       for (int i = 0; i < requests.size(); i++) {
    time += abs(current - requests[i]);
    current = requests[i];
}
return time;
    }
};