class Solution {
public:
    long long minimumPerimeter(long long neededApples) {
      int n = 0;
        for(long long int i = 1;i<=cbrt(neededApples);i++){
            long long int a =2*((i)*(i+1)*(2*i+1));
            if(a>=neededApples) {
                n=i;
                break;
            }
        }
        return 8*n;
    }
};
