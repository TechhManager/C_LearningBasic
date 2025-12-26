#include <iostream>


double takeInput(){
    std::cout << "Enter a double value";
    double x {};
    std::cin >> x ;

    return x;
}


char chooseSymbal(){

    std::cout << "Enter +, -, *, or /: ";
    char symbal;
    std::cin >> symbal;

    return symbal;
}

void calc(double firstNum, double secondNum, char symbal){

    double output{};

    if (symbal == '+')
        output = firstNum + secondNum;
    else if (symbal == '-')
        output = firstNum - secondNum;
    else if (symbal == '*')
        output = firstNum * secondNum;
    else if (symbal == '/')
        output = firstNum / secondNum;
    else
        return;


    std::cout << firstNum << ' ' << symbal << ' ' << secondNum << ' ' << " is" << output;
}


int main () {

    double firstNum{takeInput()};
    double secondNum{takeInput()};

    char symbal{chooseSymbal()};

    calc (firstNum,secondNum,symbal);

    return 0;
}