//
//  main.cpp
//  testfile-02
//
//  Created by scott sheble on 9/12/23.
//

#include <iostream>
#include <iterator>
#include <vector>
#include <iomanip>

const std::vector <int> default_contents = { 100, 200, 300, 0, 420, 0, 0, 0, 1, 1, 2, 3, 5, 8, 0, 1000 };

template <typename ITERATOR>
int range_sum(ITERATOR begin, ITERATOR end) {
    int sum = 0;
    for (auto it = begin; it != end; it++)
        sum += *it;
    return sum;
}

template <typename ITERATOR>
    double range_avg(ITERATOR begin, ITERATOR end) {
    double sum = 0;
    double avg = 0;
    int range = 0;
    for (auto it = begin; it != end; it++)
            range += 1;
        
    for (auto it = begin; it != end; it++)
        sum += *it;
        
    avg = sum / range;
    
    return avg;
    
}

template <typename ITERATOR>
auto range_maxval(ITERATOR begin, ITERATOR end) {
    double maxval = 0;
    for (auto it = begin; it != end; it++)
        if (maxval < *it)
            maxval = *it;

    return maxval;
    

}

template <typename ITERATOR>
auto range_minval(ITERATOR begin, ITERATOR end) {
    double minval = 0;
    for (auto it = begin; it != end; it++)
        if (minval > *it)
            minval = *it;

    return minval;
}

template <typename ITERATOR>
int range_count(ITERATOR begin, ITERATOR end) {
    int range = 0;
    for (auto it = begin; it != end; it++)
        range += 1;
    
    return range;
  
}

template <typename ITERATOR>
void print_range(std::ostream & ost, ITERATOR begin, ITERATOR end, const std::string &pre, const std::string &sep, const std::string &post, int width) {
    std::setw(width);
    ost << pre;
    for (auto it = begin; it != end; it++)
        ost << *it << sep;
    ost << post;
}


int main()
{
    std::cout << "the range sum is: " << std::endl;
    std::cout << range_sum(default_contents.begin(), default_contents.end());
    std::cout << std::endl;
    std::cout << "the range average is: " << std::endl;
    std::cout << range_avg(default_contents.begin(), default_contents.end());
    std::cout << std::endl;
    std::cout << "the range maxval is: " << std::endl;
    std::cout << range_maxval(default_contents.begin(), default_contents.end());
    std::cout << std::endl;
    std::cout << "the range minval is: " << std::endl;
    std::cout << range_minval(default_contents.begin(), default_contents.end());
    std::cout << std::endl;
    std::cout << "the range count is: " << std::endl;
    std::cout << range_count(default_contents.begin(), default_contents.end());
    std::cout << std::endl;
    std::cout << "the printed range is: " << std::endl;
    print_range(std::cout, default_contents.begin(), default_contents.end(), "{ ", ", ", " }\n", 0);
    std::cout << std::endl;
    
    return 0;
}
