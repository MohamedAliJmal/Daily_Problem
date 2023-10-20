//{ Driver Code Starts
//Initial Template for Java

import java.io.*;
import java.util.*;
class GfG
{
    public static void main (String[] args)
    {
        
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        
        while(t-- > 0)
        {
            String s = sc.next ();
            int k = sc.nextInt();
    		System.out.println (new Solution().substrCount (s, k));
        }
        
    }
}
// } Driver Code Ends


//User function Template for Java

class Solution
{
    long substrCount (String S, int K) {
        
        
        return helper(S,K)-helper(S,K-1);
        
    }
    
    
    public static long helper(String S,int k){
        
        int[] arr=new int[26];
        
        long ans=0;
        
        int diff=0;
        
        int p=0;
        
        
        
        for(int i=0;i<S.length();i++){
            char ch=S.charAt(i);
            arr[ch-'a']++;
            
            
            if(arr[ch-'a']==1){
                diff++;                          
                
                  }
            
            if(diff<=k){
                // ans++;
                // ans+=i-p;
            }
            else{
                
                while(diff>k){
                    char ch1= S.charAt(p);
                    
                    arr[ch1-'a']--;
                    p++;
                    if(arr[ch1-'a']==0){
                        
                        
                        diff--;
                    }
                    
                    if(diff<=k){
                        
                        // ans++;/
                        // ans+=i-p;
                    }
                    
                    
                    
                }
                
                
                
            }
            
            
            ans+=i-p+1;
            
            
        }
        
        return ans;
        
    }
}