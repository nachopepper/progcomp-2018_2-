#include <iostream>
#include <algorithm>

using namespace std;

int heads[20005], knights[20005];

int main() // Codigo Copiado de Internet
{
    int n, m;
    
    while (cin >> n >> m, n)
    {
        for (int i = 0; i < n; ++i)
            cin >> heads[i];
        
        sort(heads, heads + n);   //Ordena elementos
        
        for (int i = 0; i < m; ++i)
            cin >> knights[i];
        
        sort(knights, knights + m);
        
        if (m < n)
        {
            cout << "Loowater is doomed!\n";
            continue;
        }
        
        int head = 0, knight = -1;
        int cost = 0;
        for (; head < n; ++head)
        {
           
            ++knight;
            
            while (knight < m && knights[knight] < heads[head])
                ++knight;
            
       
            if (knight == m)
                break;
            
            cost += knights[knight];
        }
        
        if (head != n)
            cout << "Loowater is doomed!\n";
        else
            cout << cost << '\n';
    }
}
