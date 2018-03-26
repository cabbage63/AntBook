#include <algorithm>
#include <iostream>

// global variable
int m = 10;

bool isOverM(int sum){
    if(sum > m){
        return true;
    }else{
        return false;
    }
}

bool equalToM(int sum){
    if(sum == m){
        return true;
    }else{
        return false;
    }
}

int solve(){
    int k[] = {1,3,5};
    int n = 3;

    // sort array
    std::stable_sort(k, k+n);

    for(int a=0; a<n; ++a){
        if(isOverM(k[a])){
            break;
        }
        for(int b=0; b<n; ++b){
            if(isOverM(k[a]+k[b])){
                break;
            }
            for(int c=0; c<n; ++c){
                if(isOverM(k[a]+k[b]+k[c])){
                    break;
                }
                for(int d=0; d<n; ++d){
                    if(equalToM(k[a] + k[b] + k[c] + k[d])){
                        std::cout << "Yes" << std::endl;
                        return 0;
                    }
                }
            }
        }
    }
    std::cout << "No" << std::endl;
    return 0;
}

int main(int argc, const char * argv[]) {
    solve();
}

