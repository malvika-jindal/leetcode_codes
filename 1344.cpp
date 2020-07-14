class Solution {
public:
    double angleClock(int hour, int minutes) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        double h=(hour%12*60+minutes)*0.5;
        double m=minutes*6;
        return min(abs(h-m),(360-abs(h-m)));
    }
};
