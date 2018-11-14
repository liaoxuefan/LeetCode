#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

class Solution {
public:
	int m,n;
	bool p,a;
	vector<pair<int,int>> res;
	vector<vector<bool>> isVisited;
	int d[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
	bool isFind(int x,int y){
		return x>=0&&x<m&&y>=0&&y<n;
	}
	void pa(vector<vector<int>>& mat,int startX,int startY){
		isVisited[startX][startY]=true;
		if((startY>0&&startX==m-1)||(startY==n-1&&startX>0)){
			a=true;
			return;
		}else if((startY<n-1&&startX==0)||(startY==0&&startX<n-1)){
			p=true;
			return;
		}else if((startY==0&&startX==m-1)||(startY==n-1&&startX==0)){
			a=true;
			p=true;
			return;
		}
		for(int i=0;i<4;i++){
			int newX=startX+d[i][0];
			int newY=startY+d[i][1];
			if(isFind(newX,newY)&&mat[startX][startY]>=mat[newX][newY]&&isVisited[startX][startY]==false){
				pa(mat,newX,newY);
			}
			if(p&&a){
				return;
			}
		}
		return;
	}
    vector<pair<int, int>> pacificAtlantic(vector<vector<int>>& matrix) {
		m=matrix.size();
		n=matrix[0].size();
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){				
				isVisited=vector<vector<bool>>(m,vector<bool>(n,false));
				p=false;
				a=false;
				pa(matrix,i,j);
				cout<<i<<" "<<j<<"--"<<p<<a<<endl;
				if(p&&a){
					res.push_back(make_pair(i,j));
				}
			}
		}
    }
};
int main(){
	vector<pair<int,int>> res;
	int nums[5][5]={{1,2,2,3,5},{3,2,3,4,4},{2,4,5,3,1},{6,7,1,4,5},{5,1,1,2,4}};
	vector<vector<int>> target(5,vector<int>(5,0));
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			target[i][j]=nums[i][j];
		}
	}
	res=Solution().pacificAtlantic(target);
	system("pause");
	return 0;
}