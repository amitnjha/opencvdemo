import cv2
import numpy as np


#load a color image in grayscale
img = cv2.imread("lab3.jpg",0);


#show the image 
cv2.imshow("Image",img);


#wait for  a key to destroy the window and exit

cv2.waitKey(0);
cv2.destroyAllWindows();
