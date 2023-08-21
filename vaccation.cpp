// // #include<iostream>
// // using namespace std;
// // int main(){
// //     int n=10;
// //     int a[n];
// //     while(n--){
// //         a[n]={1};
// //         cout<<a[n]<<endl;
// //     }
// // }
// // #include<iostream>
// // using namespace std;
// // int main(){
// //     int a[5]={1,2,3,4,5};
// //     int i=0;
// //     while(i<5){
// //          cout<<a[i]<<endl;
// //          i++;
// //     }
// //     int size=sizeof(a)/sizeof(int);
// //     cout<<"The size of the array"<<size;  
// //     return 0;
// // }

// #include<iostream>
// using namespace std;
// int sumArray(int arr[],int n){
//     int sum=0;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//         sum=sum+arr[i];
//     }
//     return sum;
// }
// int linearArray(int arr[],int n){
//     int sum=0;
//     int ele;
//     cin>>ele;
//     for(int i=0;i<n;i++){
//         if(arr[i]==ele){
//             return 1;
//         }
//         else{
//             return 0;
//         }

//     }
// }

// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     // sumArray(arr,n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     bool k=linearArray(arr,n);
//     if(k==1){
//         cout<<"yes"<<endl;

//     }
//     else{
//         cout<<"False"<<endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     int start=0;
//     int end=n-1;
//     while(start<=end){
//         swap(a[start],a[end]);
//         start++;
//         end--;
//     }
//     for(int i=0;i<n;i++){
//         cout<<a[i]<<" ";

//     }
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int size=8;
//     int a[8]={1,2,3,4,5,6,7,8};
//         swap(a[0],a[1]);
//         int temp;
//     for(int i=2;i<size;i++){
//       if(i+1<size){
//         if(i%2==0){
//             temp=a[i];
//             a[i]=a[i+1];
//             a[i+1]=temp;
//         }
//       }

//     }
//     for(int i=0;i<8;i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
// }
// /////////////////////////////////////////
// #include<iostream>
// using namespace std;
// int main(){
//     int ans=0;
//     int n=2;
//     int a[5]={3,3};

//     for(int i=0;i<n;i++){
//         ans=i^a[i];
//     }
// 	 for(int i=0;i<n;i++){
//         ans=ans^a[i];
//     }
//     cout<<ans;
// }
//////////////////////////////////////////////////
// #include<iostream>
// using namespace std;
// int main(){
//     int a[2]={4,4};
//     int ans=0;
//     for(int i=0;i<2;i++){
//         ans=ans^a[i];
// }
// for (int i=1;i<6;i++){
//     ans=ans^i;
// }
// cout<<ans;
// }
/////////////////////
// #include<iostream>
// using namespace std;
// int main(){
//     int size=6;
//     int a[size]={1,2,3,4,5,6};
//     for(int i=0;i<size;i++){
//         for(int j=i+1;j<size;j++){
//             for(int k=j+1;k<size;k++){
//                 cout<<i<<j<<k;
//             }
//         }
//     }
// }
//////////////////////////////
// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;
// void display(vector<int> &a){
//     for(int i=0;i<a.size();i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
// }
// void sorted(vector<int > &a){
//     sort(a.begin(),a.end());
//     display(a);
// }
// void search(vector<int> &a){
//     int ele,kk;
//     cin>>ele;
//     kk=binary_search(a.begin(),a.end(),ele);
//     if(kk==1){
//         cout<<"yes";
//     }
//     else{
//     cout<<"not";
// }
// }
// void rotate(vector<int> &a){
//     int k=a.size();
//     rotate(a.begin(),a.begin()+k,a.end());
//     display(a);
// }
// int main(){
//     vector<int > a;
//     int ele;
//     for (int i=0;i<7;i++){
//         cin>>ele;
//         a.push_back(ele);
//     }
//     // display(a);
//     // sorted(a);
//     search(a);
//     // rotate(a);
// }

// /////////////////////
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     // int a[1]={9};
//     // int ans1,ans=0;
//     // for(int i=0;i<1;i++){
//     //     ans=a[i];
//     // }
//     // ans1=ans+1;
//     // for(int i=0;i<1;i++){
//     //     if(a[i]==ans){
//     //     cout<<ans1;
//     //     }
//     //     else{
//     //     cout<<a[i];
//     // }
//     // }
//     vector<int> n;
//     int ele;
//         for (int i=0;i<3;i++){
//         cin>>ele;
//         n.push_back(ele);
//     }
//     int element;
//     cin>>element;
//     n.insert(n.begin()+1,element);
//     for(int i=0;i<n.size();i++){
//         cout<<n[i];
//     }

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> nums;
//     int ele;
//     for(int i=0;i<7;i++){
//         cin>>ele;
//         nums.push_back(ele);
//     }
//     int ans=0;
//     // for(int i=0;i<nums.size();i++){
//     //     ans=ans^nums[i];
//     // }
//     // cout<<ans;
//     int temp;
//     for(int i=0;i<nums.size();i++){
//         if(nums[i]=nums[i+1]){
//             ans++;
//             temp=nums[i]
//             nums[i+1]=nums[i];
//             nums
//         }
// }
// #include<iostream>
// #include<math.h>
// using namespace std;
// int main(){
//     int a[5]={-4,-1,0,3,10};
//     for(int i=0;i<5;i++){
//         a[i]=a[i]*a[i];
//     }
//     for(int i=0;i<3;i++){
//         if(a[i]>a[i+1]){
//             int temp=a[i];
//             a[i]=a[i+1];
//             a[i+1]=temp;
//         }
//     }
//     for(int i=0;i<5;i++){
//         cout<<a[i]<<" ";
//     }
//     return 0;
// // }
// #include <iostream>
// using namespace std;
// #include<vector>

