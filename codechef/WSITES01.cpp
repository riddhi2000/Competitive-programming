#include <bits/stdc++.h>
#define ALPHABET_SIZE (26)
#define CHAR_TO_INDEX(c) ((int)c - (int)'a')

using namespace std;

vector<string> ans;
int flag=0;

struct TrieNode{
	struct TrieNode *children[ALPHABET_SIZE];
	bool isLeaf;
};

struct TrieNode* getNode(){
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

void insert(struct TrieNode *root, string key){
    int level;
    int length = key.length();
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

string find(struct TrieNode *root,string s){
	string ms="";
	struct TrieNode *pCrawl = root;
	int index,i=0;

	for(i=0;i<s.length();i++){
		index = CHAR_TO_INDEX(s[i]);
		ms += s[i];
		if (!pCrawl->children[index]){
			break;
		}
		else{
			pCrawl = pCrawl->children[index];
		}
	}
	//cout << i << s.length() << s << ms << endl;
	if( (i==s.length() && ms == s)   || (pCrawl  && pCrawl->isLeaf && i==s.length())){
		flag=1;
		return "";
	}
	return ms;
}

	void printWord(char* str, int n){
	    string s="";
	    for(int i=0; i<n; i++){
	        s+=str[i];
	    }
	    ans.push_back(s);
	}

	void printAllWords(TrieNode* root, char* wordArray, int pos = 0){
	   	
	   	if(root == NULL)
	      return;
	   
	   	if(root->isLeaf){
	      printWord(wordArray, pos);
	   	}

	  	for(int i=0; i<ALPHABET_SIZE; i++){
	    	if(root->children[i] != NULL){
	        	wordArray[pos] = i+'a';
	        	printAllWords(root->children[i], wordArray, pos+1);
	      	}
	   	}
	}


int main(){
	int n;
	char c;
	string s;

	struct TrieNode *root1 = getNode();
	struct TrieNode *root2 = getNode();

	cin >> n;

	vector<string> store;

	while(n--){
		cin >> c >> s;

		if(c == '+')
			insert(root1, s);
		else{
			store.push_back(s);
		}
	}

	for(int i=0;i<store.size();i++){
		string ms=find(root1,store[i]);
		if(ms.length() > 0)
		insert(root2,ms);
	}
	store.clear();

	string t="";
	char *cstr = new char[t.length() + 1];
	strcpy(cstr, t.c_str());

	printAllWords(root2,cstr,0);

	if(flag == 1)
		cout << "-1" << endl;
	else{
		cout << ans.size() << endl;
		for(int i=0;i<ans.size();i++){
			cout << ans[i] << endl;
		}
	}
	
	
	
	return 0;
}