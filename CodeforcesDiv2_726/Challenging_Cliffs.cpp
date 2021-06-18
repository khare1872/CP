#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>> n;
        vector<int> v(n);
        for(int i = 0; i<n; i++){
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        if(n==2) cout<<v[0]<<" "<<v[1]<<endl;
        else{
        
        if(v[0] == v[n-1]){
            for(int i = 0; i<n; i++){
                cout << v[i] << " ";
            }
            cout << endl;
        }
        else{
            int first_index, second_index;
            int mina = v[n-1]-v[0];
            for(int i = 0; i<n-1; i++){
                if(v[i+1] - v[i] < mina){
                     mina = v[i+1] - v[i];
                    first_index = i;
                    second_index = i+1;
                   
                }
            }
            vector<int> result;
            int temp1 = v[first_index];
            int temp2 = v[second_index];
            v.erase(v.begin()+first_index);
            v.erase(v.begin()+first_index);
            result.push_back(temp1);
            int indefirst_index = v.size();
            for(int i = 0; i<v.size(); i++){
                if(v[i] >= temp1){
                    indefirst_index = i;
                    break;
                }
            }
            for(int i = indefirst_index; i<v.size(); i++) result.push_back(v[i]);
            for(int i = 0; i<indefirst_index; i++){
                result.push_back(v[i]);
            }
            result.push_back(temp2);
            int i =0;
            while(i<n){
                cout << result[i] << " ";
                i++;
            }
            cout << endl;
        }
    }
    }
	return 0;
}
