/*
Input:
1
8 3
the a there answer any by bye their
the
an
any

Output:
1
0
1
*/



import java.util.*;
import java.lang.*;
import java.io.*;

public class TrieAttempt {
    static class TrieNode {
    TrieNode [] child = new TrieNode[26];
    boolean isEnd;
    };
        static TrieNode root;  
static void insert(String key){
        TrieNode curr = root; 
        for (int i = 0; i < key.length(); i++) 
        { 
            if (curr.child[key.charAt(i) - 97] == null) 
                curr.child[key.charAt(i) - 97] = new TrieNode(); 
            curr = curr.child[key.charAt(i) - 97]; 
        } 
       
        // mark last node as leaf 
        curr.isEnd = true; 
}
static boolean search(String key){
        int index; 
        TrieNode curr = root; 
        for (int i=0;i<key.length();i++) 
        { 
            index=key.charAt(i)-97; 
            if (curr.child[index] == null) 
                return false; 
       
            curr = curr.child[index]; 
        } 
       
        return (curr != null && curr.isEnd); 
}
	public static void main (String[] args) {
		Scanner sc = new Scanner(System.in);
		int a = sc.nextInt();
		for(int i=0;i<a;i++){
		    root = new TrieNode();
		    int n = sc.nextInt();
		    int m = sc.nextInt();
		    for(int j=0;j<n;j++){
		        String s=sc.next();
		        insert(s);
		    }
		     for(int j=0;j<m;j++){
		        String s=sc.next();
		        if(search(s)==true)
		        System.out.println(1);
		        else
		        System.out.println(0);
		    }
		}
	}
}
