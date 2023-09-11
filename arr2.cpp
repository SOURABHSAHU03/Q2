//merge two sorted arrays
#include<iostream>
#include<vector>
using namespace std;
void merge(int a[],int n ,int s[],int m,int b[]){
    int i=0,j=0;
    int k=0;
    while(i<n && j<m ){
        if(a[i] < s[j]){
            b[k++] = a[i++];
        }
        else{
            b[k++] = s[j++];
        }
    while(i<n){
        a[k++] = a[i++];
    }
     while(j<m){
        s[k++] = s[j++];
    }
    }
}
void print(int a[],int  n){
    for(int i=0;i< n;i++){
        cout << a[i]<< " ";
    }
}
int main(int argc, char const *argv[])
{
    int a[5] = {1,3,5,8,9};
    int b[3] = {2,4,6};
    int c[8] = {0};
    merge(a,5,b,3,c);
    print(c,8);
    return 0;
}
