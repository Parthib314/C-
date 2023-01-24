#include<iostream>
using namespace std;
template <class T>
class vector{
    public:
     T * arr;
     int size;
     public:
     vector(int m){
         size=m;
         arr =new T [size];
     }
     T dotproduct(vector &v){
   T d=0;
   for (int i=0;i<size;i++){
       d +=this->arr[i] * v.arr[i];
      
   }
    return d;
     }
};
int main() {
   vector <float> v1(3);
   v1.arr[0]=4.23;
   v1.arr[1]=3.25;
   v1.arr[2]=1.14;
  
   vector <float> v2(3);
   v2.arr[0]=1.36;
   v2.arr[1]=0.69;
   v2.arr[2]=1.14;
   float a=v1.dotproduct(v2);
   cout<<a<<endl;
  
    return 0;
}