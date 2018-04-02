#include <algorithm>
#include <iostream>

int n = 3, m = 9, k[3] = {1,3,5};
int kk[9];

bool binary_search(int x){
    int l = 0, r = n*n;

    while( r - l >= 1){
        int i = ( r + l ) / 2;
        if( kk[i] == x ){
            return true;
        }else if( kk[i] < x ){
            l = i + 1;
        }else{
            r = i;
        }
    }

    return false;
}

int solve(){
    bool f = false;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            kk[3 * i + j] = k[i] + k[j];
            std::cout << kk[3*i + j] << std::endl;
        }
    }
    std::stable_sort(kk, kk+(n*n));

    for(int a = 0; a < n; a++){
        for(int b = 0; b < n; b++){
            if(binary_search(m - k[a] - k[b])){
                f = true;
            }
        }
    }

    if(f){
        std::puts("YES");
    }else{
        std::puts("NO");
    }

    return 0;
}

int main(int argc, const char * argv[]) {
    solve();
}

