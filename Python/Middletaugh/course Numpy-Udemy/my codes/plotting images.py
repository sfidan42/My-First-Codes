import matplotlib.image as img
import matplotlib.pyplot as plt
import numpy as np
from PIL import Image
image1=Image.open('Purple moon.jpeg')
#print(type(image1))
our_array=np.array(image1)
#print(our_array.shape)
#plt.imshow(our_array)
grey=our_array.mean(axis=2)
#plt.imshow(grey)
#plt.imshow(grey,cmap='grey')
plt.imshow(grey,cmap='gray')





plt.show()