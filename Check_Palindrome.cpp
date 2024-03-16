class Solution {
public:
    bool isPalindrome(int x) {

        long numb=x;
        if (x<0){
            return false;
        }
        else{
            long reversed=0;
            while (x){
                reversed=reversed*10+x%10;
                x=x/10;
            }
            if (reversed==numb){
                return true;
            }
            else {
                return false;
            }
        }
    }
};