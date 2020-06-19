#include <iostream>
#include <vector>
#include <algorithm>  
#include <math.h>
#include <iostream>
#include <vector>
#include <stdint.h>
#include <stdlib.h>
#include <bits/stdc++.h>

using std::vector;
using std::cin;
using std::cout;
using std::max;
using namespace std;

int64_t MaxPairwiseProduct(const vector<int>& numbers) {
    //int64_t product = 0;
    int index1 = 1;
    int index2;
    int n = numbers.size();
    for (int i = 1; i < n; ++i) {
        if (numbers[i] > numbers[index1]){
            index1 = i;
            //index1 = numbers[i];
        }
    }
   // std::
    swap(numbers[index1],numbers[n]);
    //if (index1 == 1){
        //int index2 = 2;
    //}
   // else{
       //int  index2 = 1;
    //}
    int index1 = 1;
    for (int j = 1; j < n-1; ++j){
        if(( numbers[j] > numbers[index1])) {
        //if ((numbers[j] != numbers[index1]) && (numbers[j] > numbers[index2])) {
            index2 = j;
        }

    }
    
    int64_t product = (int64_t)numbers[index1] * numbers[index2];
    return product;
    //return numbers[index1] * numbers[index2];
}

int main() {
    int n;
    cin >> n;

    vector<int> numbers(n);
    //for (int i = 1; i <= k; ++i) {
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
        numbers[i];
    }
    int64_t product = MaxPairwiseProduct(numbers);
    cout << product << "\n";

    return 0;
}
