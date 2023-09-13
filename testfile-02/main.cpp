//
//  main.cpp
//  testfile-02
//
//  Created by scott sheble on 9/12/23.
//

#include <iostream>
#include <iterator>
#include <vector>

const std::vector <int> default_contents = { 100, 200, 300, 0, 420, 0, 0, 0, 1, 1, 2, 3, 5, 8, 0, 1000 };

template <typename ITERATOR>
int range_sum(ITERATOR begin, ITERATOR end) {
    int sum = 0;
    for (auto it = default_contents.begin(); it != default_contents.end(); it++)
        sum += *it;
    return sum;
}

template <typename ITERATOR>
    double range_avg(ITERATOR begin, ITERATOR end) {
    double sum = 0;
    double avg = 0;
    int range_divisor = (int)default_contents.size();
    for (auto it = default_contents.begin(); it != default_contents.end(); it++)
        sum += *it;
    avg = sum / range_divisor;
    
    return avg;
    
}

template <typename ITERATOR>
auto range_maxval(ITERATOR begin, ITERATOR end) {
    double maxval = 0;
    for (auto it = default_contents.begin(); it != default_contents.end(); it++)
        if (maxval < *it)
            maxval = *it;

    return maxval;
    

}


int main()
{
    std::cout << "the range sum is: " << std::endl;
    std::cout << range_sum(default_contents.begin(), default_contents.end());
    std::cout << std::endl;
    std::cout << range_avg(default_contents.begin(), default_contents.end());
    std::cout << std::endl;
    std::cout << range_maxval(default_contents.begin(), default_contents.end());
    std::cout << std::endl;
    return 0;
}
