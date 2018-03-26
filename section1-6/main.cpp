#include <algorithm>
#include <iostream>

// global variable declaration

//Dataset1
/*
int n = 5;
int a[] = {2, 3, 4, 5, 10};
*/

//Dataset2
int n = 4;
int a[] = {4, 5, 10, 20};

int solve(){
    int maxCircumference = 0;
    std::stable_sort(a, a+n);

    for(int i=n-1; i>1; i--){
        for(int j=i-1; j>0; j--){
            for(int k=j-1; k>0; k--){
                if( a[i] < a[j] + a[k] ){
                int circumference = a[i] + a[j] + a[k];
                    std::cout << "[OK] " << a[i] << ", " << a[j] << ", " << a[k] << std::endl;
                    if( maxCircumference < circumference ){
                        maxCircumference = circumference;
                    }
                }else{
                    std::cout << "[NG] " << a[i] << ", " << a[j] << ", " << a[k] << std::endl;
                }
            }
        }
    }

    std::cout << "result: " << maxCircumference << std::endl;
    return 0;
}

int main(int argc, const char * argv[]) {
    solve();
}

