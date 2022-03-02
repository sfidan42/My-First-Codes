from PIL import Image
import numpy as np
import matplotlib.pyplot as plt
our_image=Image.open('the heart.jpeg')
#print(type(our_image))
the_array=np.array(our_image)
#print(the_array.shape)
plt.imshow(the_array)
#print(plt.imshow(the_array))
b_and_w_image=the_array.mean(axis=2)
plt.imshow(b_and_w_image)
#b_and_w_image=the_array.mean(axis=1)
#plt.imshow(b_and_w_image)
#print(b_and_w_image.shape)
plt.imshow(b_and_w_image, cmap='gray')




plt.show()