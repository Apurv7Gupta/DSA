/*

1,2,3,
4,5,6,
7,8,9,

*/



int n = 3;
    
int row = 1;
    
int count = 1;
    
    
    while(row<=5){
    
    int col = 1;        
        while(col<=n){
            cout<<count<<",";
            count++;
            col++;
        }
        
        cout<<endl;
        row++;
    }
