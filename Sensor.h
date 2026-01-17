#ifndef SENSOR_H
#define SENSOR_H

class Sensor {
public:
    Sensor(int trigPin, int echoPin);
    long readRawDistance();
    long readFilteredDistance();

private:
    int trig;
    int echo;
    long buffer[5];
    int index;
    bool filled;
};

#endif
