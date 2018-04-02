#include <algorithm>
#include <iostream>

int n = 3;
int m = 10;
int k[3] = {1,3,5};

bool binary_search(int x){
    int l = 0, r = n;

    while(r - l >= 1){
        int i = (l + r) / 2;
        if(k[i] == x){
            return true;
        }else if(k[i] < x){
            l = i + 1;
        }else{
            r = i;
        }
    }
    return false;
}

int solve(){
    std::stable_sort(k, k+n);
    bool f = false;

    for(int a = 0; a<n; a++){
        for(int b = 0; b < n; b++){
            for(int c = 0; c < n; c++){
                if(binary_search(m - k[a] - k[b] - k[c])){
                    f = true;
                }
            }
        }
    }

    if(f){
        std::puts("Yes");
    }else{
        puts("No");
    }
    return 0;
}

int main(int argc, const char * argv[]) {
    solve();
}

