/* 
    Learning C++
    While loop
 */
#include <vector>
#include <iostream>
#include <string>

using namespace std;

vector<int> numbers = {15,16,31,37,42,43};

int main()
{
    auto ptr = numbers.begin();

    while(ptr != numbers.end()){
        cout << *ptr << " ";
        ptr = next(ptr, 1);
    }

    int i = 0;
    do{
        cout << numbers[i] << " ";
        i++;
    } while (i < numbers.size());

    cout << endl;

    return (0)
}