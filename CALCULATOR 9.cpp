#include <iostream> 
#include <cmath> //  For advanced math functions 
using namespace std;

int main (int, char**) {
    int a,b,c,sum,sub,mul,div,x;
    cout<<"case 1: for addition "<<endl;
    cout<<"case 2: for subtraction"<<endl;
    cout<<"case 3: for multiplication"<<endl;
    cout<<"case 4: for diivision"<<endl;
    cout<<"case 5: for squareroot"<<endl;
    cout<<"case 6: for power"<<endl;
    cout<<"Enter 00 to end the program or any other value to continuoue"<<endl;
    cin>>c;

    while(c!=00){
        cout<<endl;
        cout<<"Enter value of a and b"<<endl;
        cin>>a>>b;
        cout<<"Enter your own choice of calculation"<<endl;
        cin>>x;
        switch(x){
            case 1:
            cout<<"addition of a+b =";
            cout<<a+b<<endl;
            cout<<"Enter 00 to end the program or any other value to continuoue"
            
       "cin>>c";
              break;
              case 2:
              cout<<"addition of a+b =";
              cout<<a+b<<endl;
              cout<<"Enter 00 to end the program or any other value to continuoue"
        "cin>>c"; 
               break;
               case 3:
               cout<<"subtraction of a-b =";
               cout<<a-b<<endl;
               cout<<"Enter 00 to end the program or any other value to continuoue"
               
        "cin>>c"; 
               break;
               case 4:
               cout<<"mult of a+b =";
               cout<<a*b<<endl;
               cout<<"Enter 00 to end the program or any other value to continuoue"
         "cin<<c"; 
               break;
               case 5:
               cout<<"division of a/b =";
               cout<<a/b<<endl;
               cout<<"Enter 00 to end the program or any other value to continuoue"
        "cin>>c";
            break;
            default:
            cout<<"undefine";
        }
    }
cout<<"program over";

return 0;
}



        


    

