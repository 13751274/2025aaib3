///week05-3c.cpp �T�X�@��part 1 part2
///part 3
///cpe �ĤG�D ��r�ˤ�
#include<iostream>
#include<sstream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string line;///part 1:input
    while(getline(cin,line)){
        stringstream ss(line);///part3��r��Ψ��_�r
        string word;
        ss>>word;///part 5
        reverse(word.begin(),word.end());
        cout << word;///part 5
        while(ss>>word){
            reverse(word.begin(),word.end());
            cout<<" "<<word;
            }
        cout<<endl;///����
    }
}
