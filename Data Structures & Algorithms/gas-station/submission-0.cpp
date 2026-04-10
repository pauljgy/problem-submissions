class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
    
        int n = gas.size();

        int total_gas = std::accumulate(gas.begin(), gas.end(), 0);
        int total_cost = std::accumulate(cost.begin(), cost.end(), 0);

        if (total_gas < total_cost)
            return -1;

        for (int pos = 0; pos < n; pos++) {
            int total = 0; 
            bool trip_success = true;

            for (int j = 0; j < n; j++) {
                if (total < 0) {
                    trip_success = false;
                    break;
                }

                int move = (pos + j) % n;

                total += gas[move] - cost[move];
            }

            if (trip_success)
                return pos;
        }
    }
};
