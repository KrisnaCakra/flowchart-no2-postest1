#include <iostream>
#include <string>
#include <math.h>
using namespace std;

void hitung2 (float a, float b, float jarak){
	jarak = sqrt(a+b);
}

int main(){
   string raptor_prompt_variable_zzyz;
   float y1, a, hasil, jarak, x2, y2, b, x1;

   raptor_prompt_variable_zzyz ="Masukkan nilai (X1) = ";
   cout << raptor_prompt_variable_zzyz ;
   cin >> x1;
   raptor_prompt_variable_zzyz ="Masukkan nilai (Y1) = ";
   cout << raptor_prompt_variable_zzyz ;
   cin >> y1;
   raptor_prompt_variable_zzyz ="Masukkan nilai (X2) = ";
   cout << raptor_prompt_variable_zzyz ;
   cin >> x2;
   raptor_prompt_variable_zzyz ="Masukkan nilai (Y2) = ";
   cout << raptor_prompt_variable_zzyz ;
   cin >> y2;
   
   a = pow((x2-x1), 2);
   b = pow((y2-y1), 2);
   jarak = sqrt(a+b);
   hasil = sqrt(a+b);
   
   cout << "Jarak antara titik A ke B adalah = " << jarak << endl; 
   hitung2(a,b,hasil);
   cout << "Jarak antar dua fungsi adalah = " << hasil << endl;
   return 0;
}
