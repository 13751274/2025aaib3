//week08-1.cpp
//3370.
class Solution {
public:
    int smallestNumber(int n) {
        int N=0;
       //材˙ ノブ猭тN琌秈碭计
       while(n>0){
        n=n/2;//奔糷ブ
        N++;//1计(秈计)
       }
       cout<<"瞷祇瞷N琌碭计㎡?"<<N<<"计\n";
       int ans=0;//材˙ ノ癹伴 舱场常琌1秈N计
       for(int i=0;i<N;i++){
        ans=ans*2+1;
       }
       return ans;
    }
};
