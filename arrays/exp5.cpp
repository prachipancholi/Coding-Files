#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "20BCS1334- Prachi Pancholi\n";
    stack<int> st;
    st.push(23);
    st.push(24);
    st.push(100);
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << "\n";
    st.push(23);
    st.push(24);
    st.push(100);
    st.pop();
    cout << "After poping top element: \n";
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << "\n";
    cout << "Is stack empty:\n";
    cout << st.empty() << "\ns";
    cout << "Is stack full:\n";
    cout << !st.empty();

    return 0;
}