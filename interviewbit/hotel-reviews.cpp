#include <bits/stdc++.h>
using namespace std;

#define ALPHABET_SIZE (26)
#define CHAR_TO_INDEX(c) ((int)c - (int)'a')

struct TrieNode{
    struct TrieNode *children[ALPHABET_SIZE];
    bool isLeaf;
};

struct TrieNode *getNode(void){
    struct TrieNode *pNode = NULL;
    pNode = (struct TrieNode *)malloc(sizeof(struct TrieNode));
    if (pNode){
        int i;
        pNode->isLeaf = false;
        for (i = 0; i < ALPHABET_SIZE; i++)
            pNode->children[i] = NULL;
    }
    return pNode;
}

void insert(struct TrieNode *root, const char *key){
    int level;
    int length = strlen(key);
    int index;
 
    struct TrieNode *pCrawl = root;
 
    for (level = 0; level < length; level++){
        index = CHAR_TO_INDEX(key[level]);
        if (!pCrawl->children[index])
            pCrawl->children[index] = getNode();
 
        pCrawl = pCrawl->children[index];
    }
    pCrawl->isLeaf = true;
}

bool search(struct TrieNode *root, const char *key){
    int level;
    int length = strlen(key);
    int index;
    struct TrieNode *pCrawl = root;
 
    for (level = 0; level < length; level++){
        index = CHAR_TO_INDEX(key[level]);
        if (!pCrawl->children[index])
            return false;
        pCrawl = pCrawl->children[index];
    }
    return (pCrawl != NULL && pCrawl->isLeaf);
}

bool sortbysec(const pair<int,int> &a,const pair<int,int> &b){
    if(a.second != b.second)
        return (a.second > b.second);
    else
        return a.first < b.first;
}

vector<int> solve(string A, vector<string> &B) {
    string s="";
    struct TrieNode *root = getNode();
    
    for(int i=0;i<A.length();i++){
        if(A[i] == '_'){
            insert(root, s.c_str());
            s="";
        }
        else{
            s+=A[i];
        }
    }
    if(!s.empty())
        insert(root, s.c_str());
    vector<pair<int,int> > x;
    
    
    for(int i=0;i<B.size();i++){
        s="";
        int count=0;
        for(int j=0;j<B[i].length();j++){
            if(B[i][j] == '_'){
                if(search(root, s.c_str()))
                    count++;
                s="";
            }
            else
            s+=B[i][j];
        }
        if(!s.empty() && search(root, s.c_str()))
             count++;
             
        x.push_back(make_pair(i,count));
        //cout <<  "i:" << i << " " << count << endl;
    }


    
    sort(x.begin(),x.end(),sortbysec);
    //cout << x.size() << endl;
    vector<int> ans;

    for(int i=0;i<x.size();i++){
        ans.push_back(x[i].first);
    }
    
    return ans;
}
int main(){

	vector<string> s;
	s.push_back("smart_guy");
	s.push_back("girl_and_boy_play");
	s.push_back("play_ground");

	vector<int> ans=solve("play_boy",s);

	for(int i=0;i<ans.size();i++)
		cout << ans[i] << " ";
	cout << endl; 

	return 0;
}