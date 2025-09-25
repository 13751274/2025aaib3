///week03-1.cpp
///file-save as 存檔時 要把檔名寫齊
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>a(2);
    for(int i=0;i<a.size();i++)cout<<a[i]<< ' ';
    cout<<endl;
    a.push_back(99);
    a.push_back(77);
    for(int i=0;i<a.size();i++)cout<<a[i]<< ' ';
    cout<<endl;
}
