#include <iostream>
#include <vector>
using namespace std;

//Books allocation Problem
/*
There are N books,each ith book has A[i] number of pages.
You have to allocate books to M number of students so that the maximum number
of pages allocated to a student is minimun.
*/
//////// CONDITIONS /////////
// Each books should be allocated to a student.
// Each student has to be allocated in least 1 book.
// Allotment should be in contiguos order.

// Calculate and return that minimum possible number.
// Return -1 if a valid argument is not posssible.
bool isValid(int midVal ,vector<int> books , int member){
    //[2,1,3,4]
    int tempVal =0;
    int count = 0;
    for (int i : books){
        tempVal = tempVal +i;
        if (tempVal > midVal){
            tempVal = i;
            count++;
        }
    }if (count >= member){
        return false;
    }
    return true;
}

int bookAllocation(vector<int> books, int member){
    int start = 0;
    int end = 0;
    int result = 0;
    if (books.size() < member){
        return -1;
    }

    for (int i : books){
        end = end +i;
    }
    while (start <= end){
        int midVal = (start + end) /2;
        if (isValid(midVal , books, member) == true){
            end = midVal -1;
            result = midVal;
        }else if (isValid(midVal , books ,member) == false){
            start = midVal +1;
        }
    }
    return result;
}

int main(){
    vector<int> books = {2,1,3,4};
    cout << bookAllocation(books , 2) << endl;
    return 0;
}