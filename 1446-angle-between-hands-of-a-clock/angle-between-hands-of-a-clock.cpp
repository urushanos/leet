class Solution {
public:
    double angleClock(int hour, int minutes) {      
        //double angle;

        double minAngle = minutes*6;
        double hourAngle = hour*30 +minutes*0.5;

        //angle = abs(minAngle - hourAngle);

        if (abs(minAngle - hourAngle) >180) return 360-abs(minAngle - hourAngle);
        else return abs(minAngle - hourAngle);
    }
};