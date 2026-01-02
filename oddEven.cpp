#include <iostream>


constexpr bool isEven(int x){

    return x%2 == 0;
       
}


int main(){

    std::cout << "Enter a Integrer: ";
    
    int x{};
    std::cin >> x;
    if (isEven(x) == true){

        std::cout << x << " is Even\n";
    }
    else{
        std::cout << x << " is Odd\n";
    }


    return 0;
}