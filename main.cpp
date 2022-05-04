#include <iostream>
using namespace std;

// 3D Matrix size
int n = 2, m = 3, p = 3;

// 3D Matrix
int matrix[2][3][3] = {
{{5,10,15}, {20,25,30}, {35,40,45}},
{{50,55,60}, {65,70,75}, {80,85,90}}
};

// Vector size
int q;

// Returns the required vector size
int getSizeOfVector(int i, int j, int k)
{
   return i * j * k;
}

// Convert 3D index to 1D
int convertTo1D(int i, int j, int k)
{
   return i*m*p + j*p + k;
}


int main() {
    
    // Create vector
    q = getSizeOfVector(n, m, p);
    int * vect = new int[q];
    
    
    cout << "Size Of vector = " << q  << endl;

    // Test
    for(int a = 0; a < n; a++) {
       for(int b = 0; b < m; b++) {
          for(int c = 0; c < p; c++) {
             printf("matrix[%d][%d][%d] ==> vector[%d]\n", a, b, c, convertTo1D(a, b, c));
             vect[convertTo1D(a, b, c)] = matrix[a][b][c];
          }
       }
    }
    
    // Print the vector 
    for(int x = 0; x < q; x++) {
       printf("vector[%d] = %d\n", x, vect[x]);
    }
    return 0;
}