// int get(vector<int> &a,int n){
//    int ans=0;
//    for (int i=0;i<n;i++){
// 	for(int j=i+1;j<n;j++){
// 		if(a[i]==a[j]){
//           ans=a[i];
// 		  i++;j++;
// 		}
// 		if(a[i]>a[j]){
//               j++;
// 		}
// 		if(a[i]<a[j]){
//            i++;
// 		}
// 	}
//    }
// 	return ans;
// }
    
// int main(){
// 	vector<int> a(3);
// 	int ele;
//         int n=a.size();
// 	for(int i=0;i<3;i++){
// 		cin>>ele;
// 		a.push_back(ele);
// 	}
//      int occ=get(a,3);
//       cout<<occ;
// }

// #include<iostream>
// using namespace std;
// int main(){
// 	int a[5]={1,1,2,4,5};
// 	 int ans=0;
//        for(int i=0;i<5;i++){
//            ans=ans^a[i];
//        }
// 	   cout<<ans<<endl;
//        if(ans==0){
//            cout<<"yes";
//        }
//         else
//            cout<<"no";
// }
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// int main(){

// 	vector<int> a;
// int ele;
// 	for(int i=0;i<4;i++){
// 		cin>>ele;
//           a.push_back(ele);
// 	}
//    sort(a.begin(),a.end());
//    for(int i=0;i<4;i++){
// 	cout<<a[i]<<endl;
//    }
// 	int max=a[4];
// 	cout<<"THE mex="<<max<<endl;
// 	int min=a[0];
// 	cout<<"THE min="<<min<<endl;
// 	int count=0,sum=0;
// 	for(int i=1;i<3;i++){
// 			sum=sum+a[i];
// 			count++;
// 	}
// 	cout<<sum<<endl;
// 	cout<<count<<endl;
// 	int t=sum/count;
// 	cout<<t<<endl;
// }
// #include<iostream>
// using namespace std;
// #include<vector>
// int get(vector<int>& a ,int n){
//    int ans=0;
//    cout<<n<<endl;
//    for (int i=0;i<n;i++){
// 	for(int j=i+1;j<n;j++){
// 		if(a[i]==a[j]){
//           ans=a[i];
// 		  i++;j++;
// 		}
// 		if(a[i]>a[j]){
//               j++;
// 		}
// 		if(a[i]<a[j]){
//            i++;
// 		}
// 	}
//    }
//   cout<<ans<<endl;
//   return ans;

// }
// int main(){
// 	vector<int> a(3);
// 	int ele;
//         int n=a.size();
// 	for(int i=0;i<3;i++){
// 		cin>>ele;
// 		a.push_back(ele);
// 	}
//      int occc=get(a,3);
//       int count=0;
//       for(int i=0;i<n;i++){
//           if(a[i]==occc){
//               count++;
//           }
//       }
// // }
// #include<iostream>
// using namespace std;
// int main(){
// 	int a=38;
// 	int b=a%10;
// 	int c=a/10;
// 	int sum=c+b;
// 	cout<<b<<" "<<c<<" "<<sum<<" "<<endl;
// }
// #include<iostream>
// using namespace std;
// int main(){
// 	 int a=-5;
// 	 unsigned  int b=a;
// 	cout<<b;
// }
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
// 	vector<int> a(4);
// 	int ele;
// 	for(int i=0;i<4;i++){
//            cin>>ele;
// 		   a.push_back(ele);
// 	}
// 	int key=3;
// 	int count=0;
// 	for(int i=0;i<4;i++){
// 		if(a[i]==key)
// 		continue;
// 		else count++;
// 	}
// 	cout<<count;
// }
// #include<iostream>
// using namespace std;
// int main(){
// 	int a=2;
// 	int b=a&1;
// 	cout<<b;
// }
////////////////////////////////////////////////////
////////////////////////////////////////////////////
///////////////////////////////////////////////////
////////////////////////////////////////////////////
//////////////////// STRING START ///////////////
// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	char ch[10];
// 	cin>>ch;
// 	int count=5;
// 	int s=0;
// 	int e=count-1;
// 	while(s<e){
// 		swap(ch[s++],ch[e--]); 
// 	}
// 	cout<<ch; 
// }
// #include<iostream>
// using namespace std;
// int main(){
// 	int a[3][3];
// 	for(int i=0;i<3;i++){
// 		for(int j=0;j<3;j++){
// 			cin>>a[i][j];
// 		}
// 	}
// 	for(int i=0;i<3;i++){
// 		for(int j=0;j<3;j++){
// 			cout<<a[i][j]<<" ";
// 		}
// 		cout<<endl;
// 	}
// 	for(int i=0;i<3;i++){
// 	    int sum=0;
// 		for(int j=0;j<3;j++){
// 		sum=sum+a[i][j];
// 		}
// 	cout<<sum<<endl;
// 	}
// // }
// #include<iostream>
// #include<bits/stdc++.h>
// #include<vector>
// using namespace std;
// int main(){
// 	vector<int> a,b;
// 	a.push_back(1);
// 	a.push_back(3);
// 	a.push_back(3);
// 	a.push_back(4);
// 	b.push_back(1);
// 	b.push_back(2);
// 	vector<int > c;
// 	for(int i=0;i<4;i++){
//          c.push_back(a[i]);
// 	}

