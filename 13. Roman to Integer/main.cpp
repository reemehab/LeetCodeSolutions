class Solution {
public:
    int romanToInt(string s) {
        int ans=0;
        int previous=10000;
        int current =0;
        int count=0;
        while(count<s.length()){
            if(s[count]=='I'){
                current =1;
            }
            else if(s[count]=='V'){
                current=5;
                
            }
                    
            else if(s[count]=='X'){
                current=10;
                
            }
                    
            else if(s[count]=='L'){
                current=50;
                
            }
                    
            else if(s[count]=='C'){
                current=100;
                
            }
                    
            else if(s[count]=='D'){
                current=500;
                
            }
                    
            else if(s[count]=='M'){
                current=1000;
                
            }
                if(current<=previous){
                ans+=current;
           previous=current;
            }
            else {
                ans-=previous;
                 ans-=previous;
                ans+=current;
                previous=current;
            }
                        
            count++;
        }
                    return ans;
    }
};