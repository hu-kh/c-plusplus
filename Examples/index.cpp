#include <iostream>
//using namespace std;
#include <string>
void menu();

int main(){
    menu();
    return 0;
}

void menu(){
    std::cout << "choose:" << std::endl;
    std::cout << "1.    clear" << std::endl;
    std::cout << "2.    ls -a" << std::endl;
    std::cout << "3.    top" << std::endl;

    signed command;
    std::cin >> command;
    switch(command){
        case 1: system("clear"); break;
        case 2: system("ls -a"); break;
        case 3: system("top"); break;

        default: std::cout << "Humm!" << std::endl;
    }
}
