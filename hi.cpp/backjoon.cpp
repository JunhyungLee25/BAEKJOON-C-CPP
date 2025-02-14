#include<iostream>
using namespace std;

int main(){
    int N,M;
    cin >> N >> M;
    int A[N][M];
    int B[N][M];
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            cin >> A[i][j];
        }
        cout << '\n';
    }
    for(int k=0; k<N; k++){
        for(int l=0; l<M; l++){
            cin >> B[k][l];
        }
        cout << '\n';
    }
    for(int a=0; a<N; a++){
        for(int b=0; b<M; b++){
            cout << A[a][b] + B[a][b];
        }
        cout << '\n';
    }
}