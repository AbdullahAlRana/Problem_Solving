#include<bits/stdc++.h>
using namespace std;

string q0(char a){
    if(a=='a')
        return "q0 , a -> q1";
    else if(a=='b')
        return "q0 , b -> q4";

}
string q1(char b){
    if(b=='a')
        return "q1 , a -> q2";
    else if(b=='b')
        return "q1 , b -> q4";

}
string q2(char c){
    if(c=='a')
        return "q2 , a -> q3";
    else if(c=='b')
        return "q2 , b -> q4";
}
string q3(char d){
    if(d=='a')
        return "q3 , a -> q3";
    else if(d=='b')
        return "q3 , b -> q4";
}
string q4(char e){
    if(e=='a')
        return "q4 , a -> q4";
    else if(e=='b')
        return "q4 , b -> q5";
}

string q5(char f){
    if(f=='a')
        return "q5 , a -> q5";
    else if(f=='b')
        return "q5 , b -> q4";
}

int main()
{
    cout << "Enter a string: " << endl;
    string s;
    cin>>s;
    cout<< "CurrentState , Input , NewState"<<endl;
    string state=q0(s[0]);
    cout<<state<<endl;
    for(int i=1;i<s.length();i++)
    {
        if(state[11]=='1'){
            state=q1(s[i]);
            cout<<state<<endl;
        }
        else if(state[11]=='2'){
            state=q2(s[i]);
            cout<<state<<endl;
        }
        else if(state[11]=='3'){
            state=q3(s[i]);
            cout<<state<<endl;
        }
        else if(state[11]=='4'){
            state=q4(s[i]);
            cout<<state<<endl;
        }
        else if(state[11]=='5'){
            state=q5(s[i]);
            cout<<state<<endl;
        }
    }

    return 0;
}