// 	for(int i=0;i<2;i++){
//          c.push_back(b[i]);
// 	}
// 	cout<<endl;
// 	int ans=0;
// 	sort(c.begin(),c.end());
// 	for(int i=0;i<c.size();i++){
// 		if(c[i]==c[i+1]){
// 			ans=c[i];
// 		}
// 	}
// 	cout<<ans;
// }
// #include<iostream>
// using namespace std;
// int main(){
// 	int a,b;
// 	cin>>a;
// 	b=5;
// 	cout<<a%b;
// }
// #include<iostream>
// using namespace std;
// int main(){
// int a[5]={2,3,1,1,4};
//    int n=5;
//         int i=0;
//         while(i<n-1){
//          int j=a[i];
//          if(a[i]==0){
//              return 0;
//          }
//         while(j--){
//             i++;
//         }
// 			cout<<i<<endl;
//      }  
// 	 cout<<i;
// 	 int k=n-1;
//      if(i==k) {
//          return 1;
//      }
//      else{
//      return 0;
//      }
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5];
//     for(int i=0;i<5;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<5;i++){
//         cout<<2*arr[i]<<endl;
//     }
// }
// #include<iostream>
// #include <cstdlib>
// using namespace std;
// int main(){
// 	// int a[5]={1,2,3,4,5};
// 	// for(int i=0;i<=5;i++){
// 	// 	cout<<a[i]<<" ";
// 	// }
// 	int a,b;
// 	cin>>a>>b;
// 	int t=abs(a-b);
// 	cout<<t;
// }
// #include<iostream>
// #include<string>
// #include<libmangle.h>
// using namespace std;
// int main(){
// 	string str="azxxzy";
// 	int i=0;
// 	int j=str.size()-1;
// 	while(i<j){
// 		if(str[i]==str[j]){
// 			str.pop_back();
// 		}
// 		else{
// 			str.push_back(str[i]);
// 		}
// 	}
// }

////////////////////////////////////
/////// ALL ABOUT CHAR ARRAY[]//////

// #include<iostream>
// using namespace std;
// int getlength(char ch[]){
// 	int i=0;
// 	int count=0;
// 	while(ch[i]!='\0'){
//      count++;
//       i++;
// 	}
// 	return count;
// }
// void reverse(char ch[],int n){
// 	int s=0;
// 	int e=n-1;
// 	while(s<=e){
// 		swap(ch[s++],ch[e--]);
// 	}
// 	cout<<ch<<endl;
// 	for(; s<=e;){
// 		swap(ch[s++],ch[e--]);
// 	}
// 	cout<<ch;
// }
// void ReplaceSpace(char ch[],int n){
//   for(int i=0;i<n;i++){
// 	if(ch[i]==' ')
// 	ch[i]='@';
//   }
//   cout<<ch;
// }
// bool Palindrom(char ch[],int n){
//      int s=0;
// 	 int e=n-1;
// 	 while(s<=e){
// 		if(ch[s++]!=ch[e--]){
// 			return false;
// 		}
// 	 }
// 	 return true;
// }
// void LowerToUpper(char ch[],int n){
// 	for(int i=0;i<n;i++){
// 		if(ch[i]>='a'&&ch[i]<='z'){   ///// ignore capital letter like input Vansh
// 		ch[i]=ch[i]-'a'+'A';

// 	}
// 	}
// 	cout<<ch;
// }
// void UpperToLower(char ch[],int n){
// 	for(int i=0;i<n;i++){
// 	if(ch[i]>='A'&&ch[i]<='Z'){
// 		ch[i]=ch[i]-'A'+'a';
// 	}
// 	}
// 	cout<<ch;
// }
// int main(){
// 	char ch[100];
// 	cin.getline(ch,100);
// 	int n=getlength(ch);
// 	reverse(ch,n);
// 	ReplaceSpace(ch,n);
// 	if(Palindrom(ch,n)){
// 		cout<<"True";
// 	}
// 	else{
// 		cout<<"False";
// 	}
// 	LowerToUpper(ch,n);
//     UpperToLower(ch,n);
// }

