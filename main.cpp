#include<bits/stdc++.h>
using namespace std;
void inp_mas(int mas[], int &n)
{
    cin >> n;
    for(int i=0; i<n; ++i)
    {
        cin >> mas[i];
        cout<<mas[i]<<" ";
    }
    cout<<"OK";
    mas[500002] = 5;
}
void index_sorting(int mas[], int n)
{
    int i=0,j=1;
    while (i<n)
    {
        while (mas[i+j]=mas[i]+j)
        {
            ++j;
        }
        i+=j;
        j=1;
    }

}
int mas[200000];
int main()
{
    int n;
    inp_mas(mas, n);
    index_sorting(mas, n);
    return 0;
}
