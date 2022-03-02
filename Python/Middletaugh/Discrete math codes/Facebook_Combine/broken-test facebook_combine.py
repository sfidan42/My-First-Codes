import networkx as nx
from random import random

print("start")

# Read data from the dataset, and create graph G_fb
G_fb = nx.read_edgelist("facebook_combined.txt", create_using = nx.Graph(), nodetype=int)

# Show the number of edges in G_fb
edges=G_fb.number_of_edges()

# Show number of nodes in G_fb
nodes=G_fb.number_of_nodes()

print("read #of edges and nodes")

# TASK1. Now your task is to compute the probability whether there is an edge between two vertices.
## edge_probab = ...
P=nx.transitivity(G_fb)
print("Probability:",P)

# TASK2. Compute the ACC (average clustering coefficient) of G_fb
# (consult the NetworkX manual or the video lecture for the correct function which does it)
## av_clust_coeff =  ...
acc = nx.average_clustering(G_fb)
print("ACC:",acc)
# Now we have to generate a random graph. First we initialize it
G_rand = nx.Graph();

print("starting to generate G_rand")
# TASK3. generate edges in G_rand at random:
for i in range(0,edges) :
    for j in range(0,i) : 
        # Add an edge between vertices i and j, with probability edge_probab (as in G_fb)
        # ...
        if (i < j):
              
            # Take random number R.
            R = random.random()
              
            # Check if R<P add the edge to the graph else ignore.
            if (R < p):
                G_rand.add_edge(i, j)
                print("added",i,j)
# Now we print out the number of edges and the ACC of the new graph
print("rgraph_edges = " + str(G_rand.number_of_edges()))

# av_clust_coeff = ...

print("rgraph_acc = " + str(av_clust_coeff))

# The results which should be submitted to the grader include the ACC of G_fb and of G_rand. Good luck!