////////////////////////////////////
/////// ALL ABOUT STRING ///////////
// #include<iostream>
// using namespace std;
// int main(){
// 	string str;
// 	// cin>>str;
// 	char ch[5];
//      ch[0]='a';
// 	 ch[1]='\0';
// 	 ch[2]='b';
// 	 ch[3]='\0';
// 	 ch[4]='c';
// 	 str[0]='a';
// 	 str[1]= '\0';
// 	 str[2]='b';
// 	 str[3]='\0';
// 	 str[4]='c';
// 	 for(int i=0;i<5;i++){
// 		cout<<ch[i]<<endl;
// 		cout<<str[i];
// 	 }
// }
// #include<iostream>
// using namespace std;
// int main(){
// 	string str1="ABCDEFGHIJKL";
// 	// cout<<str1.erase(0,5);/// starting value kha se start krna h delete krna
// 	//second kha tk delete krni h;

// 	// string target= "sharma";
	
// 	// cout<<str1.find(target);
// 	// string str2="abc";
	
// 	// cout<<str1.compare(str2);
	
// 	// cout<<str.substr(3,3);///// first strsrting value and second size of substring

// }


// #include<iostream>
// #include<bits/stdc++.h>
// #include<string>
// using namespace std;
// int main(){
// 	string str1="abbaca";
// 	string str2;
// 	int i=0;
// 	while(i<=str1.size()){
// 		if(str2.size()-1>0){
//         if(str2[str2.size()-1]==str1[i]){
// 		    str2.pop_back();
// 		}
// 		}
// 		else{
// 			str2.push_back(str1[i]);
// 		}
// 		i++;
// 	}
// 	cout<<str2;
// }
// #include <iostream>
// #include<bits/stdc++.h>
// using namespace std;
// bool getans(int a[],int n,int target){
//     	    for(int i=0;i<n;i++){
//     	        for(int j=i+1;j<n;j++){
//     	            if(a[i]+a[j]==target){
//     	                return 1;
//     	            }
//     	        }
//     	    }
// 	return 0;
// }

// int main() {
//     int t;
//     cin>>t;
// 	while(t--){
// 	    int n;
// 	    int target;
// 	    cin>>n>>target;
// 	    int a[n];
// 	    for(int i=0;i<n;i++){
// 	        cin>>a[i];
// 	    }
// 	    if(getans(a,n,target)){
// 	        cout<<"YES"<<endl;
// 	    }
// 	    else{
// 	        cout<<"NO"<<endl;
// 	    }
// 	}
// 	return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
// 	string s="aeiou";
// 	string str="hello";
// 	int i=0;
// 	int j=str.size();
// 	string curr1,curr2;
// 	while(i<=j){
//      curr1=str[i];
// 	 curr2=str[j];
// 	 int pos1=s.find(curr1);
// 	 int pos2=s.find(curr2);

// 	 if(pos1==string::npos||pos2==string::npos){
// 		if(pos1==string::npos){
// 			i++;
// 		}
// 		else{
// 			j--;
// 		}
// 	 }
// 	 else{
// 	 swap(str[i++],str[j--]);
// 	 }
// 	}
// 	 cout<<str;
// 	 }
	
// #include<iostream>
// #include<string>
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int >a,b;
// 	string str="badc";
// 	string str1="baba";
// 	    for(int i=0;i<str.size();i++){
// 	int count=0;
// 				count++;
// 		if(str[i+1]==str[i]){
// 			count++;
// 		}
// 		a.push_back(count);
// 	}
// 	   for(int i=0;i<str1.size();i++){
// 	int count1=0;	
// 		count1++;
// 		if(str1[i+1]==str1[i]){
// 			count1++;
// 		}
// 		b.push_back(count1);
// 	}
// 	for(int i=0;i<a.size();i++){
// 		if(a[i]!=b[i]){
// 			cout<<"false"<<endl;
// 			break;
// 		}
// 	}
// 	cout<<"True"<<endl;
// }
// #include<iostream>
// #include<string>
// #include<vector>
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	string str="kwwkew";
// 	string currt;
// 	string ans="";
// 	int i=0;
// 	int j=str.size()-1;
// 	int mini=INT_MIN;
// 	while(i<=j){
// 		currt=str[i];
// 		int pous=ans.find(currt);
// 		if(pous==string::npos){
//           ans.push_back(str[i]);
// 		}
// 		else{
// 			int ss=ans.size();
// 			mini=max(mini,ss);
// 			ans.clear();
// 			i--;
// 		}
// 		i++;
// 	}
// 	int mie=INT_MAX;
// 	int n=ans.size();
// 	mie=max(n,mini);
	
