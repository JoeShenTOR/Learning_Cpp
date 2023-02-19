#include <iostream>


int getMax(int numbers[], int size) {
    int max = numbers[0];
    for (int i = 1; i < size; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }
    return max;
}

int getMin(int numbers[], int size) {
    int min = numbers[0];
    for (int i = 1; i < size; i++) {
        if (numbers[i] < min) {
            min = numbers[i];
        }
    }
    return min;
}

void getMinAndMax(int numbers[], int size, int* max, int* min) {
    
    for (int i = 1; i < size; i++) {
        if (numbers[i] > *max) {
            *max = numbers[i];
        }
        else if (numbers[i] < *min) {
            *min = numbers[i];  
        }
    }

}


int main(void) {
    int numbers[5] = { 5,4,-2,29,6 };
    int max = numbers[0];
    int min = numbers[0];
    std::cout << "Max is: " << getMax(numbers, 5) << std::endl;
    std::cout << "Min is: " << getMin(numbers, 5) << std::endl;

    getMinAndMax(numbers, 5, &max, &min);
    std::cout << "Max is: " << max << std::endl;
    std::cout << "Min is: " << min << std::endl;

    return 0;
}