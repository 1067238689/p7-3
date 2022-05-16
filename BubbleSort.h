#ifndef CMAKE_CLION_CONAN_TEMPLATE_BUBBLESORT_H
#define CMAKE_CLION_CONAN_TEMPLATE_BUBBLESORT_H


#include "Sort.h"

class BubbleSort: public Sort {
public:

    vector<int> sort(vector<int> list) override;

};


#endif