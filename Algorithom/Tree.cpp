#include<iostream>
using namespace std;
int leftChild(int noneindex)
{
    return noneindex*2+1;
}
int rightChild(int nodeindex)
{

    return nodeindex*2+2;
}
int preorder(int* mas, int nodeindex, int &i, int * arr)
{

    if(mas[nodeindex]==0)
        return 0;
    arr[i++] = mas[nodeindex];
    preorder(mas, leftChild(nodeindex), i, arr);
    preorder(mas, rightChild(nodeindex), i, arr);

}

int main()
{

    int mas[93] = {2,3,1,9,8,7,6,5};
    int arr[9] = {0};
    int i=0 ;
    preorder(mas, 0 , i  , arr);
    cout<<"Preorder\n";
    for(int k = 0 ; k < 9 ; k++)
        cout<<arr[k]<<endl;

    return 0;

}
