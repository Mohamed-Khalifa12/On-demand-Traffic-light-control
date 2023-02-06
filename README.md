# On-demand-Traffic-light-control

**** system description: ****

On-demand Traffic light control is a project which control the traffic lights system but with a little bit difference from the 
ordinary one.
In this system The pedestrians have priority more than car’s one so whenever person needs to cross the road, it is available 
button for him which change the state of the main traffic light 
to enable him cross the road easily.
Let’s describe the system in more details, First the main traffic light system operates frequently starts from green led which 
will be turned on for 5 seconds, then yellow led start blinking for 5 seconds before the red one turns on for 5 seconds, finish 
this period with yellow led blinking again, that is the normal operation of the traffic light.


-- But what if the pedestrians need crossing the road?
It will be available button for them, once this button is pressed the state of the traffic will change for them.
So, if the state of the main traffic is red, it does no thing except turn the green led of pedestrian on and give extra 5 seconds. 
And if the state is green or yellow, at first, the red led of pedestrian’s traffic light will turn on then the yellow led will 
blink for 5 seconds before it change the state to Green in pedestrian and Red in main which enable the pedestrian to 
cross the road, and that is our goal.Then the yellow led blinking of both systems for 5 seconds, and then back to the normal operation and continue from the 
points where the system stopes.

**** What are the components to make that system? ****

    • 2 Green, 2 Red and 2 Yellow LEDs.
    • Button.
    • Microcontroller (we use ATMEGA32).

**** system design: ****

The On-demand Traffic light control System to be executed it has to be divided into layers to separate the hardware component
from the software ones and to add a level of abstraction to make a clean code which will be readable and easily edited if needed.

So, it consists of 4 parts:

     • ECUAL  
     • MCAL 
     • Utilities
     • Application
  
Each level of them contains some of driver which control the whole system.

     ECUAL ➔ Led driver & Button driver.
     MCAL ➔ DIO driver, Interrupt driver & Timer driver.
     Utilities ➔ Register address & Led control functions.
     Application ➔ final level of the system.
  
  
So, when the system starts it will loop forever for changing the state of main traffic lights from green, yellow, red and yellow 
again and this will last until interruption happens.

After the interruption happens, I should check the state of the main traffic light to know which decision the system will take.

**** Constraints: ****

The button must be pressed single press only.

If it is pressed double press it will do nothing and if it is pressed multiple times it will execute once.

To have a close look to the design and tests, you can find it here: ==>
        https://drive.google.com/drive/folders/1P7X8-7Qbicj-71MIYPS4H7Xoeg7ysYnL?usp=share_link
