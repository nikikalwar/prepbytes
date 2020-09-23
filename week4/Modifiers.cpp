//modifiers used in classes
//access modifiers decides how this particular part will be accessible to rest of the rest of the code outside the class

//public
//private
//protected

//Public modifiers
/*
class Car{
    public:
    int wheels;

    public:
    void drive(){
        cout<<"Driving";
    }
};

Class vehicle{
    public:void drive();
    Car car1;
    car1.drive();//accessible by creating a object of car

}
*/
//private modifier
/*
class Car{
    private:
    int wheels;//declaring member variables with private modifier can be accessed in read only mode

   private:
    void drive(){
        cout<<"Driving";
    }
};

Class Vehicle{
    public:
    void drive();
    Car car1;
    car1.drive();//since we have private access modifier this function is not accessible //error

}
*/

//Protected modifiers:

class Car {
    protected:
    int wheels;
    
    private:
    void drive();
};

class Mercedes:public Car {
    public:
    int getWheels(){
        return wheels;
    }
};
//protected members can only be accessed by the class itself,inherited class or the child class of the parent class

//Initialising the members of a class

class Car {

    public:
    int wheels;
    int color;
    string model;
void drive();
};

Car car1;
car1 init(4,"red","new");//this is one method for initialising the members

//Constructors
//have same name as class name
//dont have any return type
//cannot be called like other member functions
//automatcally called when during object creation

//Default constructor 
//parameterized constructors

class Car {
    private:
    int wheels;
    string color;
    string model;

    public:
    Car(int n1,string n2,string n3){
        wheels=n1;
        color=n2;
        model=n3;
    }
}
  Car cars(8,"red","xyz");//implicit calling of constructor

  Car car1=Car(8,"Red","xyz");








