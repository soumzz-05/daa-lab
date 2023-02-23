#include <iostream>
#include <stack>
using namespace std;
int count;
int n;
int c;

class graph
{
    int a[10][10];
    int n;

public:
    void create_graph();
    void DFS(int s);
    void BFS(int s);
    void mother_vertex();
};
void graph::create_graph()
{
    count++;
    cout << "Enter the number of vertices" << endl;
    cin >> n; count++;
    cout << "Enter the elements" << endl; count++;
    for (int i = 0; i < n; i++)
    {
         count++;
        for (int j = 0; j < n; j++)
        {
             count++;
              count++;
            if (i == j)
            {
                a[i][j] = 0; count++;
                continue; count++;
            } count++;

            cout << "Do u want a path between " << i << "and " << j << endl; count++;
            cout << "Enter 1 for connection and enter 0 for" << endl; count++;
            int x; count++;
            cin >> x; count++;
            a[i][j] = x == 1; count++;
        } count++;
    } count++;
}

void graph::DFS(int s)
{
    n++;
    int visited[10], u;
    for (int i = 0; i < n; i++)
    {
        n++;
        visited[i] = 0;
    }n++;
    int stack[10], top;n++;
    top = -1;n++;
    visited[s] = 1;n++;
    stack[++top] = s;n++;
    if (top >= 0)
    {
        n++;
        u = stack[top--];n++;
        for (int i = 0; i < n; i++)
        {
            n++;
            n++;
            if (a[u][i] == 1 & visited[i] == 0)
            {
                visited[i] = 1;n++;
                stack[++top] = i;n++;
            }n++;
        }n++;
        cout << u << " ";
        n++;
    }
}
void graph::BFS(int s)
{
    c++;
    int visited[10], u, v;c++;
    for (int i = 0; i < n; i++)
    {
        c++;
        visited[i] = 0;c++;
    }
    int queue[10], front, rear;c++;
    front = -1;c++;
    rear = -1;c++;
    queue[++rear] = s;c++;
    if (front <= rear)
    {
        c++;
        u = queue[++front];c++;
        for (int v = 0; v < n; v++)
        {
            c++;
            c++;
            if (a[u][v] == 1 && visited[v] == 0)
            {
                visited[v] = 1;c++;
                queue[++rear] = v;c++;
            }c++;
        }c++;
        cout << u << " ";
        c++;
    }
}
void graph::mother_vertex()
{
    int i, flag = 1;
    while (i < n)
    {
        i = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] != 1)

                flag = 0;
        }
        if (flag == 1)
        {
            cout << "The mother vertex is " << i;
            break;
        }
    }
}
int main()
{
    count=0;
    n=0;
    c=0;

    graph p;
    int choice;
    cout << "1.Create a graph\n2.DFS\n3.BFS\n4.Mother vertx\n5.Transpose of a matrix" << endl;
    do
    {
        cout << "Enter choice" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            p.create_graph();
            cout<<"\n number of steps taken to create a graph: "<<count<<endl;
            break;

        }
        case 2:
        {
            int s;
            cout << "Enter the source node" << endl;
            cin >> s;
            p.DFS(s);
            cout<<"\n number of steps taken for dfs: "<<n<<endl;
            break;
        }
        case 3:
        {
            int s;
            cout << "Enter the source node" << endl;
            cin >> s;
            p.BFS(s);
            cout<<"\n number of steps taken for bfs: "<<c<<endl;
            break;
        }
        case 4:
        {
            p.mother_vertex();
            break;
        }

        default:
            break;
        }

    } while (choice != 0);
}
