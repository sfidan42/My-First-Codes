import networkx as nx
import matplotlib.pyplot as plt
import random

G=nx.read_edgelist('facebook_combined.txt',create_using=nx.Graph())
print("ACC:", nx.average_clustering(G))
nx.draw_networkx(G,with_labels=False)
plt.savefig("real.png")

#edges:88234
#nodes:4039

edg=nx.number_of_edges(G)
nod=nx.number_of_nodes(G)

print("Edges:",edg)
print("Nodes:",nod)


G2=nx.gnm_random_graph(nod,edg)
nx.draw_networkx(G2,with_labels=False)
plt.savefig("random.png")

print("ACC:", nx.average_clustering(G2))