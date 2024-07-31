//{ Driver Code Starts
// Initial Template for Java

import java.io.*;
import java.util.*;

class GFG {
    public static void main(String args[]) throws IOException {
        BufferedReader read = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());
        while (t-- > 0) {
            String arr[] = read.readLine().trim().split(" ");

            Solution ob = new Solution();
            System.out.println(ob.longestCommonPrefix(arr));
        }
    }
}
// } Driver Code Ends


// User function Template for Java

class Solution {
    public String longestCommonPrefix(String arr[]) {
        Arrays.sort(arr);
        String st = "";
        
        int frst = 0;
        int last = arr.length-1;
        
        for(int i=0; i<arr[last].length(); i++) {
            if(arr[frst].charAt(i) == arr[last].charAt(i)) {
                st = st+arr[frst].charAt(i);
            }
            
            else {
                if(i == 0) {
                    return "-1";
                }
                else {
                return st;
                }
            }
        }
        return st;
    }
}