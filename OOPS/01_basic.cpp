#include<iostream>
using namespace std;
class Animal{
    private:
    int Weight;
    public:
    int age;
    string name;

    void eat(){
        cout<<"eating" <<endl;
    }
    int getWeight(){
        return Weight;
    }
    void setWeight(int w){
        Weight=w;
    }
};
int main(){
    Animal ramesh;
    ramesh.age=12;
    ramesh.name="Lion";
    cout<<"Age of ramesh is: "<<ramesh.age<<endl;
    cout<<"Name of ramesh is:"<<ramesh.name<<endl;
    ramesh.eat();
    ramesh.setWeight(101);
    cout<<"Weight "<<ramesh.getWeight()<<endl;
    
  return 0;
}