#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
		//transform(first,last,result,op);first���������׵�������lastΪ������ĩ��������resultΪ��Ž��������
		//opΪҪ���в�����һԪ���������sturct��class��
		transform(s.begin(),s.end(),s.begin(),::tolower);
		int i=0,j=s.size()-1;
		if(s.size()<=1){
			return true;
		}
		while(i<j){
			//if('0'<= s[i]<= '9'||'a'<=s[i]<='z'||'A'<=s[i]<='Z')�Ǵ����д��
			if(s[i]>='0'&&s[i]<='9'||s[i]>='a'&&s[i]<='z'){

			}else{
				i++;
				continue;
			}
			if(s[j]>='0'&&s[j]<='9'||s[j]>='a'&&s[j]<='z'){

			}else{
				j--;
				continue;
			}
			if(s[i]==s[j]){
				i++;
				j--;
			}else{
			    return false;
			}

		}
        return true;
    }
};

int main(){
	string s="0P";
	cout<<Solution().isPalindrome(s)<<endl;
	system("pause");
	return 0;
}