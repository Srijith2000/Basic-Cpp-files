#include<iostream>
using namespace std;
class matrix
{
public:
	int a[5][5], r,c;
	matrix() : r(0),c(0) 
	{ for(int i=0; i<5; i++)
			for(int j=0;j<5;j++)  a[i][j]=0; 
	}
	void input()
	{
		int i,j;
		cout<<"Enter no of rows and coloumns : ";  cin>>r>>c;
		cout<<"Enter elements : \n";
		for(i=0; i<r; i++)
			for(j=0;j<c;j++)  cin>>a[i][j];
	}
	matrix multiply(matrix B)
	{
		matrix C;
		int i,j,k;
		for(i=0; i<r; ++i)
        for(j=0; j<B.c; ++j)
            for(k=0; k<c; ++k)
            {
                
				C.a[i][j] += a[i][k] * B.a[k][j];
            }
        C.r=r; C.c=B.c;
        return C;
	}
	int trace()
	{
		int t=0,i,j;
		for(i=0; i<r; i++)
			for(j=0;j<c;j++)  if(i==j) t=t+a[i][j];
		return t;	
	}
	void symmetric()
	{
		int t=0,i,j,flag =1;
		for(i=0; i<r; i++)
			for(j=0;j<c;j++)  if(a[i][j]!=a[j][i]) { flag=0; break; };
		if(flag==1) cout<<"Matrix is symmetric";	
		else cout<<"Martix is not symmetric";	
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
	matrix A,B,C ;  int trace;
	cout<<"Matrix A :\n"; A.input();
	cout<<"\nMatrix B :\n"; B.input();
	C=A.multiply(B);
	cout<<"\nMatrix AxB "; C.display();
	trace=A.trace(); cout<<"\nTrace of A : "<<trace;
	cout<<"\nMatrix B: "; B.symmetric();
	return 0;
}
