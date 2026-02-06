#include <stdio.h>
#include <stdlib.h>

void print_matrix(double mat[3][3]) {
    for(int i = 0;i<=2;i++){
        for (int j=0;j<=2;j++){
            if (j==2){
                printf("[%f]\n",mat[i][j]);
            }
            else{
                printf("[%f]",mat[i][j]);
            }
            
        }
    }
}

void matmul_vec(double mat[3][3], double vec[3]) {

}

void matmul_mat(double mat_A[3][3], double mat_B[3][3]) {
    
}

int main() {
    double mat[3][3] = {
        { 0.36, 0.48, -0.80 },
        { -0.80, 0.60, 0.00 },
        { 0.48, 0.64, 0.60 }
    };

    print_matrix(mat);
    printf("------------------\n");

    double vec1[3] = { 1, 0, 0 };
    double vec2[3] = { 0, 1, 0 };
    double vec3[3] = { 0, 0, 1 };
    double vec4[3] = { -0.5, 1, 1 };

    printf("mat * vec1:\n");
    matmul_vec(mat, vec1);
    printf("------------------\n");
    printf("mat * vec2:\n");
    matmul_vec(mat, vec2);
    printf("------------------\n");
    printf("mat * vec3:\n");
    matmul_vec(mat, vec3);
    printf("------------------\n");
    printf("mat * vec4:\n");
    matmul_vec(mat, vec4);
    printf("------------------\n");

    printf("mat * mat:\n");
    matmul_mat(mat, mat);

    return EXIT_SUCCESS;
}