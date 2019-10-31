    #include <iostream>
    #include <set>
    #include <vector>
    #include <algorithm>
    using namespace std;
     
    vector<int> v[100001];
    bool Passed[100001];
    set<int> st;
     
    int main () {
        //freopen("in", "r", stdin);
        int n, m;
        scanf("%d %d", &n, &m);
     
        for (int i = 0; i < m; i++) {
            int x, y;
            scanf("%d %d", &x, &y);
            v[x].push_back(y);
            v[y].push_back(x);
        }
     
        st.insert(1);
     
        while (!st.empty()) {
            set<int>::iterator ret = st.begin();
            int vec = *st.begin();
            Passed[vec] = true;
            printf("%d ", vec);
     
            for (int i = 0; i < v[vec].size(); i++) {
                if (Passed[v[vec][i]] == false)
                    st.insert(v[vec][i]);
            }
     
            st.erase(ret);
        }
    }
