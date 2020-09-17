#pragma once

class Dron{
public:
    //phi = [0,2*PI], psi = [0,PI]
    void Move(float radius, float phi, float psi);
    
private:
    //1- x-x0, 2 -y-y0, 3- z-z0
    int size[3];
    //Top left 
    int currentLocation[3];
    //[alpha, betta] , alpha = [0,2*PI], betta = [0,2*PI]
    float course[2];
    float speed[3];
    float acceleration[3];

};