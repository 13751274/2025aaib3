///week04-1.cpp
///�Ʋ�vector<int>a
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>a;///�W�g�Ъ����Y�ۦp ���}�C
    cout<<"�S����l�� a�����׬O"<<a.size()<<endl;///���Y�ۦp���}�C ���׬O3 �̭�����0
    a.push_back(99);///�U���٦��ܦh
    cout<<"�g�L.push_back()�� a��������"<<a.size()<<endl;

    vector<int>b(3);
    cout<<"b�����׬O"<<b.size()<<endl;
    b.push_back(99);
    for(int i=0;i<b.size();i++) cout<<b[i]<<' ';///0 0 0 99
    cout<<"�g�L.push_back(99)�� b�ܪ��F"<<endl;
    vector<int>c(3,88);
    for(int i=0;i<c.size();i++)cout<<c[i]<<' ';
    cout<<"��l��(3,88)�N�|�O3��88"<<endl;
    ///�U���٦��ܦh
}
