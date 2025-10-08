///week05-3c.cpp 三合一的part 1 part2
///part 3
///cpe 第二題 把字弄反
#include<iostream>
#include<sstream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string line;///part 1:input
    while(getline(cin,line)){
        stringstream ss(line);///part3把字串用來斷字
        string word;
        ss>>word;///part 5
        reverse(word.begin(),word.end());
        cout << word;///part 5
        while(ss>>word){
            reverse(word.begin(),word.end());
            cout<<" "<<word;
            }
        cout<<endl;///跳行
    }
}
