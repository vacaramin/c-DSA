#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector <string> countries(0, "");

    vector<string>::iterator itr; 

    countries.push_back("Pakistan");
    countries.push_back("America");
    countries.push_back("germany");
    countries.push_back("Netherlands");
    countries.push_back("France");
    countries.push_back("UK");
    countries.push_back("Saudi");
    countries.push_back("UAE");
    countries.push_back("Turkey");
    countries.push_back("India");
    
    for(int i = 0; i< countries.size(); i++){
        cout << "Country#" << i+1 << " " << countries[i] << endl; 
    }
    cout<<endl;
    for(int i = 0; i< countries.size(); i++){
        cout<<"initial size = " << countries.size() << " i = " << i << "\t";
        cout<<"popped " << countries[countries.size() -1] << endl;
        countries.pop_back();
    }

    cout<<"Last size " << countries.size() << endl;

    for(int i = 0; i< countries.size(); i++){
        cout << "Country#" << i+1 << " " << countries[i] << endl; 
    }
    for (itr = countries.begin(); itr != countries.end(); ++itr)
    {
        cout << *itr << " ";
    } 
    cout << endl;
    return 0;
}