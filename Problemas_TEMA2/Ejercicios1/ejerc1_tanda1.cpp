

// #include <iostream>
                        
// int main(){
// int A[9]={1,2,3,5,6,7,8,9}, num{0};
// for(int i=0;i<9;i++){
//     if((A[i]%3==0) || (A[i]%2==1)){
//         num+= A[i];
//     }
// }
// std::cout<<"La suma de los numeros impares multiplos de 3 es: "<<num;
//     return 0;
// }


#include <iostream>  
using namespace std;  
int main() {  
const int m = 3, n =4; 
int A[m][n] = {{2,4,5,7},
			   {1,8,3,5},
			   {4,0,9,8}};  
			   
for(int i = 0; i < m; i++){  
for (int j = 0; j < n; j++)    
cout << A[j][i] << " ";  
cout << endl; }          
return 0; }