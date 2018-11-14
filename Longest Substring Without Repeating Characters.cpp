#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
		//����һ���ң����ܸ��ݲ�������һֱ���Ĵ��룬ֻ��Խ��Խ��
        /*int l=0,r=0,sum=0;
		vector<char> temp;
		if(s.size()==1){
			return 1;
		}
		while(l<s.size()){

			if(r<s.size()){
					temp.push_back(s[r]);
			}
			
			for(int i=0;i<temp.size();i++){
				if(r+1<s.size()){
					r++;
				}else{
					sum=max(sum,r-l+1);
					return sum;
				}

				if(s[r]!=temp[i])
					continue;
				else{
					sum=max(sum,r-l-i);
					temp.erase(temp.begin(),temp.begin()+i+1);
					l=l+i+1;
				}
			}
			
		}
		return sum;
		*/
		//�����ַ���Ϊabcbb,�������ڶ���bʱֻҪ��һ��bû�д�1���0
		//l��һֱ������(if���һֱִ��else����)
		int freq[256]={0};
		int l=0,r=-1,res=0;
		while(l<s.size()){
			if(freq[s[r+1]]==0&&r+1<s.size()){
				r++;
				freq[s[r]]=1;
			}
			else{
				freq[s[l]]=0;
				l++;
			}
			res=max(res,r-l+1);
		}
		return res;
    }
};

int main(){
	string s="";
	cout<<Solution().lengthOfLongestSubstring(s)<<endl;
	system("pause");
	return 0;
}