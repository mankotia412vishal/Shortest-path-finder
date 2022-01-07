# shortest distance finding alogrithms
 
3 alogrithms i have implemented for the  shortest path in c 

# instructions for running this project
This project is wriiten in c 


            ######################################################################
                    #  Welcome To The Shortest Distance Finding  Alogrithms  #
            ######################################################################



Enter which algorithm do you want to use?
Press 1 for  Ballamford
Press 2 for Dijkstra
Press 3 for  Flyod
Enter your choice :


BELLMAN FORD
Enter no. of vertices: 5
Enter graph in matrix form:
0 6 0 7 0
0 0 5 8 -4
0 -2 0 0 0 
0 0 -3 0 9
2 0 7 0 0
Enter source: 1
Vertex 1 -> cost = 0 parent = 0
Vertex 2 -> cost = 2 parent = 3
Vertex 3 -> cost = 4 parent = 4
Vertex 4 -> cost = 7 parent = 1
Vertex 5 -> cost = -2 parent = 2

No negative weight cycle



output
Enter no. of vertices:5

Enter the adjacency matrix:
0 10 0 30 100
10 0 50 0 0 
0 50 0 20 10
30 0 20 0 60
100 0 10 60 0

Enter the starting node:0

Distance of node1=10
Path=1<-0
Distance of node2=50
Path=2<-3<-0
Distance of node3=30
Path=3<-0
Distance of node4=60
Path=4<-2<-3<-0








Enter no. of vertices:5

Enter the adjacency matrix:
0 4 99 8 99
4 0 3 99 99
99 3 0 4 99
8 99 4 0 7
99 99 99 7 0

Enter the starting node:1

Distance of node0=4
Path=0<-1
Distance of node2=3
Path=2<-1
Distance of node3=7
Path=3<-2<-1
Distance of node4=14
Path=4<-3<-2<-1





FLYOD WARSHALL 

Enter no. of vertices:5

Enter the adjacency matrix:
0 4 99 8 99
4 0 3 99 99
99 3 0 4 99
8 99 4 0 7
99 99 99 7 0

Enter the starting node:0

Distance of node1=4
Path=1<-0
Distance of node2=7
Path=2<-1<-0
Distance of node3=8
Path=3<-0
Distance of node4=15
Path=4<-3<-0



Enter the number of vertices:5

 Enter the number of edges:
5

 Enter the end vertices of edge1 with its weight
1
2
20

 Enter the end vertices of edge2 with its weight
3
4
40

 Enter the end vertices of edge3 with its weight

2 
3
15

 Enter the end vertices of edge4 with its weight
4
5
80

 Enter the end vertices of edge5 with its weight
1 
3
 10

 Matrix of input data:
999     20      10      999     999
999     999     15      999     999
999     999     999     40      999
999     999     999     999     80
999     999     999     999     999

 Transitive closure:
0       20      10      50      130
999     0       15      55      135
999     999     0       40      120
999     999     999     0       80
999     999     999     999     0

 The shortest paths are:

 <1,2>=20
 <1,3>=10
 <1,4>=50
 <1,5>=130
 <2,1>=999
 <2,3>=15
 <2,4>=55
 <2,5>=135
 <3,1>=999
 <3,2>=999
 <3,4>=40
 <3,5>=120
 <4,1>=999
 <4,2>=999
 <4,3>=999
 <4,5>=80
 <5,1>=999
 <5,2>=999
 <5,3>=999
 <5,4>=999
 

# Creater of the project
Name - Vishal Singh
Email - vishal.singh20@vit.edu
Student- Vishwakarma institute of the technology(pune)
Branch - IT