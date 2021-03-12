//  Created by Hanz Choi on 3/5/21.

#include <iostream>
using namespace std;

bool isItSudoku(int *arr);


int main() {
    int row[9] = {9, 1, 6, 8, 4, 3, 5, 2, 7};
    int checkerBox[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
    
    for(int i=0; i<9; i++){
        if(checkerBox[row[i]-1] == 0){
            cout << checkerBox[row[i]-1] << endl;

            checkerBox[row[i]-1]++;
        }
    }
    
    cout << isItSudoku(checkerBox) << endl;

    return 0;
}

bool isItSudoku(int *box){
    bool check = true;
    for(int i=0; i < 9; i++){
        if(box[i] != 1){
            check=false;
            break;
        }
    }
    
    return check;
}


