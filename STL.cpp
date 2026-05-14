/*vector->
#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.emplace_back(30);

    for(int i : v) {
        cout << i << " ";
    }

    return 0;
}*/ 
/* pair->
#include<bits/stdc++.h>
using namespace std;

int main() {
    pair<int, string> p;

    p = {1, "Surja"};

    cout << p.first << endl;
    cout << p.second;

    return 0;
}
    */
   #include<bits/stdc++.h>
using namespace std;

int main() {
    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);

    cout << st.top() << endl;

    st.pop();

    cout << st.top();

    return 0;
}