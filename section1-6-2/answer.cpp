#include <algorithm>
#include <iostream>
#include <limits>

int L = 10;
int n = 3;
int x[] = {2, 6, 7};
int solve(){
    // calculate min
    int minT = 0;
    for(int i = 0; i < n; i++){
        minT = std::max( minT, std::min( x[i], L-x[i] ));
    }

    // calculate max
    int maxT = 0;
    for(int i=0; i < n; i++){
        maxT = std::max( maxT, std::max( x[i], L-x[i] ));
    }

    //std::cout << "min = " << min << "\nmax = " << max << std::endl;
    printf("%d %d\n", minT, maxT);

    return 0;
}

int main(int argc, const char * argv[]) {
    solve();
}

