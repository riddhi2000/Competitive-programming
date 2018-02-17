#include <iostream>
#include <vector>
#include <string>
#include <stack>

using namespace std;

string simplifyPathOriginal(string path) {
            vector<string>   nameVect;
            string name;

            path.push_back('/');

            for (int i = 0; i < path.size(); i++) {
                if (path[i] == '/') {
                    if (name.size() == 0) continue;
                    if (name == "..") {     //special case 1：double dot，pop dir
                        if (nameVect.size() > 0) nameVect.pop_back();
                    } else if (name == ".") {//special case 2:singel dot，don`t push
                    } else {          
                        nameVect.push_back(name);
                    }
                    name.clear();
                } else {
                    name.push_back(path[i]);//record the name
                }
            }

            string result;
            if (nameVect.empty()) return "/";
            for (int i = 0; i < nameVect.size(); i++) {
                result.append("/" + nameVect[i]);
            }
            return result;
        }


string simplifyPath(string A) {
    
    stack<string> st;
    string s;
    int size=A.length();

    for(int i=0; i<size-1;){
          s="";
        s = A[i++];

        while(i<size && A[i] != '/' ){
            s += A[i++];
        }
    
        string s1="/";

        if( s.compare("/") == 0 ){
            continue;
        }
        else if(s.find("..") != string::npos){
            if (!st.empty())
                st.pop();
        }
        else if(s == ""){
            continue;
        }
        else if(s.find(".") != string::npos){
            continue;
        }
        else{
            st.push(s);
        }
            
    }
    
    s="";
    while( !st.empty() ){
        s = st.top() + s;
        st.pop();
    }
    s += '\0';
      
    s.erase( s.end()-1 );

    if(s.length() == 0)
        s += "/";
    return s;
}

int main(){

    cout<< "Final answer: " << simplifyPath("/../") << endl;
    cout<< "Final answer: " << simplifyPathOriginal("/../") << endl;

    return 0;
}
