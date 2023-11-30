#include <iostream>

using namespace std;

////TASK 1
//int main () {
//
//int average,Sum=0;
//int ave[5];
//cout<<"Enter 5 values for the array: "<<endl; 
//for (int i=0; i<5; i++) {
//cin>>ave[i];
//Sum+=ave[i];
//}
//average=Sum/5;
//cout<<"The average of the terms entered is: "<<average<<endl;
//return 0;
//}

//TASK 2
//int main() {
//	
//    int Sortarray[5];
//    cout <<"Enter 5 terms for sorting: " <<endl;
//    for (int i=0;i<5;i++) 
//        cin>>Sortarray[i];
//    
//    cout<<"The original array was: ";
//    for (int j=0;j<5;j++)
//        cout<<Sortarray[j]<< " ";
//
//    for (int i=0;i<5-1;i++) {
//    for (int j=0;j<5-i-1;j++ ) {
//    if (Sortarray[j]>Sortarray[j+1]) {
//            int Temp=Sortarray[j];
//            Sortarray[j]=Sortarray[j+1];
//            Sortarray[j+1]=Temp;
//    }
//    }
//    }

//    cout<<"\nThe sorted array is: "<<endl;
//    for (int i=0;i<5;i++) {
//        cout<<Sortarray[i]<< " ";
//    }
//
//    return 0; 
//}


//TASK 3
int main () {
int size=5;
int array[size], midvalue=0;
cout<<"Enter 5 terms for the array: "<<endl;
for (int k=0;k<5;k++) {
	cin>>array[k];
}
for (int i=0;i<size;i++) {
midvalue=array[i];
for (int j=i;j<size;j++) {
if (midvalue>array[j]) {
	midvalue=array[j];
	array[j]=array[i];
	array[i]=midvalue;
}
}
cout<<array[i]<<" ";
}
return 0;
}
