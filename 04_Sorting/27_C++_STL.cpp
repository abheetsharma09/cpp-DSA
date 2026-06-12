#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include <deque>
#include <stack>
#include <queue>
#include <string>
#include <unordered_map>
#include <map>
#include <set>
#include <unordered_set>
using namespace std;

// STL - Standard Template Library
/*
- Containers(V.V.I)
- Iterators
- Algorithm
- Functors
*/
// //////////////////////// TYPES OF CONTAINERS
// - Sequencial Container

void sequencialContainer(){
// - Vector
    vector<int> vec = {1,2,3,4,5};
    // FORWARD LOOP
    // vector<int>::iterator itr; [if not auto]
    for(auto itr = vec.begin(); itr != vec.end(); itr++){
        cout << *(itr) << endl;
    }
    cout << "----------------" << endl;
    // REVERSE LOOP
    for(auto itr2 = vec.rbegin(); itr2 != vec.rend(); itr2++){
        cout << *(itr2) << endl;
    }

// - List[It acts as a doubly linked list means we can push from front and back]
// NOTE - Vector acts as a Doubly Linked List
// Random access of Value is not allowed in the List
    list<int> lst1 = {1,2,3,7,8,9};

// - Deque - Dynamic array
    deque<int> deque1 = {1,2,3,4,5};

// - Pairs
    pair<char , int> nums1 = {'a',2};
    pair<int , pair<int, char>> nums2 = {2, {24, 'b'}};
    pair<vector<int> , vector<int>> nums3 = {{1,2,3} ,{2,3,4}};
    vector<pair<int,int>> nums4 = {{1,0} ,{9,2} ,{3,8} ,{4,7}};
    //output
    cout << nums1.first << endl;
    cout << nums2.second.second << endl;
    for(int i :nums3.second){
        cout << i << endl;
    }
}

// - Non-Sequencial Container
void non_sequencialContainer(){
    // - Stack[Last Input | First Output | Data Structure]
    cout << "Stack" << endl;
    stack<int> S;
    S.push(1);
    S.push(2);
    S.push(3);
    S.push(4);

    while(!S.empty()){
        cout << S.top() << endl;
        S.pop();
    }

    cout << "Queue" << endl;
    // - Queue
    queue<int> Q;
    Q.push(1);
    Q.push(2);
    Q.push(3);
    Q.push(4);

    while(!Q.empty()){
        cout << Q.front() << endl;
        Q.pop();

    }
    cout << "Priority Queus" << endl;
    // priority_queue its shows the element first who is greater
    priority_queue<int> p_Q;
    p_Q.push(1);
    p_Q.push(2);
    p_Q.push(3);

    while(!p_Q.empty()){
        cout << p_Q.top() << endl;
        p_Q.pop();
    }

    cout << "MAP" << endl;
    map<string, int> M;
    M["key"] = 100;
    M["var"] = 90;
    M["fing"] = 20;
    M.emplace("value" , 25);
    //to print map 
    for(auto i : M){
        cout << i.first << " : " << i.second << endl;
    }

    //multi_map - it can store multiple key value pairs
    multimap<string,int> m_M;
    //unordered_map
    unordered_map<string,int> m;

    //SET - only takes uniques value
    cout << "SET" << endl;
    set<int> se;
    unordered_set<int> u_se;
    se.insert(1);
    se.insert(5);
    se.insert(3);

    se.insert(1);
    se.insert(2);
    for(auto i : se){
        cout << i << endl; //this ingores the un uniques values
    }

}

int main(){
    // sequencialContainer();
    non_sequencialContainer();
    return 0;
}