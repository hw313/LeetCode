void setZeroes(vector<vector<int>>& matrix) {
	int m = matrix.size(); int n = matrix[0].size();
	set<int>row;
	set<int>column;
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			if (matrix[i][j] == 0){
				row.insert(i);
				column.insert(j);
			}
		}
	}
	for (auto i = row.begin(); i != row.end(); i++){
		for (int j = 0; j<n; j++){
			matrix[*i][j] = 0;
		}
	}
	for (auto i = column.begin(); i != column.end(); i++){
		for (int j = 0; j<m; j++){
			matrix[j][*i] = 0;
		}
	}
}