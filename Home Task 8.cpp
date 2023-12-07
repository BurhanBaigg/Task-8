#include <iostream>
using namespace std;

//TASK 1
int main() {
int size,Repvalue,mostrep,maxcount=0;
cout<<"Enter size of the array: "<<endl; cin>>size;
int reparray[size];
cout<<"\nEnter similar terms for the array: "<<endl;

for (int i=0;i<size;i++) {
cin>>reparray[i];
}

for (int i=0; i<size;i++) {
int count=1;
for (int j=i+1;j<size;j++) {
if (reparray[i]==reparray[j]) {

count++;
}
}
if (count>maxcount) {
maxcount=count;
mostrep=reparray[i];
}
}
cout<<"The most repeated value in the array is: "<<mostrep<<" with the count of: "<<maxcount<<endl;
return 0;
}



//TASK 2
int main () {

int a[8]= {13,15,17,9,99,77,65,43};
int minval=a[0],maxval=a[0];
for (int i=0;i<5;i++) {
if (a[i]>maxval) {
	maxval=a[i];
}
}
for (int j=0;j<5;j++) {
if (a[j]<minval) {
	minval=a[j];
}
}
cout<<"The minimum value in the array is: "<<minval<<endl;
cout<<"The maximum value in the array is: "<<maxval<<endl;
return 0;
}

//TASK 3

int main () {
	
int array[5];
cout<<"Enter different terms for the array: "<<endl;
for (int i=0;i<5;i++) {
cin>>array[i];
}
int temp;
temp=array[1];
array[1]=array[3];
array[3]=temp;
for (int j=0;j<5;j++) {
cout<<array[j]<<" ";}
return 0;
}
