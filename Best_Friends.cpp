//Since master Hulk has started ranking his N students, the number of friendships in his class has sharply fallen. The students near the bottom of the rankings list have become jealous of the top students, while the top students started looking down on their less successful colleagues.
//According to Hulk's observations, the following rule holds: two students are friends if their ranks are close enough, more precisely, if they differ by at most K. For example, if K = 1, then only neighbouring students on the rankings list are friends. Furthermore, two students are best friends if they are friends and their names have the same length.
//Write a program to calculate the number of pairs of best friends in this gifted class.
//Input Format:
//The first line of input contains two positive integers, N and K, from the problem statement.
//Each of the following N lines contains a single student's name. The names are given in the order they appear on the rankings list. They consist of between 2 and 20 (inclusive) uppercase English letters.
//Constraints:
//1 ≤ N ≤ 300000
//1 ≤ K ≤ N
//2<=|S| <=20 (length of string)
//Time limit: 1 sec
//Output Format:
//The first and only line of output must contain the required number of pairs.
//Sample Input 1:
//4 2
//IVA
//IVO
//ANA
//TOM
//Sample Output 1:
//5
//Sample Input 2;
//6 3
//CYNTHIA
//LLOYD
//STEVIE
//KEVIN 
//MALCOLM
//DABNEY
//Sample Output 2:
//2
#include<bits/stdc++.h>
using namespace std;
int main() {
 int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i =0;i<n;i++){
        string s;
        cin>>s;
        v[i]=s.length();
        //cout<<v[i]<<" ";
    }
    long long int ans =0;
   unordered_map<int, int> hm;
    //int dist_count = 0;
    hm[v[0]]=1;
    for (int i = 1; i <= k; i++) {
        hm[v[i]] += 1;
    }
    ans+=hm[v[0]]-1;
    //cout<<hm[v[0]]<<" ";
    //cout<<ans<<endl;
    for (int i = 1; i < n-k+1; i++) {
        hm[v[i-1]]-=1;
        hm[v[k+i]]+=1;
        //cout<<hm[v[i]]<<" ";
        ans+=hm[v[i]]-1;
        //cout<<ans<<endl;
    }
    for(int i =n-k+1;i<n;i++){
        hm[v[i-1]]-=1;
       // hm[v[i]]+=1;
        ans+=hm[v[i]]-1;
        //cout<<ans<<" ";
    }
    cout<<ans<<endl;
    return 0;
}
