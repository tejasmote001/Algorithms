#include <iostream>
#include <array>

template<class Class, size_t N>
void insertion_sort(std::array<Class, N>& array) {
    for (int i = 1; i < N; i++) {
        int key = array.at(i);
        int j = i - 1;
        
        while (j > -1 && array.at(j) > array.at(j + 1)) {
            array.at(j + 1) = array.at(j);
            j--;
        }
        array.at(j + 1) = key;
    }
}

template<class Class, size_t N>
void display_array(std::array<Class, N>& array) {
    for (int i = 0; i < N; i++) {
        std::cout << array.at(i) << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::array<float, 6> array = {5.6, 2.4, 3.1, 2.9, 3.7, 4.2};
    display_array(array);
    insertion_sort(array);
    display_array(array);
    return 0;
}
