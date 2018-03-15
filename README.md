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
board, serving for testing purposes with various crystals and 
configurations. Both 3.3V and 5V power sources can be used. 


##### SOLUTION WITH 2x16 LCD IN 4-bit MODE

As an LCD to start with I have used the simplest 2x16 product, embedding the HD4478 controller. 

    - hardware BOM


The following list, generated from eagle does not contain the 2x16 LCD and 
    28 pin 0.3" DIP socket for the atmega 328p:

![Figure 1-1](images/BOM.png?raw=true "Figure 1-1")

    - AVR C libraries

I recommend a homebrew version made from the Peter's Fleury's stub. It can be found in the folder above.

##### DESIGN

I have also privileged one-side board variant with some airwires on the high side. In fact, 
these ones can be easily done by homemade etching. As a remark to the assembly below, 
the JP3 pin is used for LCD backlight only. Both 2x16 and 4x20 LCD's fit to the 
onboard socket.

    - electrical schematics

![Figure 1-2](images/schematics.png?raw=true "Figure 1-2")

         - PCB layout with components and wiring

Everything enters on a 70 x 100 mm one-sided PCB.

![Figure 1-3](images/Board.png?raw=true "Figure 1-3")

         - PCB layout for homemade etching 

![Figure 1-4](images/BoardEtch.png?raw=true "Figure 1-4")

The image can be copied as is and printed to transfer paper for ironing. This is the copper
side of a simple one-sided PCB.


         - 3D export

A final assembly of the protoboard is here :

![Figure 1-5](images/3D_Model.png?raw=true "Figure 1-5")

A true 3D view is accessible when clicking on this link :<a href="http://autode.sk/2F6BPxc" target="_blank"> Autodesk_3D_view </a>

##### CONCLUSION

This very simple board can be made, using Chinese components, for less than 100 Rands.
