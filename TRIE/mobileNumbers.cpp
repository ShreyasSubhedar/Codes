#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 *
 	Game Input
Input
Line 1: The number N of telephone numbers.

N following lines: Each line contains a phone number, with a maximum length L. Telephone numbers consist of only the digits 0 to 9 included, without any spaces.

Output
The number of elements (referencing a number) stored in the structure.
Constraints
0 ≤ N ≤ 10000
2 ≤ L ≤ 20
Examples
Input
1
0467123456
Output
10
Input
2
0123456789
1123456789
Output
20
Input
2
0123456789
0123
Output
10
Input
5
0412578440
0412199803
0468892011
112
15
Output
28
 
 
 */
struct TrieNode{
    bool isEnd;
    bool vis;
    unordered_map<char,TrieNode*>child;
    TrieNode(){
        isEnd = false;
        vis = false;
    }
};

void insert(TrieNode *root, string s){
    TrieNode *curr = root;
    for(int i = 0; i<s.size(); i++){
        if(curr->child[s[i]]==NULL)
            curr->child[s[i]] = new TrieNode();
        curr = curr->child[s[i]];
    }
    curr->isEnd = true;
}
int search(TrieNode * root, string s){
    TrieNode *curr = root;
    int count=0;
    for(int i=0;i<s.length();i++){
                curr=curr->child[s[i]];
        if(curr->vis==false)
        {
            count++;
            curr->vis=true;
        }
    }
    return count;
}
int main()
{
    int N;
    cin >> N; cin.ignore();
    string str[N];
    TrieNode *root = new TrieNode();
    int count=0;
    for (int i = 0; i < N; i++) {
        string telephone;
        cin >> telephone; cin.ignore();
        str[i]=telephone;
       insert(root,telephone);
        count+=search(root,telephone);
    }
        cout<<count<<"\n";

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;


    // The number of elements (referencing a number) stored in the structure.
}
