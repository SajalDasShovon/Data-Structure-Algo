#include<bits/stdc++.h>

using  namespace std;

int n;

void selectionSort(vector<int>&v)
{
    for (int i=0; i<n-1; i++)
    {

        int min=i;
        for (int j=i+1; j<v.size(); j++)
        {
            if (v[j]<v[min]);

            min=j;
        }

        if (min !=i)
        {
            int temp=v[min];
            v[min]= v[i];
            v[i]=temp;

        }

    }

}



int main()
{

    cout<<"Enter Size of Vector"<<endl;

    cin>> n;


    cout<< "Give some random values" <<endl;

    vector<int>v(n);


    for (int i=0; i<=n ;i++)
    {
        cin>>v[i];
    }

   cout <<"Unsorted array is"<<endl;
    for (auto it =v.begin() ; it!=v.end(); it++)
    {
       cout<<*it<<endl;
       cout<<" "<<endl;
    }

    selectionSort(v);


   cout<< "Sorted array is" <<endl;
    for (auto it =v.begin() ; it!=v.end(); it++)
    {
       cout<<*it<<endl;
       cout<<" "<<endl;
    }

    return 0;


}
