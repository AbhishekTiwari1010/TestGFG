//{ Driver Code Starts
//Initial Template for Java

import java.io.*;
import java.util.*;


class GfG
{
    public static void main(String args[])
        {
            Scanner sc = new Scanner(System.in);
            int t = sc.nextInt();
            while(t-->0)
                {
                    String S = sc.next();
                    int R = sc.nextInt();
                    int N = sc.nextInt();
                    Solution obj = new Solution();
                    System.out.println(obj.nthCharacter(S,R,N));
                }
                
        }
}

// } Driver Code Ends


//User function Template for Java

class Solution
{
    public char nthCharacter(String s, int r, int n)
    {
       
        String sb = "";
        while(r>0) {
            sb = "";
            for(int i=0; i<=n; i++) {
                
                if(s.charAt(i) == '1') {
                    sb = sb + "10";
                }
                else {
                    sb = sb + "01";
                }
            }
            s = sb;
            r--;
        }
       
      return s.charAt(n);
    }
}