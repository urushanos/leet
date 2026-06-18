class Solution {
public:
    double angleClock(int hour, int minutes) {
        double angle;
        double factor=0.5;

        double minAngle = minutes*6;
        double hourAngle = hour*30 +minutes*factor;

        angle = abs(minAngle - hourAngle);

        if (angle >180) return 360-angle;
        else return angle;
    }
};