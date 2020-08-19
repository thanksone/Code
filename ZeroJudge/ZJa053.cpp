#include <iostream>
using namespace std;

int main(){
    int finished, score = 0;
    while(cin >> finished){
        if(finished >= 40){
            score = 100;
        }else{
            while(finished > 0){
                if(finished > 20){
                    finished--;
                    score++;
                }else if(finished > 10){
                    finished--;
                    score += 2;
                }else{
                    finished--;
                    score += 6;
                }
            }
        }
        cout << score << endl;
    }
    return 0;
}
