#include <iostream>
#include <vector>

template <typename T> std::vector<bool> two_vectors(std::vector<T> vec1, std::vector<T> vec2)
{
    bool elem = false;
    std::vector<bool> result;
    for(auto m : vec2)
    {
        for(auto n : vec1)
        {
            if (m == n)
                elem = true;
            continue;
        }
        result.push_back(elem);
        elem = false;
    }
    return result;
}

int main () 
{
    std::vector<int> my_int_vec_1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::vector<int> my_int_vec_2 = {4, 5, 6, 8, 10, 15};

    std::vector<bool> result = two_vectors<int>(my_int_vec_1, my_int_vec_2);

    std::cout << "Vector<int>: ";
    for(int i=0; i< result.size(); ++i)
        std::cout << result[i] << " ";
    std::cout << std::endl;

    std::vector<std::string> my_str_vec1 = {"Name", "Username", "Last Name", "Age"};
    std::vector<std::string> my_str_vec2 = {"Age", "Country", "Name", "Username"};

    std::vector<bool> result2 = two_vectors<std::string>(my_str_vec1, my_str_vec2);

    std::cout << "Vector<string>: ";
    for(int i=0; i<result2.size(); ++i)
        std::cout << result2[i] << " ";
    std::cout << std::endl;

    std::vector<float> my_float_vec_1 = {1.1, 1.5, 1.6, 1.7, 2, 2.5};
    std::vector<float> my_float_vec_2 = {1.1, 1.5, 1.6, 1.7, 2, 2.5};

    std::vector<bool> result3 = two_vectors<float>(my_float_vec_1, my_float_vec_2);

    std::cout << "Vector<float>: ";
    for(int i=0; i<result3.size(); ++i)
        std::cout << result3[i] << " ";
    std::cout << std::endl;

    std::vector<char> my_char_vec1 = {'a', 'b', 'c', 'd', 'e'};
    std::vector<char> my_char_vec2 = {'a', 'b', 'c', 'd', 'e', 'f'};
    std::vector<bool> result4 = two_vectors<char>(my_char_vec1, my_char_vec2);

    std::cout << "Vector<char>: ";
    for(int i=0; i<result4.size(); ++i)
        std::cout << result4[i] << " ";
    std::cout << std::endl;


    

}