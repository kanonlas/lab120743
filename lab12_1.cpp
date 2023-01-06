#include<iostream>

#include<cstdlib>
#include <ctime>
using namespace std;

int main(){
    
string grade[] = {"A", "B+", "B", "C+", "C", "D+", "D", "F", "W" };
srand(time(0));
int p = rand()%9;
int x;

cout << "Press Enter 3 times to reveal your future." ;
while(x != 3){
    cin.get();
    x = x+1;
}
   cout << "You will get " << grade[p] << " in this 261102.";

}


/*int y;

cout << "Press Enter 3 times to reveal your future.";
while(y != 3){
cin.get();
y = y+1;
}
srand(time(0));
int x = rand()%9;
if( x == 0) cout <<  "You will get A in this 261102.";
else if( x == 1) cout <<  "You will get B+ in this 261102.";
else if( x == 2) cout <<  "You will get B in this 261102.";
else if( x == 3) cout <<  "You will get C in this 261102.";
else if( x == 4) cout <<  "You will get C in this 261102.";
else if( x == 5) cout <<  "You will get D+ in this 261102.";
else if( x == 6) cout <<  "You will get D in this 261102.";
else if( x == 7) cout <<  "You will get F in this 261102.";
else if( x == 8) cout <<  "You will get W in this 261102.";

return 0;
}*/



