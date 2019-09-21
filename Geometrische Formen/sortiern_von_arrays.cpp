#include <iostream>

#define NUMBERS 5

int main(){
int i, j, e, max = 0, temp = 0;
int arr[NUMBERS];

    std::cout << "Geben Sie bitte fuenf verschiedne Zahlen ein,\n um es sortieren zu lassen: " << std::endl;

    for(i = 0; i < NUMBERS; i++){
        std::cin >> arr[i];
    }

    for(i = 0; i < NUMBERS; i++)
    {
        for(j = 0; j < NUMBERS -1; j++)
        {
            if(arr[j] < arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    std::cout << "Das Sortieren ist: " << std::endl;

    for(e = 0; e < NUMBERS; e++)
        std::cout << arr[e] << std::endl;

return 0;
}
