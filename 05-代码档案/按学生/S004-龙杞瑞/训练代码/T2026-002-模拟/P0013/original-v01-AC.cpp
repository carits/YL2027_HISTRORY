#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
	string s,t;
    cin>>n>>s>>t;
    map<char,int>s1,t1;
    for(int i=0;i<n;i++){
        s1[s[i]]++;
        t1[t[i]]++;
    }
    if(s1!=t1){
        cout<<-1<<endl;
        return 0;
    }
    string work=s;
    vector<int>vt;
    for (int i=0;i<n;i++) {
        if (work[i]==t[i]) continue;
        int j=i+1;
        while (j<n&&work[j]!=t[i]) j++;
        while (j>i) {
            char tmp=work[j];
            work[j]=work[j-1];
            work[j-1]=tmp;
            vt.push_back(j);
           	j--; 
        }
    }
    cout<<vt.size()<<'\n';
    if (!vt.empty()){
        for (int i=0;i<(int)vt.size();i++) {
            if(i>0) cout<< " ";
            cout<<vt[i];
        }
    }
    return 0;
}