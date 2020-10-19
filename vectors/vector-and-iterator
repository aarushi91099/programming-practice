// basics of vectors and iterators

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void printVector(vector<int> arr) {

    // array loop for array -> for i in arr
    for (int i: arr) {
        cout<<i<<" ";
    }
    cout<<endl;
}
int findSumOfVector(vector<int> &arr) {
    int sum = 0;
    for (const int j: arr) {
        sum += j;
    }
    return sum;
}

int main() {
    vector<int> arr(5); //a vector of length 5
    printVector(arr); // 0 0 0 0 0 
    arr.resize(10); // resizing vector to length 10
    printVector(arr); //0 0 0 0 0 0 0 0 0 0 

    vector<int> arrTwo{ 1, 2, 3, 4, 5 };
    printVector(arrTwo); // 1 2 3 4 5

    arrTwo.resize(4);
    printVector(arrTwo); // 1 2 3 4 

    // using begin and end
    // begin returns an iterator poiting to the begging index of vector
    // using * we can deference and extract the value
    cout<<*arr.begin()<<endl; // value at first index of array

    // end returns an iterator as well. end returns a iterator which points to a value after the end of vector
    cout<<*arr.end()<<endl; // garbage value

    //vector at
    // we can access values in vector using the index of the it method like
    cout<<arrTwo[0]<<" "<<arrTwo.at(0)<<endl; // 1 1
    cout<<endl;

    // using iterator -> iterator initialization, we have to describe what type of value this iterator will point to., taking example of vector
    vector<int>::iterator it1 = arrTwo.begin();
    // now it1 is pointing at the beginning of the vector

    // making a copy of interator -> deep copy
    vector<int>::iterator it3 = it1;

    while (it1 != arrTwo.end()) {
        cout<<*it1<<endl;
        it1++;
    } // 1 2 3 4
    cout<<"end"<<endl;

    for (auto loopIt=it3; loopIt != arrTwo.end(); loopIt++) {
        cout<<*loopIt<<endl;
    }
    cout<<"end"<<endl;
    // we can do something like this too
    // string is also a vector, so any method or function that can be applied to string can also be applied to vector similarly.
    string x = "keshav kabra";
    string::iterator it2 = x.begin();

    // using algorithm to sort -> not a vector method
    vector<int> unSortedArray{ 3, 2, 1, 9, 3 };
    vector<int>::iterator unSortedArrayBeginIterator = unSortedArray.begin();
    vector<int>::iterator unSortedArrayEndIterator = unSortedArray.end();

    // sort function takes in iterators for begging and end to sort
    //  both the implementations will result same
    sort(unSortedArray.begin(), unSortedArray.end());
    printVector(unSortedArray); // 1 2 3 3 9
    sort(unSortedArrayBeginIterator, unSortedArrayEndIterator);
    printVector(unSortedArray); // 1 2 3 3 9

    // we can specify sort order too
    sort(unSortedArrayBeginIterator, unSortedArrayEndIterator, greater<int>());
    printVector(unSortedArray); // 9 3 3 2 1

    // using reverse
    sort(unSortedArrayBeginIterator, unSortedArrayEndIterator);
    reverse(unSortedArrayBeginIterator, unSortedArrayEndIterator);
    printVector(unSortedArray); // 9 3 3 2 1

    // using push and pop -> vector have push_back and pop_back for stack operations
    // push_back add new element increasing the size of vector by 1
    arr.resize(0);
    arr.push_back(1);
    printVector(arr); //1

    arr.push_back(2);
    printVector(arr); //1 2

    arr.pop_back();
    printVector(arr); //1

    // using insert in vector
    arr.resize(3);
    arr.insert(arr.begin()+1, 4);
    printVector(arr); //1 4 0 0

    // capacity and size of vector
    cout<<arr.size()<<endl; // 4
    cout<<arr.capacity()<<endl; // 10

    arr.resize(11);
    cout<<arr.size()<<endl; // 11
    cout<<arr.capacity()<<endl; // 11

    arr.resize(4);
    cout<<arr.size()<<endl; // 4
    cout<<arr.capacity()<<endl; // 11

    // NOTE -> when we resize size of the vector changes and capacity of vector  only changes when we assign value greater than the present capacity

    // erase one element from vector
    printVector(arr); //1 4 0 0
    arr.erase(arr.begin()+1, arr.begin()+2); //(inclusive, exclusive)
    printVector(arr); //1 0 0

    // clear the vector
    arr.clear();
    printVector(arr); //1 0 0
    cout<<"end"<<endl;

    // use vector as reference
    //NOte -> vector cannot be used with pointers, only references are applicable for vector

    vector<int> seriesOfSquares{ 1, 4, 9, 16, 25 };
    cout<<findSumOfVector(seriesOfSquares)<<endl;
    // use min_element and maxx_element
    cout<<*min_element(seriesOfSquares.begin(), seriesOfSquares.end())<<endl; // 1
    cout<<*max_element(seriesOfSquares.begin(), seriesOfSquares.end())<<endl; // 25

    // front and back
    cout<<seriesOfSquares.front()<<endl; // 1
    cout<<seriesOfSquares.back()<<endl; // 25

    // initializing 2d array
    vector<vector<int>> arrTwoD(5, vector<int>(4, 0)); //5x4
    for (vector<int> q: arrTwoD) {
        for (int i: q) {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    // output
    /*
        0 0 0 0
        0 0 0 0
        0 0 0 0
        0 0 0 0
        0 0 0 0
    */
    return 0;
}
