/**
 * @brief   Calculate % of even, odd, and zero integers in a given array
 *
 * @details Given an array, arr, return the follow:
 *          -> a decimal representing the fraction of positive numbers in the array compared to array size
 *          -> a decimal representing the fraction of negative numbers in the array compared to array size
 *          -> a decimal representing the fraction of zeros in the array compared to array size
 *
 * @example Input of '6' for array size, then arr = [ -4, 3, -9, 0, 4, 1 ]
 *          Ratios would be:
 *              3 positive -> 3/6 = 0.500000
 *              2 negative -> 2/6 = 0.333333
 *              1 zero -> 1/6 = 0.166667
 */


#include <iostream>
#include <vector>

using namespace std;

vector<string> split_string(string);

void plusMinus(vector<int> theDataSet) {
    double sumPositives{0};
    double sumNegatives{0};
    double sumZeros{0};
    for (int i{0}; i < theDataSet.size(); ++i) {
        if (theDataSet[i] == 0) {
            sumZeros++;
        }
        else if (theDataSet[i] < 0) {
            sumNegatives++;
        }
        else {
            sumPositives++;
        }
    }
    cout << (sumPositives / theDataSet.size()) << endl;
    cout << (sumNegatives / theDataSet.size()) << endl;
    cout << (sumZeros / theDataSet.size()) << endl;
}

// code below given with requirements
int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split_string(arr_temp_temp);

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    plusMinus(arr);

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}