#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
// #include <bits/stdc++.h>
#include <malloc.h>

#define INFINITY 9999
#define MAX 10

int main_exit;
int menu();

int V, edge[20][2], i, j, k = 0;
int n, u, p[10][10], w, e, v;

int min(int a, int b)
{
    if (a < b)
        return (a);
    else
        return (b);
}

void intro()
{
    printf("\033[0;32m\n\n\n\n\n");
    printf("\t\t\t==============================");
    printf("\n\t\t\t\t  Group 9");
    printf("\n\t\t\t==============================");
    // system("color 8A");
    // system("cls");
    printf("\n\n\n\n");
    getch();
    printf("\n\n\n\n\n");
    printf("\t\t\t==============================");
    printf("\n\t\t\t\tGroup Members");
    printf("\n\t\t\t==============================");

    printf("\n\n\t\t\t\t 51.Rohant Narang");
    printf("\n\n\t\t\t\t 64.Vedika Jumbad");
    printf("\n\n\t\t\t\t 65.Vishal Singh");
    printf("\n\n\t\t\t\t 66.Pallavi Wasade ");
    printf("\n\n\t\t\t\t 68.Sakshi Zod");
    printf("\n\n\t\t\t==============================");
    printf("\n\t\t\t==============================");

    getch();

    printf("\n\n\n\n");
    printf("\n\n\t\t\t==============================================");
    printf("\n\t\t\t==============================================");
    printf("\n\n\t\t\t\t    Our Guide Introduction ");
    printf("\n\n\t\t\t==============================================");
    printf("\n\t\t\t==============================================");
    printf("\n\n\n\n");
    getch();
    printf("\n\n\n\n");
    printf("\n\n\t\t\t==============================================");
    printf("\n\t\t\t==============================================");
    printf("\n\t\t\t Teacher :	Prof.Ranjana Yadhav");
    printf("\n\t\t\t Institute :	Vishwakarma University");
    printf("\n\n\t\t\t==============================================");
    printf("\n\t\t\t==============================================");
    printf("\n\n\n\n");
    getch();
}

// BELLMAN FORD FUNCTION

int Bellman_Ford(int H[20][20], int V, int E, int edge[20][2])
{
    int i, u, v, k, distance[20], parent[20], S, flag = 1;
    for (i = 0; i < V; i++)
        distance[i] = 1000, parent[i] = -1;
    printf("Enter source: ");
    scanf("%d", &S);
    distance[S - 1] = 0;
    for (i = 0; i < V - 1; i++)
    {
        for (k = 0; k < E; k++)
        {
            u = edge[k][0], v = edge[k][1];
            if (distance[u] + H[u][v] < distance[v])
                distance[v] = distance[u] + H[u][v], parent[v] = u;
        }
    }
    for (k = 0; k < E; k++)
    {
        u = edge[k][0], v = edge[k][1];
        if (distance[u] + H[u][v] < distance[v])
            flag = 0;
    }
    if (flag)
        for (i = 0; i < V; i++)
            printf("Vertex %d -> cost = %d parent = %d\n", i + 1, distance[i], parent[i] + 1);

    return flag;
}

// DIJKSTRA FUNCTION

void dijkstra(int G[MAX][MAX], int n, int startnode)
{

    int cost[MAX][MAX], distance[MAX], pred[MAX];
    int visited[MAX], count, mindistance, nextnode, i, j;
    // pred[] stores the predecessor of each node
    // count gives the number of nodes seen so far
    // create the cost matrix
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            if (G[i][j] == 0)
                cost[i][j] = INFINITY;
            else
                cost[i][j] = G[i][j];
    // initialize pred[],distance[] and visited[]
    for (i = 0; i < n; i++)
    {
        distance[i] = cost[startnode][i];
        pred[i] = startnode;
        visited[i] = 0;
    }
    distance[startnode] = 0;
    visited[startnode] = 1;
    count = 1;
    while (count < n - 1)
    {
        mindistance = INFINITY;
        // nextnode gives the node at minimum distance
        for (i = 0; i < n; i++)
            if (distance[i] < mindistance && !visited[i])
            {
                mindistance = distance[i];
                nextnode = i;
            }
        // check if a better path exists through nextnode
        visited[nextnode] = 1;
        for (i = 0; i < n; i++)
            if (!visited[i])
                if (mindistance + cost[nextnode][i] < distance[i])
                {
                    distance[i] = mindistance + cost[nextnode][i];
                    pred[i] = nextnode;
                }
        count++;
    }

    // print the path and distance of each node
    for (i = 0; i < n; i++)
        if (i != startnode)
        {
            printf("\nDistance of node%d=%d", i, distance[i]);
            printf("\nPath=%d", i);
            j = i;
            do
            {
                j = pred[j];
                printf("<-%d", j);
            } while (j != startnode);
        }
    printf("\nEnter 1 for continue 0 for exit:");
    scanf("%d", &main_exit);
    if (main_exit == 1)
        menu();
    else if (main_exit == 0)
        exit(1);
}

