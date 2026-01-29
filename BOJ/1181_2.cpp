#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool compare(string in, string in2){
    if(in.length()<in2.length()){ // 길이가 in이 더 짧으면 먼저 출력
        return 1;
    }
    else if(in.length()>in2.length()){ // 길이가 in이 더 길면 나중에 출력
        return 0;
    }
    else{
        return in<in2; // 길이가 같으면 사전순, 아스키 코드
    } 
}

int main() {
    
    int n;
    string in[20000];
    
    cin >> n;
    
    for(int i=0; i<n; i++){
        cin >> in[i];
    }
    
    sort(in,in+n,compare);
    
    for(int i=0; i<n; i++){
        if(in[i]==in[i+1]){
            continue;
        }
        cout << in[i] << endl;
    }
    
}
