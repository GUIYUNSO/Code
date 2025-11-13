#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int tol, col, blue;
    int cap;
    
    cin >> tol >> col >> blue;
    vector<int> data(tol);

    for (int i = 0; i < tol; i++)
    {
        cin >> data[i];
    }
    
    cin >> cap;
    vector<pair<int, int>> matrix(cap);
    for (int i = 0; i < cap; i++)
    {
        cin >> matrix[i].first >> matrix[i].second;
    }
    
    vector<int> min_cost(col + 1, blue + 1);
    for (int i = 0; i < cap; i++)
    {
        int color_val = matrix[i].first;
        int cost_val = matrix[i].second;
        if (cost_val < min_cost[color_val])
        {
            min_cost[color_val] = cost_val;
        }
    }
    
    vector<vector<int>> pos_group(col + 1);
    for (int i = 0; i < tol; i++)
    {
        pos_group[data[i]].push_back(i + 1);
    }

    int left = 0, right = tol, ans = tol;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        bool check_ok = false;
        
        for (int i = 1; i <= col; i++)
        {
            if (min_cost[i] > blue) continue;
            
            vector<int>& pos_list = pos_group[i];
            int cnt = pos_list.size();
            
            if (cnt == 0)
            {
                int need = (tol + mid + 1) / (mid + 1);
                if (1LL * need * min_cost[i] <= blue)
                {
                    check_ok = true;
                    break;
                }
                continue;
            }
            
            long long total_cost = 0;
            
            int gap = pos_list[0] - 1;
            if (gap > mid)
            {
                int need = (gap + mid) / (mid + 1) - 1;
                total_cost += 1LL * need * min_cost[i];
            }
            
            gap = tol - pos_list[cnt - 1];
            if (gap > mid)
            {
                int need = (gap + mid) / (mid + 1) - 1;
                total_cost += 1LL * need * min_cost[i];
            }

            for (int j = 0; j < cnt - 1; j++)
            {
                gap = pos_list[j + 1] - pos_list[j] - 1;
                if (gap > mid)
                {
                    int need = (gap + mid) / (mid + 1) - 1;
                    total_cost += 1LL * need * min_cost[i];
                }
            }
            
            if (total_cost <= blue)
            {
                check_ok = true;
                break;
            }
        }
        
        if (check_ok)
        {
            ans = mid;
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    
    cout << ans << endl;
    
    return 0;
}