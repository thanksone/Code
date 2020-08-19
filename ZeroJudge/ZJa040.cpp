#include <iostream>
#include<math.h>
using namespace std;

int main (){
  int a, b;
  while (cin >> a >> b){
        bool have = false;
        for (int i = a; i <= b; i++){
	        long long int h = 0, p = i, q = i, t = 1;
	        while(q >= 10){
	            q /= 10;
	            t++;
	        }
	        for (int j = 0; j < t; j++){
	            h += pow((p % 10), t);
	            p /= 10;
	        }
	        if (h == i){
	            cout << i << " ";
	            have = true;
	        }
	        else{
	            continue;
	        }
	    }
        if (have == false){
	    cout << "none";
	    }else{
	        continue;
	    }
    }
}
