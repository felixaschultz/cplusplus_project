/* 
    Learning C++
    While loop
 */
#include <vector>
#include <iostream>
#include <string>

using namespace std;

vector<int> numbers = {15,16,31,37,42,43};
float average;

int main()
{
    average = 0.0f;
    for (int i = 0; i < numbers.size(); i++)
        average += numbers[i];
    average /= number.size();
    cout << "Average: " << average << endl;

    average = 0.0f;
    for(auto x : numbers)
        average += x;
    average /= number.size();
    cout << "Average: " << average << endl;

    return (0)
}