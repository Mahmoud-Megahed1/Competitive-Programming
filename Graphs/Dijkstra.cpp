#include <iostream>
#include <vector>
#include <queue>
#include <limits>

using namespace std;

const int INF = numeric_limits<int>::max(); // قيمة اللانهاية

// هيكل بيانات للحافة (Edge)
struct Edge
{
    int to, weight; // الوجهة والوزن
};

void dijkstra(int start, vector<vector<Edge>> &graph)
{
    int n = graph.size();
    vector<int> dist(n, INF); // مصفوفة المسافات (نضع كل القيم إلى ∞)

    // الأولوية للـ pair الذي يحتوي على (المسافة, العقدة)
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;

    dist[start] = 0;     // المسافة إلى نقطة البداية = 0
    pq.push({0, start}); // إضافة نقطة البداية إلى الـ Priority Queue

    while (!pq.empty())
    {
        int d = pq.top().first;     // أقل مسافة مكتشفة حاليًا
        int node = pq.top().second; // العقدة الحالية
        pq.pop();                   // إزالة العقدة من الـ Priority Queue

        if (d > dist[node])
            continue; // إذا كانت هناك مسافة أقصر مسبقًا، لا نحدثها

        // تحديث المسافات للجيران
        for (Edge edge : graph[node])
        {
            int newDist = dist[node] + edge.weight; // حساب المسافة الجديدة
            if (newDist < dist[edge.to])
            {                                // إذا وجدنا مسارًا أقصر
                dist[edge.to] = newDist;     // تحديث المسافة
                pq.push({newDist, edge.to}); // إضافة العقدة الجديدة إلى Priority Queue
            }
        }
    }

    // طباعة أقصر المسافات
    cout << "أقصر المسافات من العقدة " << start << ":\n";
    for (int i = 0; i < n; i++)
    {
        cout << "إلى " << i << ": " << (dist[i] == INF ? -1 : dist[i]) << "\n";
    }
}

int main()
{
    int n = 5; // عدد العقد
    vector<vector<Edge>> graph(n);

    // إضافة الحواف (الشوارع)
    graph[0].push_back({1, 4});
    graph[0].push_back({2, 1});
    graph[1].push_back({3, 2});
    graph[2].push_back({3, 3});
    graph[2].push_back({4, 8});
    graph[3].push_back({4, 1});

    dijkstra(0, graph); // تشغيل ديكسترا من العقدة A (0)
    return 0;
}
