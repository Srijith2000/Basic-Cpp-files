#include<iostream>
using namespace std;
class matrix
{
	int a[5][5], r,c;
	
public:
	matrix() : r(0),c(0) { }
	void input()
	{
		int i,j;
		cout<<"Enter no of rows and coloumns : ";  cin>>r>>c;
		cout<<"Enter elements : \n";
		for(i=0; i<r; i++)
			for(j=0;j<c;j++)  cin>>a[i][j];
	}
	void operator *= (matrix B)
	{
		int i,j,k;
		for(i=0; i<r; ++i)
        for(j=0; j<B.c; ++j)
            for(k=0; k<c; ++k)
            {
				a[i][j] += a[i][k] * B.a[k][j];
            }
        c=B.c;
	}
	void display()
	{
		int i,j;
		cout<<"Elements : \n";
		for(i=0; i<r; i++)
			{ for(j=0;j<c;j++)  cout<<a[i][j]<<" ";
			  cout<<endl; }
	}
};
int main()
{
	matrix A,B,C ;  
	cout<<"Matrix A :\n"; A.input();
	cout<<"\nMatrix B :\n"; B.input();
	A*=B;
	cout<<"\nMatrix AxB "; C.display();
	return 0;
}
