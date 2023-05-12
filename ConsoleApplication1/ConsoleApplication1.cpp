
#include <iostream>
using namespace std;

string input_element() {
    string element;
    cout << "Enter the element to be searched: ";
    cin >> element;
    return element;
}

void binary_search(string arr[], string first_name, string last_name, string element, int size) {
    int lowerbound = 0;
    int upperbound = size - 1;

    while (lowerbound <= upperbound) {
        int mid = (lowerbound + upperbound) / 2;

        if (arr[mid] == element) {
            cout << "Found" << endl;
            return;
        }

        if (element < arr[mid]) {
            upperbound = mid - 1;
        }
        else {
            lowerbound = mid + 1;
        }
    }

    cout << "Not Found" << endl;
}

int main() {
    string nickname = "Shabit";
    string first_name = "Shabit";
    string last_name = "Hossain";

    int max_length = 30;
    string arr[30];

    string element = input_element();
    binary_search(arr, first_name, last_name, element, max_length);

    return 0;
}






