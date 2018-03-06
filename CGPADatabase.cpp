#include<bits/stdc++.h>
using namespace std;
int main(){
while(1){
   // cout<<" Enter your last semester till which result has been declared "<<endl;
    int sem;
   // cin>>sem;
    double sgpa[5],sum=0,cgpa;
   int  credit[]={29,30,23,23,22,25,15,15};
   int tc=0;

    cout<<"Enter your ROLL NO.( only integral part . ex-15093) "<<endl;
    string roll,oroll;
    cin>>roll;
    oroll="BE/15";
    oroll+=roll[2];
    oroll+=roll[3];oroll+=roll[4];oroll+="/15";

    string line;
  ifstream myfile ("all5.txt");
  int count=99,s=0,flag=0;
  string name="";
  string branch="CSE";
  string semester="6th";
cout<<" fetching data . ";
 for(int i=0;i<200000000;i++){int a=0;}cout<<". ";
      for(int i=0;i<200000000;i++){int a=0;}cout<<". ";
       for(int i=0;i<200000000;i++){int a=0;}cout<<". "<<endl;
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
        string d="";
        for(int i=0;i<11;i++){d+=line[i];}


        if(d==oroll){
                if(flag==0){
                        for(int j=12;j<line.length();j++){name+=line[j];}flag=1;}
                count=0;s++;}
        count++;if(count==3){stringstream ss;
        string nline="";nline+=line[11];nline+=line[12];nline+=line[13];nline+=line[14];
       // cout<<nline<<endl;
    ss << nline;ss.str(nline);
    ss >> sgpa[s-1];
    }
    if(s>5){break;}

     // cout << line << '\n';
    }
    myfile.close();
  }

//cout<< " s= "<<s<<endl;
cout<<endl<<endl;
for(int i=0;i<500000000;i++){int a=0;}
 cout<<oroll<<endl;
cout<<name<<endl<<branch<<endl<<semester<<endl;

for(int i=0;i<5;i++){
   cout<<" Your SGPA "<<i+1<<"th"<<" semester is  "<<sgpa[i]<<endl;for(int j=0;j<200000000;j++){int a=0;}}

cout<<endl;
   for(int i=0;i<5;i++){sum+=credit[i]*sgpa[i];tc+=credit[i];
   cout<<" Your CGPA till "<<i+1<<"th"<<" semester is  "<<sum/tc<<endl;}

cout<<endl;
    cgpa=(double)sum/tc;
       cout<<" Your F|I|N|A|L CGPA is "<<cgpa<<endl;
       if(cgpa>=8){cout<<" GREAT!!!!  YOU ARE A GENIOUS  "<<endl;}
       else if(cgpa>=7.5){cout<<" VERY GOOD ... KEEP IT UP "<<endl;}
       else if(cgpa>=7.00){cout<<" CONGRATULATIONS YOU GOT DISTINCTION "<<endl;}
       else if(cgpa>=6.00){cout<<" GOOD ... BUT YOU CAN DO BETTER "<<endl;}
       else {cout<<" IMPROVE IMPROVE IMPROVE ... DANGER  ZONE...."<<endl;}





}
return 0;
}
