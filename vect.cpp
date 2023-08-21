// // #include<iostream>
// // using namespace std;
// // int main(){
// //     int n=6;
// //     int a[6];
// //     for (int i=0;i<6;i++){
// //         cin>>a[i];
// //     }
    
// //     cout<<check(a);
// // }
// //     int check(int a[])
// //     {
// //     int aa=8;
// //         for(int i=0;i<6;i++){
// //             for(int j=i+1;j<6;j++){
// //                 if((a[i]==a[j]) && (a[i]==aa)){
// //                     int ans=(i,j);
// //                     return ans;;
// //                 }
// //                 else{
// //                     int k=(-1,-1);
// //                     return k;
// //                 }
// //             }
// //     }
    
// //     }
// #include <iostream>
// #include<vector>
// using namespace std;

// int main()
// {
// 	vector<int> a(5),b(5),c,d;
// 	int m=2;
//     int j=1;
   
//     for(int i=0;i<d.size();i++){
//         cout<<d[i]<<" ";
//     }

    
// // 	cout<<"[";
// // 	for (int i=0;i<c.size();i++){
// // 		cout<<c[i];
// // 		if(i<c.size()-1) cout<<",";
		
// // 	}
// //    cout<<"]";
// 	return 0;
// }
#include<iostream>
using namespace std;
int main(){
    int a=3;
    for(int i=0;i<a;i++){
        for(int j=0;j<i;j++){
            cout<<" "<<a<<" ";
        }
        cout<<endl;
    }
}