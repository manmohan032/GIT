#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class Student{
public:
int age,st;
string fn,ln;
    void get_age()
    {
        cout<<age;
    }
    void get_last_name()
    {
        cout<<ln<<endl;
    }
    void get_first_name()
    {
        cout<<fn<<endl;
    }
    void get_standard()
    {
        cout<<st<<endl;   
    }
    void to_string()
    {
        cout<<age<<","<<fn<<","<<ln<<","<<st<<endl;
    }
    void set_age(int a)
    {
        age=a;
    }
    void set_last_name(string lna)
    {
        ln=lna;   
    }
    void set_first_name(string fna)
    {
        fn=fna;
    }
    void set_standard(int std)
    {
        st=std;
    }
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout<<st.get_age()<<endl;
    cout<<st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout<<st.get_standard() << "\n";
    cout<<"\n";
    cout<<st.to_string();
    
    return 0;
}
