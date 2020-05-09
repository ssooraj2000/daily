//You have a set of tiles, where each tile has one letter tiles[i] printed on it.  Return the number of possible non-empty sequences of letters you can make.

#include<iostream>
#include<cstdlib>
#include<cmath>
#include<string>
using namespace std;

int fact(int num){
	if(num==0){
		return 1;
	}
	return num*fact(num-1);
}
int findComb(string str){
	int arr[52]={0};
	int i,f=1,combi;
	for(i=0;i<str.length();i++){
		if(str[i]>=65 && str[i]<=90){
			arr[str[i]-39]++;
		}
		else{
			arr[str[i]-97]++;
		}
	}
	combi=fact(str.length());
	for(i=0;i<52;i++){
		if(arr[i]>1){
			f=f*fact(arr[i]);
		}
	}
	combi=combi/f;
	return combi;
}
int solve(string tiles){
	
	int size=pow(2, tiles.length());
	int count;
	int i, j;
	string arr[size];
 
	for(i = 1,count=0;i<pow(2, tiles.length());i++,count++){
		for(j=0;j<tiles.length();j++){
			if(i & 1<<j){
			arr[count]=arr[count]+tiles[j];
			}	
		}
	}
	for(i=0;i<pow(2, tiles.length())-1;i++){
		for(j=i+1;j<pow(2, tiles.length());j++){
			if(arr[i].compare(arr[j])==0){
				arr[j]=" ";
			}
		}
	}

	// for(i=0;i<pow(2, tiles.length())-1;i++){
	// 	cout<<arr[i]<<"\n";
	// }
	int seq=0;

	for(i=0;i<pow(2, tiles.length())-1;i++){
		if(arr[i]!=" "){

			seq=seq+findComb(arr[i]);
		}
	}
	
return seq;
}

int main(){
string tiles;
cin>>tiles;

cout << solve(tiles)<<"\n";	
}