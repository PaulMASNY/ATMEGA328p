### ATMEGA 328p TESTING BOARD


##### INTRO

##### SOLUTION WITH 2x16 LCD IN 4-bit MODE

    - hardware BOM
    - AVR C libraries

##### DESIGN

    - electrical schematics
    - PCB layout
    - 3D export
    
##### CONCLUSION

---------------------------------------------------------------------------------------------

##### INTRO

This project ends up with a small 8-bit micro-controller 
board, serving for testing purpose with various crystals and 
configurations usable with both 3.3V and 5V power sources. 


##### SOLUTION WITH 2x16 LCD IN 4-bit MODE

As an LCD to start with I have used the simplest 2x16 product, embedding the HD4478 controller. 

    - hardware BOM


The following list, generated from eagle does not contain the 2x16 LCD and 
    28 pin 0.3" DIP socket for the atmega 328p:

![Figure 1-1](images/BOM.png?raw=true "Figure 1-1")



##### DESIGN

I have also privileged one-side board variant with some airwires on the high side. In fact, 
this ones can be easily done by homemade etching. As a remark to the realization below, 
the JP3 pin is only used for LCD backlight. Both 2x16 and 4x20 LCD's fit to the 
onboard socket.
Furthermore,  

    - electrical schematics

![Figure 1-2](images/schematics.png?raw=true "Figure 1-2")

         - PCB layout with components and wiring

![Figure 1-3](images/Board.png?raw=true "Figure 1-3")

         - PCB layout for homemade etching

![Figure 1-4](images/BoardEtch.png?raw=true "Figure 1-4")


         - 3D export


![Figure 1-5](images/3D_Model.png?raw=true "Figure 1-5")

A true 3D view is accessible when clicking on this link : 



