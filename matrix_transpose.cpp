#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int> > matrix;
    vector<int> row;
    int rows;
    cin>>rows;
    for(int i=0;i<rows;i++){
        for(int j=0;j<rows;j++){
            int n;
            cout<<"enter the "<<i<<" "<<j<<" element";
            cin>>n;
            row.push_back(n);
        }
        matrix.push_back(row);
    }
     for(int i=0;i<rows;i++){
        for(int j=0;j<rows;j++){
           swap(matrix[i][j],matrix[j][i]);
        }
    }   
}