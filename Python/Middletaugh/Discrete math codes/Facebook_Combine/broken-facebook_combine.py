import networkx as nx
import matplotlib.pyplot as plt
import random

#1.reading the facebook_combined.txt file:
G=nx.read_edgelist('facebook_combined.txt',create_using=nx.Graph())
#nx.draw_networkx(G,with_labels=False)
#plt.savefig("real.png")

#2.computing ACC for the graph:
acc = nx.average_clustering(G)
print("ACC1:",acc)
print("Size1:",G.size())

n=nx.number_of_nodes(G)
edg=nx.number_of_edges(G)
#3.finding the probability
print("#of edges:",edg)
p=2*edg/(n*(n-1))
print("#of nodes:",n)
print("Probability:",p)

#4.Generating Erdos-Renyi random graph:
g=nx.gnp_random_graph(n,p)
#nx.draw(g)
#nx.draw_networkx(g,with_labels=False)
#plt.savefig("random.png")
print("random graph generated!")
print("Size2:",g.size())
#5.calculating ACC for the random graph:
acc = nx.average_clustering(g)

#6.comparing the results:
print("ACC2:",acc)
