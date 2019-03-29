#include <iostream>
using namespace std;
struct stiva
{
    int l=0;
    int *a;
    int r=0;
    bool ordered=0;
    Stiva(int n)
    {
        a=new int[n];
        r=l=n>>1;
    }

    int left()
    {
        return a[l+1];
    }
    int right()
    {
        return a[r];
    }
    bool isempty()
    {
        if (l>r)
            return 1;
        return 0;
    }
    void pushleft(int x)
    {
        a[l--]=x;
    }
    void pushright(int x)
    {
        a[++r]=x;
    }
    void popleft()
    {
        l++;
    }
    void popright()
    {
        r--;
    }
    void afis()
    {
        if(!isempty())
            for(int i=l+1; i<=r; i++)
                cout<<a[i]<<" ";
    }
    int partition (int low, int high)
    {
        if(low<l || high>r)
            return -1;
        // pivot (Element to be placed at right position)
        int pivot = a[high];

        int i = (low - 1);  // Index of smaller element

        for (int j = low; j <= high- 1; j++)
        {
            // If current element is smaller than or
            // equal to pivot
            if (a[j] <= pivot)
            {
                i++;    // increment index of smaller element
                swap(a[i],a[j]);
            }
        }
        swap (a[i + 1],a[high]);
        return (i + 1);
    }
    void quicksort(int low, int high)
    {
        ordered=1;

        if (low < high)
        {
            /* pi is partitioning index, arr[p] is now
               at right place */
            int pi = partition(low, high);

            // Separately sort elements before
            // partition and after partition
            quicksort(low, pi - 1);
            quicksort(pi + 1, high);
        }
    }

    int bsearch(int val)
    {
        int i;
        int step;
        int N=l-r;
        if(!ordered)
            return -1;

        for(step=1; step<=N; step<<1);
        for(i=1; step; step>>1)
            if(i+step<=N && a[i+step]<=val)
                i+=step;
        return i;
    }

};
