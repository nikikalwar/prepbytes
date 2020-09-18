//defining function
//defining methods outside of the class

class Car{
    public:
    int wheels;
    string color;
    string model;
    void drive();
    int distanceTravelled();
};

void Car::drive(){
    cout<<"driving the car"<<endl;
}

int Car::distanceTravelled(){
    return 1000;
}