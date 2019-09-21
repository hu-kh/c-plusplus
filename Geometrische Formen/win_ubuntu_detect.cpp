#include <iostream>
#define WIN

void sysPause();

int main(){

    std::cout << "@test";
    sysPause();

return 0;
}

void sysPause(){
    #ifdef WIN
       system("pause");
    #endif

    #ifndef WIN
      system("clear");
    #endif
}