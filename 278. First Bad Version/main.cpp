// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int x=0;
        for(int i=n ; i >=0 ; i--){
            if(isBadVersion(i)==false)
            break;            
            x=i;
        }
            return x;

    }
};