// 	cout<<mie;
// 	}
// int main(){
// string s="(]";
//         string ans="";
//         int i=0;
//         int j=s.size()-1;
//         string curr;
//         while(i<=j){
//            curr=s[i];
//            int pos=ans.find(curr);
//            if(pos==string::npos){
//                ans.push_back(s[i]);
// 			   cout<<ans<<endl;
//            }
//            if(pos!=string::npos){
//                ans.erase(i,1);
// 			   cout<<ans;
// 		}
//            i++;
//         }
// }
// int main(){
// 	int num=6;
// 	int *ptr=&num;
// 	cout<<"adress of num:f"<<&num<<endl;
// 	cout<<"value at &num address:"<<num<<endl;
// 	cout<<"when print ptr only:"<<ptr<<endl;
// 	cout<<"*ptr print:"<<*ptr<<endl;
// }

// int main(){
// 	int a[7]={1,1,1,2,2,2,2};
// 	int maxi=INT_MIN;
// 	int count=0;
// 	int temp=0;
// 	int ele;
// 	int i=0;
// 	int j=6;
// 	while(i<=j){
// 		if(a[i]==a[i+1]){
// 			count++;
// 			cout<<"under"<<count<<endl;	
// 			}
// 		else{
// 			cout<<count<<endl;
//             if(temp<count){
// 			temp=count;
//                 ele=a[i];
// 			}
// 			count=0;
// 		}
// 		i++;
// 	}
// 	cout<<" the element is"<<ele;
// }
// int main(){
// 	string s="   fly me   to   the moon  ";
// 	int i=0;
// 	int j=s.size()-1;
// 	while(i<=j){
// 		swap(s[i++],s[j--]);
// 	}
// 	while(i<=j){
// 		if()
// 	}
// 	cout<<s;
// }
/*class Solution {
public:
    int lengthOfLongestSubstring(string str) {
	string currt;
	string ans="";
	int i=0;
	int j=str.size()-1;
	int mini=INT_MIN;
	while(i<=j){
		currt=str[i];
		int pous=ans.find(currt);
		if(pous==string::npos){
        ans.push_back(str[i]);
		}
		else{
			int ss=ans.size();
			mini=max(mini,ss);
			ans.clear();
			i--;
		}
		i++;
	}
	int mie=INT_MAX;
	int n=ans.size();
	mie=max(n,mini);
	return mie;
    }
};*/
// int main(){
// 	vector<int >a(3);
// 	vector<int>ans;
// 	a.push_back(1);
// 	a.push_back(1);
// 	a.push_back(2);
// 	int sum=0;
//   int i=0;
//   int j=2;
//   while(i<=j){
//       if(a[i]!=a[i+1]){
//         ans.push_back(a[i]);
//   }
//   i++;
//   }
//   for(int i=0;i<3;i++){
// 	cout<<ans[i];
//   }
// }
///////////////////////////////
//////////RECURSION///////////

// #include<iostream>
// using namespace std;
// int factorial(int n){
// 	if(n==1){
// 		return 1;
// 	}
// 	return n*factorial(n-1);
// }
// void counting(int n){
// 	// BASE CASE
// 	if(n==0)
// 	return ;
// 	cout<<n<<" ";

//     counting(n-1);
// }
// int faboncci(int n){
// 	if(n==1)
// 	return 0;
// 	if(n==2)
// 	return 1;
	
// 	return faboncci(n-1)+faboncci(n-2);
// }
// int climbingstair(int n){
// if(n==0||n==1)
// return 1;
//  return climbingstair(n-1)+climbingstair(n-2);
// }

// void printingArrays(int arr[],int n,int &i){
// 	if(i>=n){
//      return ;
// 	}
// 	// cout<<arr[i]<<" ";     ////// Sequence counting printing
//   int val=i+1;
// 	printingArrays(arr,n,val);

// 	cout<<arr[i]<<" ";   ////// Reverse counting print
// }
// int sumoFarray(int arr[],int n,int i,int &sum){
// 	if(i>n){
// 		return 0;
// 	}
// 	 sum=sum+arr[i];
    
// 	sumoFarray(arr,n,i+1,sum);
// 	return sum;
// }
// int checkmaxi(int arr[],int n,int i,int &maxi){
// 	if(i>=n)
// 	return 0;
  
// 	if(arr[i]>maxi){
// 	maxi=arr[i]; 
// 	}

// 	checkmaxi(arr,n,i+1,maxi);
// 	return maxi;
// }
// bool checksorted(int arr[],int n,int i){
// if(i==n-1)
// return 1;

// if(arr[i]>arr[i+1]){
// 	return 0;
// }
//  return checksorted(arr,n,i+1);
// }
// bool binersearch(int arr[],int e, int s,int target){
// 	if(s>e)
// 	return 0;

// 	int mid=s+(e-s)/2;
// 	 if(arr[mid]==target)
// 	     return 1;
// 	if(arr[mid]>target){
//        binersearch(arr,mid-1,s,target);
// 	}
// 	else{
//        binersearch(arr,e,mid+1,target);
// }
// }
// int main(){
// 	int n=5;
// 	int sum=0;
// 	int i=0;
// 	int target=50;
// 	// int ans=factorial(n);
// 	// cout<<"The factorial of no. is:"<<ans<<endl;
// 	// counting(n);
// 	// cout<<endl;
// 	// int newans=faboncci(n);
// 	// cout<<"the value of place is:"<<newans;
// 	// cout<<"the total steps="<<climbingstair(n);
// 	int arr[5]={10,20,30,40,50};
// 	// int maxi=INT_MIN;
// 	// // printingArrays(arr,n,i);
// 	// checkmaxi(arr,n,i,maxi);

