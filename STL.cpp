#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <list>
#include <map>
#include <set>
#include <functional>
#include <algorithm>
using namespace std;
// Maps Are For Arrays
template <class T>
void displayVector(vector<T> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
void vectors(void)
{
    vector<int> v1(3, 5);
    vector<int> v2(v1);
    for (int i = 11; i <= 15; i++)
        v1.push_back(i);
    vector<int>::iterator itr = v1.begin();
    displayVector(v1);
    // v1.pop_back();
    v1.insert(itr, 3, 250);
    displayVector(v1);
    cout << v1.size() << endl;
    cout << v1.at(3) << endl;
    cout << v1.front() << endl;
    cout << v1.back() << endl;
    v1.clear();
    cout << v1.size() << endl;
}
// Maps Are For Linked List
template <class T>
void displayList(list<T> l)
{
    list<int>::iterator itr;
    for (itr = l.begin(); itr != l.end(); itr++)
    {
        cout << *itr << " ";
    }
    cout << endl;
}
void lists(void)
{
    list<int> l1;
    l1.push_back(101);
    l1.push_back(102);
    l1.push_back(103);
    l1.push_back(104);
    l1.push_back(105);
    displayList(l1);
    // l1.pop_back();
    // displayList(l1);
    cout << "List l2" << endl;
    list<int> l2(9, 250);
    displayList(l2);
    list<int>::iterator it;
    int i = 44;
    for (it = l2.begin(); it != l2.end(); it++)
    {
        *it = i + 1;
        i--;
    }
    l2.push_back(111);
    l2.pop_back();
    l2.pop_front();
    l2.remove(50);
    l2.push_back(5);
    l2.push_back(8);
    l2.push_back(5);
    l2.push_back(9);
    l2.push_back(10);
    l2.remove(5);
    displayList(l2);
    l1.swap(l2);
    displayList(l1);
    displayList(l2);
    l1.swap(l2);
    l1.merge(l2);
    l1.sort();
    displayList(l1);
    l1.reverse();
    displayList(l1);
}
// Maps Are For Key - Pair
template <class S, class T>
void displayMap(map<S, T> m)
{
    map<string, float>::iterator itr;
    for (itr = m.begin(); itr != m.end(); itr++)
    {
        cout << itr->first << " = " << itr->second << endl;
    }
    cout << endl
         << endl;
    for (itr = m.find("Jass"); itr != m.end(); itr++)
    {
        cout << itr->first << " = " << itr->second << endl;
    }
}
void maps(void)
{
    map<string, float> m1;
    m1["Sourav"] = 100.00;
    m1["Rajan"] = 50.05;
    m1["Maninder"] = 99.21;
    m1.insert({{"Varun", 96.55}, {"Harsh", 92.55}, {"Jass", 93.55}, {"Keshav", 97.55}, {"Dinesh", 95.20}});
    displayMap(m1);
    cout << "Size of Map : " << m1.size() << endl;
    cout << "Size of Max Size : " << m1.max_size() << endl;
    cout << "Size of Empty : " << m1.empty() << endl;
    cout << "Present or Not : " << m1.count("Sourav") << endl;
    m1.erase("Rajan");
    displayMap(m1);
}
void displayArray(int *arr)
{
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void functions(void)
{
    // int arr[] = {55, 2, 66, 77, 33, 99, 44};
    // displayArray(arr);
    // sort(arr, arr + 7, greater<int>());
    // displayArray(arr);
    vector<int> v;
    vector<int> V2(5, 250);
    v.push_back(88);
    v.push_back(44);
    v.push_back(99);
    v.push_back(55);
    v.push_back(66);

    displayVector(v);
    // displayVector(V2);
    // swap(v, V2);
    // displayVector(v);
    // displayVector(V2);
    // sort(v.begin(), v.end());
    // displayVector(v);
    // cout << binary_search(v.begin(), v.end(), 66) << endl;
    // cout << lower_bound(v.begin(), v.end(), 88) - v.begin() << endl;
    // cout << upper_bound(v.begin(), v.end(), 88) - v.begin() << endl;
    // string s = "ABCD";
    // reverse(s.begin(), s.end());
    // int a[] = {2, 3, 4, 5, 6, 7, 8, 9};
    // cout << s << endl;
    rotate(v.begin(), v.begin() + 2, v.end());
    displayVector(v);
    sort(v.begin(), v.end());
    displayVector(v);
}
template <class T>
void displayDque(deque<T> q)
{
    // deque<int>::iterator itr;
    for (auto itr = q.begin(); itr != q.end(); itr++)
        cout << *itr << " ";
    cout << endl;
}
void dequeue(void)
{
    deque<int> q;
    q.push_back(55);
    q.push_front(45);
    q.push_front(33);
    q.push_front(11);
    q.push_front(22);
    displayDque(q);
    q.erase(q.end() - 2, q.end());
    displayDque(q);
}
template <class T>
void displayStack(stack<T> ss)
{
    for (int i = ss.size(); ss.size() != 0; i--)
    {
        cout << ss.top() << " ";
        ss.pop();
    }
    cout << endl;
}
void stacks(void)
{
    stack<int> s;
    s.push(55);
    s.push(66);
    s.push(77);
    s.push(88);
    displayStack(s);
    // cout << s.top() << endl;
    // s.pop();
    displayStack(s);
    cout << s.top() << endl;
    // cout << s.size() << endl;
    cout << s.empty() << endl;
}
template <class T>
void displayQueue(queue<T> q)
{
    int s = q.size();
    for (int i = 0; i < s; i++)
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}
// template <class T, class W, class E>
// void displayPQueue(priority_queue<T, W, E> q)
// {
//     int s = q.size();
//     for (int i = 0; i < s; i++)
//     {
//         cout << q.top() << " ";
//         q.pop();
//     }
//     cout << endl;
// }
void queues(void)
{
    queue<int> q;
    q.push(99);
    q.push(100);
    q.push(200);
    q.push(500);
    q.push(600);
    q.push(700);
    q.push(800);
    displayQueue(q);
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();

    displayQueue(q);
    cout << q.size() << endl;
}
// void priorityQueue()
// { // For Max Heap
//     priority_queue<int> q1;
//     q1.push(66);
//     q1.push(1);
//     q1.push(33);
//     q1.push(100);
//     q1.push(99);
//     displayPQueue(q1);
//     // For Min Heap
//     priority_queue<int, vector<int>, greater<int>> q2;
//     q2.push(66);
//     q2.push(1);
//     q2.push(33);
//     q2.push(100);
//     q2.push(99);
//     displayPQueue(q2);
//     q2.pop();
//     displayPQueue(q2);
// }
template <class T>
void displaySet(set<T> s)
{
    for (int i : s)
    {
        cout << i << " ";
    }
    cout << endl;
}
void sets()
{
    set<int> s;
    s.insert(5);
    s.insert(65);
    s.insert(77);
    s.insert(101);
    s.insert(295);
    s.insert(250);
    displaySet(s);
    set<int>::iterator itr = s.begin();
    itr++;
    itr++;
    s.erase(itr);
    displaySet(s);
    cout << "Count Present or Not : " << s.count(295) << endl;

    for (itr = s.find(101); itr != s.end(); itr++)
    {
        cout << *itr << " ";
    }
    cout << endl;
    cout << *s.find(250);
}
int main(int argc, char const *argv[])
{
    // dequeue();
    vector<pair<int, string>> v;
    v.push_back(make_pair(1, "Kr. SOURAV"));
    v.push_back(make_pair(2, "Thor, Toofan Ka Devta"));
    v.push_back(make_pair(3, "Harsh"));
    v.push_back(make_pair(4, "Sidhu MooseWala"));
    for (int i = 0; i < 4; i++)
    {
        cout << v[i].first << " is " << v[i].second << endl;
    }

    return 0;
}
