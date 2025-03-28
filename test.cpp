#include <iostream>
//#include <cmath>
//#include <cstdlib>
//#include <ctime>
#include "helper.h"
#include <stack>
#include <queue>
#include <exception>
#include <vector>
#include <algorithm>
#include <map>
#include <unordered_map>

using namespace std;

int n1 = 1;

int sum1(int& n2)
{
    n2 = 10;
    return n1 + n2;
}
struct customPriorityQueue
{
    string content {};
    int priority {};

    customPriorityQueue(string content, int priority)
    {
        this->content = content;
        this->priority = priority;
    }
};

struct customCompare
{
    bool operator()(customPriorityQueue &a, customPriorityQueue &b)
    {
        return a.priority > b.priority;
    }
};

struct Node
{
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

int test() {

    cout << Helper<int>::add(1,2) << endl;
    cout << Helper<double>::add(1.1,2.2) << endl;

    // try
    // {
    //     int age =0;
    //     throw 1.1;
    // }
    // catch(const int& e)
    // {
    //     cout << e << '\n';
    // }
    // catch(const char* e)
    // {
    //     cout << e << '\n';
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    // catch(...)
    // {
    //     cout << "catch all unknown" << endl;
    // }

    

    // int * np;
    // np = &n1;
    
    // n1 = 2;
    // cout << "n1 = " << n1 << "," << &n1<< endl;
    // cout << "np = " << *np << "," << np<< endl;

    // priority_queue<customPriorityQueue, vector<customPriorityQueue>, customCompare> pq3 {};
    // pq3.push(customPriorityQueue("a", 1));
    // pq3.push(customPriorityQueue("b", 2));
    // pq3.push(customPriorityQueue("c", 3));

    // cout << "pq3 top:" << pq3.top().content << endl;

    int n22 = 2;
    cout << "sum:" << sum1(n22) << endl;
    // Helper::log("hello world");
    // cout << Helper::add(1,2) << endl;
    // Helper<int> helper(10);
    // cout << "sub:" << helper.sub(20,1) << " global:" << global << endl;
    // Helper* hp = &helper;
    // int sum = hp->add(1,2);
    //cout << "sum:" << sum << endl;

    vector<int> vv {1,2,3,4,5};
    vv.erase(vv.begin()+1);
    vv.erase(remove(vv.begin(), vv.end(), 3), vv.end());
    vv.clear();
    cout << "vv size:" << vv.size() << endl;

    map<string, int> map1 {};
    unordered_map<string, int> map2 {};
    map1["a"] = 1;
    map1["a"] = 2;
    map1["b"] = 3;
    map1["c"] = 4;

    auto bb = map1.find("a");
    if(bb == map1.end())
    {
        cout << "not found" << endl;
    }
    else
    {
        cout << bb->second << endl;
    }

    for (auto &&ele : map1)
    {
        cout << ele.first << ":" << ele.second << endl;
    }

    int arr[5][2]{};
    
    // string str {};
    // for (int i = 0; i < 5; i++)
    // {
    //     for(int j = 0; j < 2; j++)
    //     {
    //         cout << "arr[" << i << "] = " << arr[i][j] << endl;
    //         str += to_string(arr[i][j]) + ",";
    //     }
    // }

    // str.erase(str.length()-1,1);
    // cout << "str:" << str << endl;

    stack<int> st {};
    st.push(1);
    st.size();
    
    // queue<int> q {};
    
    // priority_queue<int> pq {};
    // pq.push(1);
    // pq.push(2);

    // cout << "pq top:" << pq.top() << endl;

    // priority_queue<int, vector<int>, greater<int>> pq2 {};
    // pq2.push(1);
    // pq2.push(2);

    // cout << "pq2 top:" << pq2.top() << endl;
    
    Helper<int> h1 {};
    h1.n = 1;
    Helper<int> h2 {};
    h2.n = 2;
    Helper h3 = h1 + h2;
    cout << "h3.n:" << h3.n << endl;

    return 0;

    // int number;
    // cin >> number;
    // switch (number)
    // {
    //     case 1:
    //         cout << "number = 1" << endl;
    //         break;
    //     case 2:
    //         cout << "number = 2" << endl;
    //         break;
    //     default:
    //         cout << "number = " << number << endl;
    //         break;
    // }

    // for(int i = 0; i < 10; i++)
    // {
    //     cout << "i = " << i << endl;
    // }

    // auto arr = {11,12,3,4,5};
    // int len = arr.size();
    // cout << "len = " << len << endl;

    // for (auto &&e : arr)
    // {
    //     cout << "xx i = " << e << endl;
    // }
    

    // int n1 = 5;
    // int n2 = 10;
    // int sum = n1 + n2;
    // cout << "sum = " << sum << endl;
    // cout << sum1() << endl;
    // std::cout << "hello world bbb" << std::endl;
    
    // const double pi = 3.14;

    // float f = 3.14f;
    // cout << "f = " << f << endl;

    // // cout << "engter you name: ";
    // // string name;
    // // string lastname;
    // // cin >> name >> lastname;

    // // cout << "Full name = " << name << " " << lastname << endl;

    // cout << floor(2.5) << endl;
    // cout << ceil(2.5) << endl;
    // cout << round(2.4) << endl;
    // cout << pow(2,3) << endl;
    // cout << sqrt(16) << endl;

    // long long ll = 1234567890123'456'789;
    // cout << ll << endl;
    // int ii {};
    // cout << ii << endl;
    // short ss = 12345;
    // cout << ss << endl;

    // auto bn = 0b1111111;
    // cout << bn << endl;
    // auto hn = 0xef;
    // cout << hn << endl;

    // srand(time(nullptr));
    // cout << "random:" << rand()%6 << endl;
    
    // return 0;
}