// 	// cout<<"The maximum element in array is="<<maxi<<endl;
// 	// sumoFarray(arr,n,i,sum);
// 	// cout<<sum<<endl;
// 	// if(checksorted(arr,n,i)){
// 	// 	cout<<"true";
// 	// }
// 	// else{
// 	// 	cout<<"false";
// 	// }
// 	if(binersearch(arr,n-1,i,target)){
// 		cout<<"Yes";
// 	}
// 	else{
// 		cout<<"No";
// 	}
// }
// #include<iostream>
// #include<vector>
// using namespace std;
// #include<bits/stdc++.h>
// int main(){
// vector<int>ans;
//   int n=7;
//   int k=2;
// int count=0;
//     for(int i=1;i<=n;i++){
//     if(n%i==0){
// 		cout<<i<<" "<<endl;;
//     count++;
//     ans.push_back(i);
//     }
//  }
//  for(int i=0;i<ans.size();i++){
// 	cout<<ans[i]<<" ";
//  }
//  if(count<k){
// 	cout<<"-1";
//  }
//  else{

// 	cout<<ans[k-1];
//  }
// }



// #include<iostream>
// #include<vector>
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// 	vector<string> st(6);
// 	string str="()";
// 	st.push_back("(");
// 	st.push_back(")");
// 	st.push_back("[");
// 	st.push_back("]");
// 	st.push_back("{");
// 	st.push_back("}");

// 	sort(st.begin(),st.end());
// 		for(int i=0;i<st.size()-1;i++){
// 		  if(st[i]!=st[i+1]){
// 			cout<<"False";
// 		  }
// 	}
// 	cout<<"Ture";
// }
// int main(){
// 	vector<vector<int>>accounts;
//  int n=accounts.size();
        
//         int maxi=INT_MIN;
//         for(int i=0;i<n;i++){
//             int sum=0;
//             for(int j=0;j<accounts[i].size();j++){
//                 sum+=accounts[i][j];
//             }
//             maxi=max(maxi,sum);
//         }
// }


/////////////////////
// again start recursion revision;


// #include<iostream>
// using namespace std;
// int findFactorial(int n){
// 	/// BASE CASE;
// 	if(n==1)
// 	return 1;
// 	return n*findFactorial(n-1);
// }
// void printcounting(int n){
	
// 	if(n==0){
// 		return ;
// 	}
// 	cout<<n<<" ";
// 	printcounting(n-1); 
// }
// bool binarysearch(int *arr,int s,int e,int target){
// if(s>e) return 0;
// int mid=s+(e-s)/2;
// if(arr[mid]==target)
// return 1;
// if(arr[mid]>target)
// binarysearch(arr,s,mid-1,target);
// else
// binarysearch(arr,mid+1,e,target);
// }
// void arrayprinting(int *arr,int n,int i){
//        if(i>=n)
// 	   return ;
// 	   cout<<arr[i]<<" ";
// 	   return arrayprinting(arr,n,i+1);
// }
// int faboncci(int n){
// 	if(n==0)
// 	return 0;
// 	if(n==1)
// 	return 1;
// 	return faboncci(n-1)+faboncci(n-2);
// }
// int checkmaxi(int *arr,int n,int i,int &maxi){
//   if(i>=n){
// 	return 0;
//   }
//   maxi=max(maxi,arr[i]);
// checkmaxi(arr,n,i+1,maxi);
// return maxi;
// }
// bool arrays_issorted(int *arr,int n,int i){
// 	if(i==n-1) return true;
// 	if(arr[i]>arr[i+1])
// 	return false;
// 	arrays_issorted(arr,n,i+1);
// }
// int main(){
// 	int n;
// 	cin>>n;
// 	int fact=findFactorial(n);
// 	cout<<"The factorial of any number is:"<<fact<<endl;
// 	printcounting(n);
// 	cout<<endl;
// 	cout<<faboncci(n)<<endl;
// 	int arr[n]={1,2,3,4,5,6};
// 	int i=0;
// 	arrayprinting(arr,n,i);
// 	cout<<endl;
// 	int maxi=INT_MIN;
// 	int oo =checkmaxi(arr,n,i,maxi);
// 	cout<<"The maximum element in array is:"<<oo<<endl;
// 	if(arrays_issorted(arr,n,i))
// 	cout<<"True"<<endl;
// 	else
// 	cout<<"False"<<endl;
// 	if(binarysearch(arr,i,n-1,8))
// 	cout<<"Yes element is present"<<endl;
// 	else
// 	cout<<"NO sorry element is not present"<<endl;
// }
// #include<iostream>
// #include<bits/stdc++.h>
// #include<math.h>
// #include<vector>
// using namespace std;
// int main(){
// 	vector<int> gain;
// 	gain.push_back(-5);
// 	gain.push_back(1);
// 	gain.push_back(5);
// 	gain.push_back(0);
// 	gain.push_back(-7);
// 	 vector<int> ans;
//         ans.push_back(0);
//         int sum=0;
//         for(int i=0;i<gain.size();i++){
//            sum=sum+gain[i];
//            ans.push_back(sum);
//         }
//         int maxi=0;
//         for(int i=0;i<ans.size();i++){
// 			cout<<ans[i]<<endl;
//              maxi=max(maxi,ans[i]);
//         }
// 		cout<<maxi<<endl;
// }

