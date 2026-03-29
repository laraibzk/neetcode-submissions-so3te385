/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
    int minMeetingRooms(vector<Interval>& intervals) {
         if (intervals.empty()) return 0;

        int n = intervals.size();
        vector<int> starts(n), ends(n);

        // access .start and .end instead of [0] and [1]
        for (int i = 0; i < n; i++) {
            starts[i] = intervals[i].start;
            ends[i]   = intervals[i].end;
        }

        sort(starts.begin(), starts.end());
        sort(ends.begin(), ends.end());

        int rooms = 0, maxRooms = 0;
        int s = 0, e = 0;

        while (s < n) {
            if (starts[s] < ends[e]) {
                rooms++;
                s++;
            } else {
                rooms--;
                e++;
            }
            maxRooms = max(maxRooms, rooms);
        }

        return maxRooms;
    }
};
