//{ Driver Code Starts
// Initial Template for Java

import java.io.*;
import java.util.*;

class GfG {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            String s = sc.next();
            int k = sc.nextInt();
            Solution obj = new Solution();
            System.out.println(obj.longestkSubstr(s, k));
        }
    }
}
// } Driver Code Ends


// User function Template for Java

class Solution {
    public int longestkSubstr(String s, int k) {
        int n = s.length();
        int maxLen = -1;
        int l = 0, r = 0;
        
        HashMap<Character, Integer> map = new HashMap<>();
        
        
        while(r<n) {
            if(r == n-1 && map.size() < k) {
                maxLen = -1;
                return -1;
            }
            char rch = s.charAt(r);
            map.put(rch, map.getOrDefault(rch,0)+1);
            r++;
            
            
            while(map.size()>k) {
                char lch = s.charAt(l);
                map.put(lch, map.get(lch)-1);
                if(map.get(lch) == 0) {
                    map.remove(lch);
                }
                l++;
            }
            
            maxLen = Math.max(maxLen, r-l);
            
        }
        
        
        return maxLen;
        
    }
}
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        // int n = s.length();
        // int maxLen = 0;
        // int left = 0, right = 0;
        // HashMap<Character, Integer> map = new HashMap<>();

        // while (right < n) {
        //     char ch = s.charAt(right);
        //     map.put(ch, map.getOrDefault(ch, 0) + 1);
        //     right++;

        //     while (map.size() > k) {
        //         char leftChar = s.charAt(left);
        //         map.put(leftChar, map.get(leftChar) - 1);
        //         if (map.get(leftChar) == 0) {
        //             map.remove(leftChar);
        //         }
        //         left++;
        //     }

        //     maxLen = Math.max(maxLen, right - left);
        // }

        // return maxLen;
  