// int main(){
// 	int a,b;
// 	cin>>a>>b;
// 	cout<<a%b<<endl;
// 	cout<<a/b;
// }


//////////////////////////////
/////////////////////////////
///IMPORTANT Pattern///////

// #include<iostream>
// #include<string>
// using namespace std;
// void subsequence(string s,int i,string output){
// 	if(i>=s.length()){
// 	cout<<output<<endl;
// 	return;
// 	}
//     // exclusive
//      subsequence(s,i+1,output);

// 	//inclusive
// 	subsequence(s,i+1,output+=(s[i]));
// }
// int main(){
//    string s="abc";
//    string output="";
//    int i=0; 
//    subsequence(s,i,output);
// }
// int main(){
// 	string s="abc";
// 	vector<string> ss;
// 	ss.push_back("a");
// 	ss.push_back("b");
// 	ss.push_back("c");
// 	ss.push_back("ab");
// 	ss.push_back("abc");
// 	int i=0;
// 	int k=0;
// 	int j=ss.size()-1;
// 	string curr;
// 	while(i<=j){
// 		curr=s[j];
// 		if(curr==ss[k]){
// 			cout<<ss[k];
// 		}
// 		k++;
// 		i++;
// }
// }
// int main(){
// vector<string> str;
// 	str.push_back("a");
// 	str.push_back("b");
// 	str.push_back("c");
// 	for(int i=0;i<str.size();i++){
// 		for(int j=i+1;j<str.size();j++){
// 			cout<<str[i][j]<<endl;
// 		}
// 	}
// }
// int powerOfnUmber(int n,int p){
// 	if(n==1||p==1){
// 		return n;
// 	}
	    
// 	 return n*powerOfnUmber(n,p-1);
// }
// int main(){
// 	int n,p;
// 	cin>>n>>p;

// 	cout<<powerOfnUmber(n,p);
// } 
// int main(){
// vector<int>nums;
// vector<int >cost;
// nums.push_back(735103);
// nums.push_back(366367);
// nums.push_back(132236);
// nums.push_back(133334);
// nums.push_back(808160);
// nums.push_back(113001);
// nums.push_back(49051);
// nums.push_back(735598);
// nums.push_back(686615);
// nums.push_back(665317);
// nums.push_back(999793);
// nums.push_back(426087);
// nums.push_back(587000);
// nums.push_back(649989);
// nums.push_back(509946);
// nums.push_back(743518);
// cost.push_back(724182);
// cost.push_back(447415);
// cost.push_back(723725);
// cost.push_back(902336);
// cost.push_back(600863);
// cost.push_back(287644);
// cost.push_back(13836);
// cost.push_back(665183);
// cost.push_back(448859);
// cost.push_back(917248);
// cost.push_back(397790);
// cost.push_back(898215);
// cost.push_back(790754);
// cost.push_back(320604);
// cost.push_back(468575);
// cost.push_back(825614);
//       int maxi=INT_MIN;
//        long long int index;
//         for(int i=0;i<cost.size();i++){
//             if(maxi<cost[i]){
// 				maxi=cost[i];
//                index=i;
//             }
//         }
// 		cout<<"maxi="<<maxi<<endl;
// 			cout<<index<<endl;
//     int i=0;
//     long long int ttcost=0;
//   for(int i=0;i<nums.size();i++){
//       if(nums[i]<nums[index]||nums[i]>nums[index]){
// 		long long int a=abs(nums[i]-nums[index]);
// 		cout<<"The diff="<<a<<", ";
// 		cout<<"the cost[i]="<<cost[i];
// 		 ttcost+=a*cost[i];
// 			cout<<ttcost<<endl;
// 	  }
//   }
// }
// int checkgcd(int a,int b){
//     if(a==0) return b;
//     if(b==0) return a;
//     while(a!=b){
//         if(a>b){
//             a=a-b;
//         }
//         else{
//             b=b-a;
//         }
//     }
//     return a;
// }
// bool checksorted(vector<int>&nums){
//     for(int i=0;i<nums.size()-1;i++){
//         if(nums[i]>nums[i+1]){
//             return 0;
//         }
//     }
//     return 1;
// }
// int main(){
// vector<int> nums;
// nums.push_back(7);
// nums.push_back(21);
// nums.push_back(3);
//         int i=0;
// 		int j=1;
// 		int n=nums.size()-1;
//             while(i<=n){
//                 int k=checkgcd(nums[i],nums[j]);
// 				cout<<k<<endl;
//                 if(k>1){
//                     swap(nums[i],nums[j]);
// 					i++;
// 					j--;
//                 }
// 				else{
// 					j++;
// 				}
//             }
//         if(checksorted(nums)) cout<<"True";
//         else cout<<"False";
// 	}
// #include<algorithm>
// #include<bits/stdc++.h>
// using namespace std;
// double power(double x,int n){
// 	if(n==0){
// 		return 1;
// 	}
// 	return x*power(x,n-1);
// }
// int main(){
// 	 double x;
// 	 int n;
// 	cin>>x>>n;
// 	cout<<1.0/power(x,abs(n));
// }
// #include<bits/stdc++.h>
// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
// 	string num1="456",num2="11";
// 	int s=num1.size();
// 	int n=num1[s-1]-'0';
// 	cout<<n;
//
// int main(){
// 	string s="wzkpzzwzpzkwkpkppzkppkpkwwkzzzwwpwwk";
// 	cout<<s.size()<<endl;
// 	string ans="";
// 	for(int i=0;i<s.size();i++){
// 		int pos=ans.find(s[i]);
// 		if(pos==string::npos){
// 		ans.push_back(s[i]);
// 		cout<<"The add="<<ans<<endl;
// 		}
// 		else{
// 			ans.erase(pos,1);
// 			cout<<"The ans delete="<<ans<<endl;
// 		}
// 	}
// 	cout<<"the length of ans="<<ans.size()<<endl;
// // }
//     vector<int> nums(6);
// 	int  n=3;
// 	nums.push_back(2);
// 	nums.push_back(5);
// 	nums.push_back(1);
// 	nums.push_back(3);
// 	nums.push_back(4);
// 	nums.push_back(7);
//         vector<int >ans1(n),ans2(n);
//         vector<int>output(6);
//         for(int i=0;i<=3;i++){
//             ans1.push_back(nums[i]);
//         }
//         for(int i=n;i<nums.size();i++){
//             ans2.push_back(nums[i]);
//         }
//         for(int i=0;i<nums.size();i++){
//             if(i%2==0){
//                 output.push_back(ans1[i]);
//             }
//             else{
//                 output.push_back(ans2[i]);
//             }
//         }

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// bool checkpalindrome(string str,int s,int e){
//     //Base case
// 	if(s>=e){
// 		return 1;
// 	}

