90° = transpose + reverse row

180° = reverse row + reverse column

270° = transpose + reverse col

> 90° Example:

```cpp

// transpose
        for(int i = 0; i<matrix.size(); ++i){
            for(int j = i + 1; j<matrix.size(); ++j)
                std::swap(matrix[i][j], matrix[j][i]);
        }

// reverse each row
        for(int i = 0; i<matrix.size(); ++i){
            std::reverse(matrix[i].begin(), matrix[i].end());
        }

```
