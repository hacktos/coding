#include <iostream>
#include <array>
using namespace std;
class array_op
{
public:
    int arr[100], n,search_index=1000;

    void insertion(int size)
    {
        n = size;
        cout << "Enter the elemets " << endl;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
    }
    void sorted()
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                if (arr[j] < arr[j + 1])
                {
                }
                else
                {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
            
        }
        
    }
    void display()
    {
        for (int i = 0; i < n; i++)
                cout << arr[i] << " ";
    }
    void display_d()
    {
        for (int i = 0; i < n-1; i++)
                cout << arr[i] << " ";
    }
    void searching_delete(int ele)
    {
        for(int i=0;i<n;i++)
        {
            if(arr[i]==ele)
            {   
                cout<<"element found now the element will be deleted :) "<<endl;
                search_index=i;
            }
        }
        if(search_index==1000)
        {
            cout<<"No elements found "<<endl;
            exit(0);
        }
        else{
            for(int i=search_index;i<n-1;i++)
            {
                arr[i]=arr[i+1];
            }
        }
    }
    
};
int main()
{
    array_op obj;
    int n;
    cout << "\nEnter the number of the array elments " << endl;
    cin >> n;
    obj.insertion(n);
    cout<<"\nyour elements "<<endl;
    obj.display();
    cout << "\nYour array will be sorted " << endl;
    obj.sorted();
    cout << "\nYOur sorted array with bubble sort " << endl;
    obj.display();
    cout<<"\nENter the elements to find the element and to delete "<<endl;
    int ele;
    cin>>ele;
    obj.searching_delete(ele);
    cout<<"\nNow the array is "<<endl;
    obj.display_d();
    return 0;
}



