#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> sort2D(vector<vector<int>>& v, int colIdx) {
    sort(v.begin(), v.end(),[colIdx](vector<int>& a, vector<int>& b){
    return a[colIdx] < b[colIdx];
});
    return v;
}


vector<vector<int>> create(int numberOfRows, int numberOfColumns) {
    vector<vector<int>> v(numberOfRows, vector<int>(numberOfColumns));

    random_device rd; 
    mt19937 gen(rd()); 

    uniform_int_distribution<> dis(0, 100);

    for (int i = 0; i < numberOfRows; i++) {
        for (int j = 0; j < numberOfColumns; j++) {
            v[i][j] = dis(gen);
        }
    }
    return v;
}

int main() {
    int rows, columns;
    cout << "Number of rows: ";
    cin >> rows;
    cout << "Number of columns: ";
    cin >> columns;

    //PART-1
    vector<vector<int>> v = create(rows, columns);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    //PART-2
    int colIdx;
    cout << "Column Index: ";
    cin>>colIdx;
    v = sort2D(v, colIdx);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
