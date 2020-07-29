# Rope-Climbing-Robot
Srishti 2020


<p align="justify">
<h2>Abstract</h2>
This Rope climbing bot is used to climb ropes in an easy and efficient manner to reduce manual labour.Motorised rollers are used for climbing and a leadscrew is used for the gripping.
</p>
<p align="centre">
<img src="https://github.com/adityatidke/Rope-Climbing-Robot/blob/master/mechanical%20design/assembly%20images/Bot%20image.JPG">
<!-- abstract-->
</p>
<h2>Motivation</h2>
People from various fields like mining , military , or other often come across situations where they can not get direct access to certain area say inside a cave in a mine .
There was a need of rope climbing robot which uses a single rope and can reach easily to any desired place in any terrain and most of the robots we come across uses double rope and are difficult to use. Also many day to day households work can be done easily with a rope climbing robot and thus we need a robot which can used in daily lives .     

<!-- motivation-->
## **Mechanical aspect**
In rope climbing robot two aspects are especially important grip on the rope and smoothness while movement . <br>
These two characteristics are important to carry a weight with a robot and easily maintain a overall stability of the robot . The design presented here for rope climmbing is a wheel based system since they are highly and easy to build.
##### Sliding roller #####
![roller](https://github.com/adityatidke/Rope-Climbing-Robot/blob/master/images%20and%20videos/images/SLIDING%20ROLLER%20ASSEMBLY.JPG)<br>
This is a common and serves in both gripping mechanism and climbing mechanism . The assembly consists of two wheels attached to a rectangular metal sheet which is attached to the lead screw nut .<br>
The wheels are connected to the sheet with 3-D printed supports , bearings and shafts such that they are free to rotate about the shaft .
##### Encoder motor assembly #####
![encoder](https://github.com/adityatidke/Rope-Climbing-Robot/blob/master/images%20and%20videos/images/Motor%20Encoder%20Assembly.JPG)<br>
To grip the rope , sliding roller assembly has  to ascend on a lead screw , for that a spur gear is attached to the lead screw on the rear side . An encoder and motor are also attached sideways such that the lead screw attached to the spur gear simultaneously runs the spur gear attached to the encoder and the motor. <br>
For the working of the assembly , when the motor rotates , the spur gear rotates the lead screw which in turn rotates the encoder shaft through the trail of gears . The information of number of the rotations which the motor has to perform is already calculated and fitted into the encoder . Thus we can grip the rope.
##### Slider assembly #####
![slider](https://github.com/adityatidke/Rope-Climbing-Robot/blob/master/images%20and%20videos/images/Slider%20Assembly.JPG)<br>
To prevent the sliding roller assembly to deviate from its path in a rotatory motion it is supported with a slider assembly. The slider is created with a shaft and a rectangular box which can slide on it . It is connected to "SRE" by a L hinge. <br>
The slider also creates a second support for the lead screw . Otherwise the lead screw will deviate from its position.
##### Motor wheel assembly #####
![gear](https://github.com/adityatidke/Rope-Climbing-Robot/blob/master/images%20and%20videos/images/Motor%20Gear%20Assembly.JPG)<br>
After gripping the rope firmly, the bot has to climb the rope . The basic principal used along the rope is rolling. <br>
The design consists of a DC motor which is connected to three spur gear asssembly . The end gears are connected to each wheel . The design consists of two wheel pairs on either side of the rope. <br>
The wheels rolls on the surface of the rope which is powered by a DC motor (motor should provide high torque and power). In presence of sufficient friction between the wheels and the rope , the robot traverses the rope . The wheel should offer sufficient friction to support the robot in the vertical position . <br>
The other way to arrange the wheels is in a zig-zag pattern which increases the area of contact which in turn increases the friction.<br>
Let the radius of the wheel be r and θ is the angle of contact and h is the rope thickness. The surface area S in contact with the wheel is given as <br>
> S = (2πrhθ)/360

## **Electronic aspect**
- Electronic Components used
 1. Arduino Uno
 2. dc motors
 3. Ultrasonic distance sensors
 4. Encoder
 5. L298n motor controller
 6. Battery
 7. Connecting wires and jumpers

- Total two dc motors were used. One to grab the rope with the help of an encoder and the second for climbing the rope.
- Two ultrasonic distance sensors were used to measure the distance of the bot from the floor and the top end of the rope.
- dc motors were powered through Li-Po 12V dc battery.
![circuit](https://github.com/adityatidke/Rope-Climbing-Robot/blob/master/images%20and%20videos/images/Circuit.png)

## **Workflow** ##
--------------

![flowchart](https://github.com/adityatidke/Rope-Climbing-Robot/blob/master/flowchart.jpg)

## **Cost structure**
--------
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


## **Applications**

Robot is planned to serve the following tasks:

- It can be used to carry weights or to drop weights from some height.

- When equipped with camera, the robot can be used for surveillence.

- When equipped with cleaners, it can be used to clean glasses of windows or walls.

- Robot can be used to take pictures or to make videos from different heights.
<!-- apllications-->
## **Limitations**
- The bot cannot climb horizontal ropes or ropes at some Angles.


- The bot cannot traverse rope having some obstacles like knots or bend.
## **Future improvements**
1. The load carrying capacity can be improved by using stronger motors and parts.
2. Image detection software can be incorporated with the help of a camera , so that it can detect a rope on its own and climb it.
3. Modification in the design can be made so that it can measure its diameter of the rope without prefeding the data into the encoder.
4. Pneaumatics can be introduced in the the model to improve the gripping and climbing speed.
## **Team Member**
- [Aditya Tidke](https://github.com/adityatidke)
- [Anjali Rana](https://github.com/anu-cn)
- [Parul Chaudhary](https://github.com/parul253)
- [Tanisha gupta](https://github.com/guddu-gupta)
- [Vansh Goyal](https://github.com/vanshgoyal)
- [Vinu Sebastian](https://github.com/vinusebastian265)
## **Mentor**
- [Avdesh Ranwa](https://github.com/avdeshranwa)
- Gautam Jha
## **Refrences** ##
https://www.arrow.com/en/research-and-events/articles/ultrasonic-sensors-how-they-work-and-how-to-use-them-with-arduino <br>
https://www.thomasnet.com/articles/machinery-tools-supplies/pneumatic-actuators/<br>
https://www.instructables.com/circuits/arduino/projects/<br>
https://grabcad.com/