// 	// ek case solve
// 	if(str[s]!=str[e]){
		
// 		return 0;
// 	}
// 	// recursive call
// 	if(s<e+1){
// 	return checkpalindrome(str,s+1,e-1);
// }
// }
// int main(){
// 	string str="aa";
// 	int s=0;
// 	int e=str.size()-1;
// 	if(checkpalindrome(str,s,e)){
// 		cout<<"Yes your string is palindrome";
// 	}
// 	else{
// 		cout<<"No your string is not palindrome";
// 	}
// }

// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// void solve(string &str,char c,int i,string &ans){
// 	// Base case 
// 	if(i>str.size()){
// 		return;
// 	}
// 	// Ek case solve kr do recursion bhaiya
// 	if(str[i]!=c){
//           ans.push_back(str[i]);
// 	}
    
// 	// baki recursion smbha lega
// 	return solve(str,c,i+1,ans);
// }
// int main(){
// 	string str="geeksforgeeks";
// 	char c='e';
// 	string ans="";
// 	solve(str,c,0,ans);
// 	for(int i=0;i<ans.size();i++){
// 		cout<<ans[i]<<" ";
// 	}
// }

// #include<iostream>
// #include<bits/stdc++.h>
// #include<vector>
// using namespace std;
// void solve(vector<int>& arr,vector<int>ans,vector<vector<int>>& output,int i){
//     //Base case 
//     if(i>=arr.size()){
//         output.push_back(ans);
//         return;
//     }
//     /// Inclusive
//     ans.push_back(arr[i]);
//     solve(arr,ans,output,i+1);
//     // exclusive
//     ans.pop_back();
//     solve(arr,ans,output,i+1);

// }
// int main(){
//     vector<int>arr(5);
// 		arr.push_back(1);
// 		arr.push_back(4);
// 		arr.push_back(2);
// 		arr.push_back(5);
// 		arr.push_back(3);
//         vector<vector<int>>output;
//         vector<int>ans;
//         solve(arr,ans,output,0);
// 		for(int i=0;i<output.size();i++){
// 			for(int j=0;j<output[i].size();j++){
// 				cout<<output[i][j]<<endl;
// 			}
// 		}

//         int sum=0;
//         for(int i=0;i<output.size();i++){
//                 for(int j=0;j<output[i].size();j++){
//                     if(output[i].size()%2==1)
//                     sum+=output[i][j];
// 					cout<<sum<<endl;
//                 }
//             }
//     }
#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int>nums(5);
	nums.push_back(1);
	nums.push_back(2);
	nums.push_back(3);
	nums.push_back(2);
	nums.push_back(4);
	unordered_map<int,int>m;
	for(int i=0;i<5;i++){
       m[i]++;
	   cout<<m[i]<<endl;
	
	
}