# SMART BIN

![Screenshot](/assets/pic1.jpg?raw=true )

#What is this?

This is our attempt at segregating Biodegradable and Non-biodegradable waste. This smart bin is also capable of storing the data in real time and retrieving it from anywhere.

We have also enabled Location services to know the number of smart bins in an area and know their status.

![Screenshot](/assets/loc1.jpg?raw=true )

#How this works?

We created an android app powered by tensorflow which is capable of capturing the image of the waste item, sending a request to the pre-trained model and classifying the object as biodegradable or non-biodegradable.

Accordingly, the app also sends a value to arduino through bluetooth.

The servo motor attached on the arduino board is then rotated accordingly so that the biodegradable waste falls on one side while the non-biodegradable waste falls on the other side.



