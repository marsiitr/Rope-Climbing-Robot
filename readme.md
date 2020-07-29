
<h1>Rope-Climbing-Robot</h1>
 <p align="justify">
Srishti 2020
</p>



## Abstract ##
<p align="justify">
This Rope climbing bot is used to climb ropes in an easy and efficient manner to reduce manual labour.Motorised rollers are used for climbing and a leadscrew is used for the gripping.
</p>
<p align="centre">
<img src="https://github.com/adityatidke/Rope-Climbing-Robot/blob/master/Images%20and%20Videos/Images/prototype1.jpg">
<!-- abstract-->
</p>

## Motivation ##
  <p align="justify">
People from various fields like mining , military , or other often come across situations where they can not get direct access to certain area say inside a cave in a mine .
There was a need of rope climbing robot which uses a single rope and can reach easily to any desired place in any terrain and most of the robots we come across uses double rope and are difficult to use. Also many day to day households work can be done easily with a rope climbing robot and thus we need a robot which can used in daily lives .     
</p>
<!-- motivation-->

## Mechanical aspect ##
<p align="justify">
In rope climbing robot two aspects are especially important grip on the rope and smoothness while movement . <br>
These two characteristics are important to carry a weight with a robot and easily maintain a overall stability of the robot . The design presented here for rope climmbing is a wheel based system since they are highly and easy to build.
</p>

#### Sliding roller ####
<p align="justify">
<img src="https://github.com/adityatidke/Rope-Climbing-Robot/blob/master/Mechanical%20Design/assembly%20images/SLIDING%20ROLLER%20ASSEMBLY.JPG"><br>
This is a common and serves in both gripping mechanism and climbing mechanism . The assembly consists of two wheels attached to a rectangular metal sheet which is attached to the lead screw nut .<br>
The wheels are connected to the sheet with 3-D printed supports , bearings and shafts such that they are free to rotate about the shaft .
</p>

#### Encoder motor assembly ####
<p align="justify">
<img src="https://github.com/adityatidke/Rope-Climbing-Robot/blob/master/Mechanical%20Design/assembly%20images/Motor%20Encoder%20Assembly.JPG">
To grip the rope , sliding roller assembly has  to ascend on a lead screw , for that a spur gear is attached to the lead screw on the rear side . An encoder and motor are also attached sideways such that the lead screw attached to the spur gear simultaneously runs the spur gear attached to the encoder and the motor. <br>
For the working of the assembly , when the motor rotates , the spur gear rotates the lead screw which in turn rotates the encoder shaft through the trail of gears . The information of number of the rotations which the motor has to perform is already calculated and fitted into the encoder . Thus we can grip the rope.

#### Slider assembly ####
<p align="justify">
<img src="https://github.com/adityatidke/Rope-Climbing-Robot/blob/master/Mechanical%20Design/assembly%20images/Slider%20Assembly.JPG">
To prevent the sliding roller assembly to deviate from its path in a rotatory motion it is supported with a slider assembly. The slider is created with a shaft and a rectangular box which can slide on it . It is connected to "SRE" by a L hinge. <br>
The slider also creates a second support for the lead screw . Otherwise the lead screw will deviate from its position.
</p>

#### Motor wheel assembly ####
<p align="justify">
<img src="https://github.com/adityatidke/Rope-Climbing-Robot/blob/master/Mechanical%20Design/assembly%20images/Motor%20Gear%20Assembly.JPG">
After gripping the rope firmly, the bot has to climb the rope . The basic principal used along the rope is rolling. <br>
The design consists of a DC motor which is connected to three spur gear asssembly . The end gears are connected to each wheel . The design consists of two wheel pairs on either side of the rope. <br>
The wheels rolls on the surface of the rope which is powered by a DC motor (motor should provide high torque and power). In presence of sufficient friction between the wheels and the rope , the robot traverses the rope . The wheel should offer sufficient friction to support the robot in the vertical position . <br>
The other way to arrange the wheels is in a zig-zag pattern which increases the area of contact which in turn increases the friction.<br>
Let the radius of the wheel be r and θ is the angle of contact and h is the rope thickness. The surface area S in contact with the wheel is given as <br>
 <blockquote>S = (2πrhθ)/360</blockquote>
</p>

## Electronic aspect ##
 
 
- Electronic Components used
  
 1. Arduino Uno
 2. dc motors
 3. Ultrasonic distance sensors
 4. Encoder
 5. L298n motor controller
 6. Battery
 7. Connecting wires and jumpers
 
- Total two dc motors were used. One to grab the rope with the help of an encoder and the second for climbing the rope.</li>
- Two ultrasonic distance sensors were used to measure the distance of the bot from the floor and the top end of the rope.</li>
- dc motors were powered through Li-Po 12V dc battery.</li>

<img src="https://github.com/adityatidke/Rope-Climbing-Robot/blob/master/Images%20and%20Videos/Images/Circuit.png">

## Workflow ##


<img src="https://github.com/adityatidke/Rope-Climbing-Robot/blob/master/Images%20and%20Videos/Images/flowchart.jpg">

## Cost structure ##

<!-- cost structure-->

| materials|quantity|cost|
|:-----|:-----|:-----|
|Arduino UNO|1|425|
|Lipo battery|1|1100|
|Motor controller|1|160|
|Ultrasonic sensor|2|360|
|DC motor|2|300|
|Lead screw|1|600|
|Materials for body|1|1230|
|Manufacturing|1|600|
|*total*||4775|

## Applications ##

<p align="justify">
Robot is planned to serve the following tasks:
</p>

- It can be used to carry weights or to drop weights from some height.

- When equipped with camera, the robot can be used for surveillence.

- When equipped with cleaners, it can be used to clean glasses of windows or walls.

- Robot can be used to take pictures or to make videos from different heights.

<!-- apllications-->
## Limitations ##

1. The bot cannot climb horizontal ropes or ropes at some Angles.


2. The bot cannot traverse rope having some obstacles like knots or bend.

## Future improvements ##


1. The load carrying capacity can be improved by using stronger motors and parts.
2. Image detection software can be incorporated with the help of a camera , so that it can detect a rope on its own and climb it.
3. Modification in the design can be made so that it can measure its diameter of the rope without prefeding the data into the encoder.
4. Pneaumatics can be introduced in the the model to improve the gripping and climbing speed.


## Team Member ##


1. <a href="https://github.com/adityatidke">Aditya Tidke</a>
2. <a href="https://github.com/anu-cn">Anjali Rana</a>
3. <a href="https://github.com/parul253">Parul Chaudhary</a>
4. <a href="https://github.com/guddu-gupta">Tanisha Gupta</a>
5. <a href="https://github.com/vanshgoyal">Vansh Goyal</a>
6. <a href="https://github.com/vinusebastian265">Vinu Sebastian</a>


## Mentor ##


1. <a href="https://github.com/avdeshranwa">Avdesh Ranwa</a>
2. Gautam Jha

## Refrences ##

https://www.arrow.com/en/research-and-events/articles/ultrasonic-sensors-how-they-work-and-how-to-use-them-with-arduino <br>
https://www.thomasnet.com/articles/machinery-tools-supplies/pneumatic-actuators/<br>
https://www.instructables.com/circuits/arduino/projects/<br>
https://grabcad.com/


