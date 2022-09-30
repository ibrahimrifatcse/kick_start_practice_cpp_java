#include<iostream>
#include<vector>
using namespace std;
#define optimize() ios_base::sync_with_stdio(NULL);cin.tie(NULL);cout.tie(NULL);

void test(){

int N,M;
cin>>N>>M;
vector<int>C(N);

int sum=0;
for(int i=0;i<N;i++){
    cin>>C[i];
}
for(int ii=0;ii<N;ii++){
    sum+=C[ii];
}
int modulo=sum%M;
cout<<modulo<<"\n";
}


int main()
{
    optimize();
int t;
cin>>t;
for(int i=1;i<=t;i++)

{cout<<"case #"<<i<<": ";
    test();
}


    return 0;
}
