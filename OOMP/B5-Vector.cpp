//Ass-B5  Vector
#include<iostream>
using namespace std;
template<class T>
class vector
{

    T v[10];
    int size;
     public:
    void create();
    void display();
    void modify();
    void mul();
    void sort();
};
template<class T> void vector<T>::create()
{
    T value;
    int index;
    char a;
    size=0;
    do
    {
        cout<<"\nEnter the Index and Value : ";
        cin>>index>>value;
        v[index]=value;
        size++;
        cout<<"\nIf you want to continue entering values press 'y' : ";
        cin>>a;
    }while(a=='y'||a=='Y');
}
template<class T> void vector<T>::display()
{
    cout<<"\nSize of the vector = "<<size;
    cout<<"\nElements of vector are : \n(";
    for(int i=1;i<=size;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<")";
}
template<class T> void vector<T>::sort()
{
    double temp;
    cout<<"\nSize of the vector = "<<size;
    for(int i=1;i<=size;i++)
    {
        for(int k=1;k<=size-1;k++)
        {
        if(v[k+1]<v[k])
            {
                temp=v[k];
                v[k]=v[k+1];
                v[k+1]=temp;
            }
        }
    }
    cout<<"\nElements of vector are : \n(";
    for(int j=1;j<=size;j++)
    {
        cout<<v[j]<<" ";
    }
    cout<<")";
}


template<class T> void vector<T>::modify()
{
    int index;
    T new_value;
    cout<<"\nEnter index of vector to be modified : ";
    cin>>index;
    cout<<"\nEnter the new value : ";
    cin>>new_value;
    v[index]=new_value;
}

template<class T> void vector<T>::mul()
{
    int scalar;
    cout<<"\nEnter the scalar value to be multiplied : ";
    cin>>scalar;
    for(int i=1;i<size+1;i++)
    {
        v[i]=v[i]*scalar;
    }
}

int main()
{
    int ch;
    vector<double> vt;
    do{
    cout<<"\nMenu : \n1.Create \n2.Display \n3.Sorted \n4.Modify \n5.Multiplication \n6.Exit\nEnter your choice : ";
    cin>>ch;
    switch(ch)
        {
            case 1: vt.create();
                    break;
            case 2: vt.display();
                    break;
            case 3: vt.sort();
                    break;
            case 4: vt.modify();
                    break;
            case 5: vt.mul();
                    break;
            case 6: exit(0);
                    break;
            default: cout<<"\nWrong Choise....";
                     break;
        }
    }while(ch!=6);

   return 0;
}
