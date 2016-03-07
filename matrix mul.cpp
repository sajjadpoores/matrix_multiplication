bool matrix_mult(int **a,int ar,int ac, int **b,int br,int bc,int **c){

	if (ac != br)
		return 0; // wrong information

	for (int i = 0; i < ar;i++)
	for (int j = 0; j < bc; j++){
		c[i][j] = 0;
		for (int k = 0; k <ac ; k++){
			c[i][j] += a[i][k] * b[k][j];
		}
	}

	return 1;
}
