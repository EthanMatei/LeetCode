class Solution {
public:
    int passThePillow(int n, int time) {
        int pos=1;
        int dir=1;
        for(int st=0;st<time;st++){
            if(pos==1 && dir ==-1){
                dir*=-1;
            }
            if(pos<n){
                pos=pos+dir;
            }
            else if(pos==n){
            dir*=-1;
            pos--;
            }
        }
        return pos;
    }
};