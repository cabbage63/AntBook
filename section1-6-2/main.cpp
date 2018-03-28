#include <algorithm>
#include <iostream>
#include <limits>

int solve(){
    double L = 10;
    int n = 3;
    double x[] = {2, 6, 7};

    // max
    std::stable_sort(x, x+n);
    double max = std::max( L - x[0], x[n-1] );

    // min
    double distanceFromCenter = std::numeric_limits<double>::max();
    double center = L / 2;
    for( int i=0; i<n; i++){
        double tmp = x[i] - center;
        if(tmp < 0){
            tmp = -tmp;
        }
        if(tmp < distanceFromCenter){
            distanceFromCenter = tmp;
        }
    }
    double min = center - distanceFromCenter;

    std::cout << "min = " << min << "\nmax = " << max << std::endl;

    return 0;
}

int main(int argc, const char * argv[]) {
    solve();
}

