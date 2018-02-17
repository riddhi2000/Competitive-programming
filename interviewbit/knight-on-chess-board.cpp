#define INF 0x3f3f3f3f

int ans=-1;
int n,m;

bool isValid(int x,int y){
    if(x>=1 && x<=n && y>=1 && y<=m)
        return true;
    return false;
}

void Find(int x1,int y1,int x2,int y2,vector<vector<int> > &board,int w,int n,int m){
    if(x1==x2 && y1==y2){
        if(ans==-1 || ans>w)
            ans=w;
    }
    else{
        if(isValid(x1-1,y1) && isValid(x1-2,y1) && isValid(x1-2,y1+1) && board[x1-2][y1+1]>w+1){
            board[x1-2][y1+1]=w+1;
            Find(x1-2,y1+1,x2,y2,board,w+1,n,m); 
        }
        if(isValid(x1-1,y1) && isValid(x1-2,y1) && isValid(x1-2,y1+1) && board[x1-2][y1-1]>w+1){
            board[x1-2][y1-1]=w+1;
            Find(x1-2,y1-1,x2,y2,board,w+1,n,m); 
        }
        if(isValid(x1+1,y1) && isValid(x1+2,y1) && isValid(x1+2,y1+1) && board[x1+2][y1+1]>w+1){
            board[x1+2][y1+1]=w+1;
            Find(x1+2,y1+1,x2,y2,board,w+1,n,m); 
        }
        if(isValid(x1+1,y1) && isValid(x1+2,y1) && isValid(x1+2,y1-1) && board[x1+2][y1-1]>w+1){
            board[x1+2][y1-1]=w+1;
            Find(x1+2,y1-1,x2,y2,board,w+1,n,m); 
        }
        if(isValid(x1,y1-1) && isValid(x1,y1-2) && isValid(x1+1,y1-2) && board[x1+1][y1-2]>w+1){
            board[x1+1][y1-2]=w+1;
            Find(x1+1,y1-2,x2,y2,board,w+1,n,m); 
        }
        if(isValid(x1,y1-1) && isValid(x1,y1-2) && isValid(x1-1,y1-2) && board[x1-1][y1-2]>w+1){
            board[x1-1][y1-2]=w+1;
            Find(x1-1,y1-2,x2,y2,board,w+1,n,m); 
        }
        if(isValid(x1,y1+1) && isValid(x1,y1+2) && isValid(x1+1,y1+2) && board[x1+1][y1+2]>w+1){
            board[x1+1][y1+2]=w+1;
            Find(x1+1,y1+2,x2,y2,board,w+1,n,m); 
        }
        if(isValid(x1,y1+1) && isValid(x1,y1+2) && isValid(x1-1,y1+2) && board[x1-1][y1+2]>w+1){
            board[x1-1][y1+2]=w+1;
            Find(x1-1,y1+2,x2,y2,board,w+1,n,m); 
        }
    
    }
}

int knight(int N, int M, int x1, int y1, int x2, int y2) {
    n=N;
    m=M;
    vector<vector<int > > board(N+1,vector<int>(M+1,INF));
    
    board[x1][y1]=0;
    
    Find(x1,y1,x2,y2,board,0,N,M);
    return ans;
}

int 