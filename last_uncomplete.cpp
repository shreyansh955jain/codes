
#include<bits/stdc++.h>
using namespace std;
struct comp{
    template <typename T>
  
    // Comparator function
    bool operator()(const T& l,
                    const T& r) const
    {
        if (l.second != r.second) {
            return l.second > r.second;
        }
        return l.first > r.first;
    }
};
  
void sort(map<char, int>& M)
{
  
    set<pair<char, int>, comp> S(M.begin(),
                                   M.end());
  
    Print the sorted value
    for (auto& it : S) {
        cout << it.first << ' '
             << it.second << endl;
    }
}

int main() {
    string str1,str2;
    getline(cin, str1);
    getline(cin, str2);
    map<char,int>mp1;
    map<char,int>mp2;
    for(char i:str1){
    if(i>=97 && i<=122){    
    //if(i==' ' || isupper(i)) continue;
    mp1[i]++;
    }
    }
    for(char i:str2){
    if(i>=97 && i<=122){
    //if(i==' ' || isupper(i)) continue;
    mp2[i]++;
    }
    }
    sort(mp1);
    sort(mp2);
    
    
    return 0;
}
