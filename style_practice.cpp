#include<iostream>

using namespace std;

/*This class performs methematical computations on two variables (x & y)*/
class Calculator {
public:
    int constant1, constant2;
    
    void sumTwoConstants() {
        constant1 = 10;
        constant2 = 20;
        int result = constant1 + constant2;
        cout<<"result is " << result << endl;
        // print output depends on the result size
        if(result > 25) {
            cout << "big number" << endl;
        }
        else {
            cout << "small number!" << endl;
        }
    }
};

int main() {
    Calculator calculator;
    calculator.sumTwoConstants();
    return 0;
}
