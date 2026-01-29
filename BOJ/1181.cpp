#include <iostream>
#include <string>
#include <algorithm>
#include <set>
using namespace std;

#if 0
bool cmp(string a, string b){
    if(a==b) return 1;
    else if(a>b) return 1;
    else ruturn 0;
}
#endif

class cmp{
    public:
        bool operator()(const string& a, const string& b) const {
            if(a.length()!=b.length()){
                return a.length()<b.length();
            }
            else return a<b;
        }
};

int main(){
    int n;
    cin >> n;
    
    string input;
    set<string, cmp> s;
    for(int i=0; i<n; i++){
        cin >> input;
        s.insert(input);
    }
    
    //sort(&s[0],&s[20001], cmp);
    
    for(string input : s){
        cout << input << '\n';
    }
    return 0;
}
