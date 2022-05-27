#include <iostream>
using namespace std;
#define MIN_N 2
#define MAX_N 100
#define MAX_LENGHT_A 100000

int main(int argc, char ** argv){
    int A[MAX_LENGHT_A] = {4,3,2,1,2,1,5,8,3,2,1,6,9,4,3,2,5,4,3,2,1,6,5,4,3,2,1}; //MIN_N <= A[i] <= MAX_N
    int cont_countdown_in = 0;
    bool is_countdown = false;


    int j = 1;
    while (j<MAX_LENGHT_A-1){
        if(A[j+1]==A[j]-1) is_countdown = true;
        if(is_countdown = true && A[j+1]==1) {cont_countdown_in++;is_countdown = false;};
        j++;
    }
    cout<<cont_countdown_in<<endl;
    return 0;
}
