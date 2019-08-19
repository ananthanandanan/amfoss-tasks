

from PIL import image 

from pytesseract import image_to_string
img=Image .open("/home/ananthan/Desktop/text.png")

text=image_to_string(img)
print(text)
print(eval(text))
