class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int ans = 0;
        queue<int> q;
        for(int i =2;i<arr.size();i++) q.push(arr[i]);
        int maxa = max_element(arr.begin(),arr.end()) - arr.begin();
        if(k>=maxa+1) return arr[maxa];
        //int flag = 1;
        int count = 1;
        ans = max(arr[0],arr[1]);
        q.push(min(arr[0],arr[1]));
        while(count<k){
            int temp = q.front();
            q.pop();
            if(temp>ans){
                count=1;
                q.push(ans);
                ans=temp;
            }
            else {
                count++;
                q.push(temp);
            }
        }
        return ans;
        
    }
};
