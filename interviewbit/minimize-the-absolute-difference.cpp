#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int max(int a,int b,int c){
    int t=a;
    if(b > t) t=b;
    if(c > t) t=c;
    
    return t;
    
}

int min(int a,int b,int c){
    int t=a;
    if(b < t) t=b;
    if(c < t) t=c;
    
    return t;
    
}


int solve(vector<int> &A, vector<int> &B, vector<int> &C) {
    int d=1000000000;
    int pi=0,pj=0,pk=0;


    for(int i=0,j=0,k=0;i<A.size() || j < B.size() || k <C.size();){

        d = min(d , abs(max(A[i],B[j],C[k])-min(A[i],B[j],C[k])) );
        cout << A[i] <<"    " <<B[j] <<"    "<<C[k]  << "   " << d<< endl;

        pi=i;pj=j;pk=k;

        if(A[i] <= B[j] && A[i] <= C[k]){
            if(i < A.size()-1)
            i++;
        }
        else if(B[j] <= C[k] && B[j] <= A[i]){
            if(j < B.size()-1)
            j++;
        }
        else if(C[k] <= A[i] && C[k] <= A[i]){
            if(k < C.size()-1)
            k++;
        }
        
        if(pi==i && pj==j && pk==k) break;

    }

    return d;
    
}

int main(){
    int x[] ={ 41, 81, 82, 125, 139, 144, 169, 208, 257, 265, 283, 318, 362, 369, 401, 414, 437, 486, 520, 535, 574, 586, 625, 671, 697, 741, 741, 749, 767, 781, 813, 821, 842, 876, 924, 924, 947, 980, 1025, 1031, 1043, 1073, 1081, 1106, 1125, 1158, 1201, 1204, 1207, 1221, 1239, 1274, 1288, 1310, 1340, 1355, 1375, 1416, 1435, 1440, 1482, 1505, 1515, 1562, 1610, 1647, 1675, 1722, 1735, 1738, 1774, 1787, 1787, 1831, 1880, 1894, 1896, 1899, 1908, 1937, 1956, 1971, 2003, 2029, 2038, 2042, 2070, 2110, 2142, 2151, 2198, 2206, 2254, 2303, 2323, 2345, 2386, 2421, 2455, 2483, 2515, 2558, 2572, 2595, 2607, 2627, 2669, 2679, 2714, 2752, 2766, 2780, 2813, 2854, 2882, 2896, 2918, 2965, 2996, 3038, 3079, 3084, 3089, 3130, 3175, 3200, 3225, 3273, 3309, 3316, 3338, 3357, 3363, 3395, 3433, 3445, 3451, 3467, 3482, 3499, 3509 };
    int y[] = { -798, -777, -751, -724, -683, -649, -624, -591, -579, -550, -509, -481, -439, -426, -402, -372, -352, -331, -282, -257, -233, -226, -198, -175, -129, -100, -88, -50, -33, -25, 14, 58, 100, 105, 107, 155, 162, 199, 248, 259, 277, 318, 341, 369, 376, 376, 421, 456, 471, 500, 522, 523, 532, 568 };
    int z[] ={ 93, 127, 141, 146, 192, 230, 245, 287, 331, 366, 370, 405, 431, 469, 484, 508, 535, 581, 605, 653, 676, 704, 733, 755, 794, 822, 867, 881, 925, 936, 953, 1000, 1028, 1075, 1085, 1126, 1133, 1152, 1175, 1219, 1237, 1258, 1269, 1274, 1291, 1292, 1300, 1338, 1367, 1395, 1424, 1430, 1436, 1457, 1500, 1534, 1540, 1570, 1591, 1630, 1649, 1688, 1707, 1716, 1730, 1750, 1777, 1805, 1844, 1892, 1923, 1931, 1961, 1968, 2006, 2033, 2040, 2086, 2096, 2099, 2145, 2181, 2225, 2260, 2266, 2298, 2324, 2371, 2384, 2417, 2462, 2486, 2493 };

    vector<int> A(x, x + sizeof x / sizeof x[0]);
    vector<int> B(y, y + sizeof y / sizeof y[0]);
    vector<int> C(z, z + sizeof z / sizeof z[0]);


    cout << solve(A,B,C) << endl;

    return 0;
}