// FLYOD FUNCTION

void floyds(int p[10][10], int n)
{
    int i, j, k;
    for (k = 1; k <= n; k++)
        for (i = 1; i <= n; i++)
            for (j = 1; j <= n; j++)
                if (i == j)
                    p[i][j] = 0;
                else
                    p[i][j] = min(p[i][j], p[i][k] + p[k][j]);
}

int menu()// function

{
    // login();
    // en.menu();
    // intro();
    int H[20][20];
    int G[MAX][MAX];
    int input;
    printf("\n\n\n\n");
    // printf("Enter which algorithm do you want to use? (1 for Ballamford, 2 for Dijkstra and 3 for Flyod)\n");
    printf("\t\t\033[0;34m######################################################################\n");
    printf("\t\t    #  Welcome To The Shortest Distance Finding  Alogrithms  # \n");
    // printf("\033[0;31m");
    printf("\t\t######################################################################\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("Enter which algorithm do you want to use?");
    printf("\n");
    printf("Press 1 for  Ballamford\n");
    printf("Press 2 for Dijkstra\n");
    printf("Press 3 for  Flyod\n");
    printf("Enter your choice : ");
    scanf("%d", &input);

    switch (input)
    {
    case 1:

        printf("BELLMAN FORD\n");
        printf("Enter no. of vertices: ");
        scanf("%d", &V);
        printf("Enter graph in matrix form:\n");
        for (i = 0; i < V; i++)
            for (j = 0; j < V; j++)
            {
                scanf("%d", &H[i][j]);
                if (H[i][j] != 0)
                    edge[k][0] = i, edge[k++][1] = j;
            }

        if (Bellman_Ford(H, V, k, edge))
            printf("\nNo negative weight cycle\n");
        else
            printf("\nNegative weight cycle exists\n");
        printf("\nEnter 1 for continue 0 for exit:");
        scanf("%d", &main_exit);
        if (main_exit == 1)
            menu();
        else if (main_exit == 0)
            exit(1);
        break;

    case 2:

        printf("Enter no. of vertices:");
        scanf("%d", &n);
        printf("\nEnter the adjacency matrix:\n");
        for (i = 0; i < n; i++)
            for (j = 0; j < n; j++)
                scanf("%d", &G[i][j]);
        printf("\nEnter the starting node:");
        scanf("%d", &u);
        dijkstra(G, n, u);
        break;
    case 3:

        printf("\n Enter the number of vertices:");
        scanf("%d", &n);
        printf("\n Enter the number of edges:\n");
        scanf("%d", &e);
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= n; j++)
                p[i][j] = 999;
        }
        for (i = 1; i <= e; i++)
        {
            printf("\n Enter the end vertices of edge%d with its weight \n", i);
            scanf("%d%d%d", &u, &v, &w);
            p[u][v] = w;
        }
        printf("\n Matrix of input data:\n");
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= n; j++)
                printf("%d \t", p[i][j]);
            printf("\n");
        }
        floyds(p, n);
        printf("\n Transitive closure:\n");
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= n; j++)
                printf("%d \t", p[i][j]);
            printf("\n");
        }
        printf("\n The shortest paths are:\n");
        for (i = 1; i <= n; i++)
            for (j = 1; j <= n; j++)
            {
                if (i != j)
                    printf("\n <%d,%d>=%d", i, j, p[i][j]);
            }
        printf("\nEnter 1 for continue 0 for exit:");
        scanf("%d", &main_exit);
        if (main_exit == 1)
            menu();
        else if (main_exit == 0)
            exit(1);
        break;
    default:
        printf("Invalid Input! Please try again");
        break;
    }

    // return 0;
}
int main()
{
    intro();
    menu();
    return 0;
}