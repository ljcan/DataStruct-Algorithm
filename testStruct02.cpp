#include<iostream>
using namespace std;
int a[4];
void GetSeq(int i,int n,bool take){
	if(i<=n){
		if(take){
			a[i-1]=i;
		}else{
			a[i-1]=0;
		}	
	}
	if(i>n){
		if(take){
			int tmp=i;
			while(tmp-1>0){
				if(a[tmp-2]!=0){
					cout<<a[tmp-2]<<" ";
				}
				tmp--;
			}
			cout<<endl;
		}
		return; 
	} else{
		GetSeq(i+1,n,true);
		GetSeq(i+1,n,false);
	}
}
int main(){
	cout<<"���ϣ�1,2,3,4�����ݼ��ǣ�"<<endl;
	GetSeq(0,4,true);
	cout<<"�ռ�"<<endl;
}

