#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//////////faster the cin & cout function////////
#define endl '\n'

int main()
{
    /////////concatation//////////

    optimize();

    string s5;
    string s1="Omar",s2="Rashid";
    char c=' ';
    s5=s1+c+s2;
    cout<<s5<<endl;

    ///clearing string///////
    s1.clear();
    cout<<s1<<endl;


    ///inputtting s2 into s1/////////
    s1=s2;
    cout<<s1<<endl;


    ///////clearing string//////////
    s1.clear();
    //////string empty or not
    cout<<s1.empty()<<endl;

    ///iterator 30min//////////
    string::iterator i;
    for(i=s5.begin();i!=s5.end();i++){
        cout<<*i;
    }
    cout<<endl;


    ///for each loop///////
    for(auto u:s5){
        cout<<u;
    }
    cout<<endl;
    s1="Rashid";
    cout<<s1<<"3"<<endl;
    cout<<s2<<"3"<<endl;
    if(s1==s2)cout<<"equal"<<endl;
    else cout<<"Not Equal"<<endl;
    reverse(s1.begin(),s1.end());
    cout<<s1<<endl;


    ///palindrome/////////////
    string h;
    cin>>h;
    string t=h;
    reverse(t.begin(),t.end());
    if(t==h)cout<<"palindrome"<<endl;
    else cout<<"Not palindrome"<<endl;


    ///space er porer string newar jonno//////////
    string m;
    getline(cin,m);
    cout<<m<<endl;
    ///sorting////////

    string s="OmarRashid";
    ///getline(cin,s);
    sort(s.begin(),s.end());
    cout<<s<<endl;
    ///reverse sorting////////
    sort(s.rbegin(),s.rend());
    cout<<s<<endl;
    ///unique string/////////

    int sz=unique(s.begin(),s.end())-s.begin();

    for(int i=0;i<sz;i++) cout<<s[i];
    cout<<endl;
    ///min & max element of a string //////////

    cout<<*max_element(s.begin(),s.end())<<endl;
    cout<<*min_element(s.begin(),s.end())<<endl;

    ///erasing element of string/////////////
    s.erase(s.begin());
    s.erase(s.end()-1);
   // s.pop_back();
    cout<<s<<endl;
    ///string into vector///////////
    vector<string>v1;
    v1.push_back("Omar");
    v1.push_back("Rashid");
    v1.push_back("Badshah");
    v1.push_back("salma");
    v1.push_back("abdullah");
    sort(v1.begin(),v1.end());
    for(auto u:v1)cout<<u<<endl;

    ///reverse./////////
    vector<string>v;
    v.push_back("Omar");
    v.push_back("Rashid");
    v.push_back("Badshah");
    v.push_back("salma");
    v.push_back("abdullah");
    sort(v.rbegin(),v.rend());
    for(auto u:v)cout<<u<<endl;

    ///string compare/////////////
    ///laxiographically smallest/////

    string m2 = "eeeomar" , t2 = "eeerashid";
    if(m2>t2) cout<<t2<<" "<<"is a smallest";
    else cout<<m2<<" "<<"is a smallest"<<endl;
    ///capital & small letter////////
    string m1 = "ABCDE" , t1 = "abcd";
    if(m1>t1) cout<<t1<<" "<<"is a smallest";
    else cout<<m1<<" "<<"is a smallest";*/
    ///remove specific character from a string//////

    string g="ASASHFAJDIFJ";
    g.erase(remove(g.begin(),g.end(),'A'),g.end());
    cout<<g<<endl;

////////second video/////////////
    ///////print last element of a string/////////
    string s="abcd";
    cout<<s.back()<<endl;
    /// deleting last element of a string
    s.pop_back();
    cout<<s.back()<<endl;
    ///unique string////////////
    vector<string>v;*/

    v.push_back("gdfgdfglsl");
    v.push_back("dcbxvbxcvsl");
    v.push_back("djhjklkll");
    v.push_back("xcvb5tysl");
    v.push_back("djhjklkll");
    v.push_back("djhjklkll");

    sort(v.begin(),v.end());
    int sz=unique(v.begin(),v.end())-v.begin();
    cout<<sz<<endl;
    for(int i=0;i<sz;i++) cout<<v[i]<<endl;
    //////////convert integer value into string///////
    int a=1234;
    string h= to_string (a);/*function*/

    cout<<h<<endl;
    h[0]='2';
    cout<<h<<endl;



    ///convert string to integer/////////
    string r="3456";
    int b=stoi(r);/*function*/

    b++;
    cout<<b<<endl;
    ///determine if a char is upper or lower latter/////////
    char c='A';
    bool f1=isupper(c);/*function*/
    /*
    cout<<f1<<endl;
    bool f2=islower(c);
    cout<<f2<<endl;/*function*/
    /////////////check space///////////
    /*
    char y=' ';
    bool f3=isspace(y);
    cout<<f3<<endl;
    ///convert a lowercase to uppercase/////////
    char u=tolower(c);
    cout<<u<<endl;
    char g=toupper(u);
    cout<<g<<endl;
/////////20 min/////////////////
    /////deleting character/substring of a string////////////
    string p="shahriaralam";
    p.erase(p.begin()+2,p.begin()+6);
    cout<<p<<endl;
    /////////concate a string & substring/////////
    string q="Omar";
    string w="rashid badshah";
    copy(w.begin()+6,w.end(),back_inserter(q));
    cout<<q<<endl;
    //////////deleting specific char of a string//////////
    string n="asdfhsdjawdsjfao";
    n.erase(remove(n.begin(),n.end(), 'a'),n.end());
    cout<<n<<endl;
    //////////check is there any substring available in a string/////
    string j="Omar";
    if(j.find("arr")!=-1) cout<<"found"<<endl;
    else cout<<"Not found"<<endl;
    */
    ///convert uppercase to lowercase
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);*/
    ///substring



    s1 = s.substr(0, s.size()-3);


    ///gcd

    cout << __gcd(6, 20) << endl;

    ///how to separate all the words in a string & put them into a vector

    for(auto &u:s){
        if(isspace(u)){
            v.push_back(tmp);
            tmp.clear();
        }
        else tmp+=u;
    }
    v.push_back(tmp);







    ///Codeforces Beta Round 89 (Div. 2)//problem: https://codeforces.com/problemset/problem/118/A////
    /*string s,k;
    cin>>s;
    for(auto t:s){
        char u=tolower(t);
        if(u=='a' || u=='o' || u=='y' || u=='e' || u=='u' || u=='i'){
        }
        else{
            k+='.';
            k+=u;
        }


    }
    cout<<k;*/

    ///https://practice.geeksforgeeks.org/problems/sum-of-digit-is-pallindrome-or-not2751/1
    /*
    int x,t;
    cin>>x;
    int s=0;
    while(x>0){
        t=x%10;
        s+=t;
        x=x/10;
    }
    //cout<<s<<endl;
    string h= to_string (s);
    string g=h;
    reverse(g.begin(),g.end());
    if(g==h) return 1;
    else return 0;
*/
    /// Codeforces Beta Round 85 (Div. 2 Only)/////https://codeforces.com/contest/112/problem/A
/*
    string a,b,s,t;
    cin>>a;
    cin>>b;
    for(auto u:a){
        char d=tolower(u);
        s+=d;
    }
    for(auto u:b){
        char d=tolower(u);
        t+=d;
    }
    if(s>t) cout<<"1"<<endl;
    else if(s<t) cout<<"-1"<<endl;
    else cout<<"0"<<endl;
*/
////////Codeforces Beta Round 70 (Div. 2)///https://codeforces.com/contest/78/problem/A
    /*string a,b,c;
    getline(cin,a);
    getline(cin,b);
    getline(cin,c);
    int t=0,r=0,e=0;
    //cout<<a<<endl<<b<<endl<<c<<endl;
    for(auto u:a){
        if(u=='a' || u=='e' || u=='i' || u=='o' || u=='u') t++;
    }
    for(auto u:b){
        if(u=='a' || u=='e' || u=='i' || u=='o' || u=='u') r++;
    }
    for(auto u:c){
        if(u=='a' || u=='e' || u=='i' || u=='o' || u=='u') e++;
    }
    if(t== 5 && r==7 && e==5) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;*/
///////////1:25:58


















}
