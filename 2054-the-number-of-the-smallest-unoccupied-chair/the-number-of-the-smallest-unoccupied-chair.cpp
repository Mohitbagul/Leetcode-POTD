class Solution {
public:
    int smallestChair(vector<vector<int>>& times, int targetFriend) {
        int targetArrival = times[targetFriend][0]; // target friend's arrival time
        int targetDeparture = times[targetFriend][1]; // target friend's leaving time

        // Sort based on arrival times
        sort(times.begin(), times.end());

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        set<int> availableSeats;
        int nextSeat = 0; // counter for the next available new seat

        // Iterate over each friend
        for (const auto& time : times) {
            int arrival = time[0];
            int departure = time[1];

            // Release seats of friends who have left before the current friend's arrival
            while (!pq.empty() && pq.top().first <= arrival) {
                availableSeats.insert(pq.top().second); // Add seat to available set
                pq.pop();
            }

            int currentSeat;
            if (!availableSeats.empty()) {
                currentSeat = *availableSeats.begin(); // Reuse the smallest available seat
                availableSeats.erase(availableSeats.begin());
            } else {
                currentSeat = nextSeat++; // Assign a new seat if no seats are available
            }

            pq.push({departure, currentSeat}); // Track departure time and seat

            // Check if current friend is the target friend
            if (arrival == targetArrival && departure == targetDeparture) {
                return currentSeat;
            }
        }

        return 0; // This return is just a placeholder and will never be reached
    }
};
