// Geek lost the password of his super locker. He remembers the number of digits N as well as the sum S of all the digits of his password. He know that his password is the largest number of N digits that can be made with given sum S. As he is busy doing his homework, help him retrieving his password.

// Example 1:

// Input:
// N = 5, S = 12
// Output:
// 93000
// Explanation:
// Sum of elements is 12. Largest possible 
// 5 digit number is 93000 with sum 12.
// Example 2:

// Input:
// N = 3, S = 29
// Output:
// -1
// Explanation:
// There is no such three digit number 
// whose sum is 29.
// Your Task : 
// You don't need to read input or print anything. Your task is to complete the function largestNumber() which takes 2 integers N and S as input parameters and returns the password in the form of string, else return "-1" in the form of string.

// Constraints:
// 1 ≤ N ≤ 104
// 0 ≤ S ≤ 106

// Expected Time Complexity : O(N)
// Expected Auxilliary Space : O(1)


Solution:-
class Solution
{
    public:
    //Function to return the largest possible number of n digits
    //with sum equal to given sum.
    
    string largestNumber(int n, int sum)
    {
        string s ="";
        int countOfnine =sum/9;
        sum=sum-countOfnine*9;
        int temp = countOfnine;
        while(temp--) s+="9";
        int m = n-countOfnine;
        if(sum==0){
            if(s.length()>n) return "-1";
            else {
                while(m--)
                s+="0";
                return s;
            } 
        }
        else {
             s+=to_string(sum);
            if(s.length()>n) return "-1";
            else {
                m--;
               while(m--)
                s+="0";
                return s;
        }
    }
    }
};
