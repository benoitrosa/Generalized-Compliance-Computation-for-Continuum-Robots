# Generalized-Compliance-Computation-for-Continuum-Robots

## This code is associated to the following paper, please cite this reference if reusing the code :

> Guillaume Lods, Benoit Rosa, Bernard Bayle et Florent Nageotte, "Exact Derivative Propagation Method to Compute the Generalized Compliance Matrix for Continuum Robots : Application to concentric tubes continuum robots", Mechanism and Machine Theory, Volume 200, 15 September 2024

> DOI : https://doi.org/10.1016/j.mechmachtheory.2024.105696

> HAL link : https://hal.science/hal-04626541/


## Description

**This code computes the Quasistatic Model, the Generalized Compliance Matrix and the Joint Jacobian of a continuum robot :**
- Concentric Tubes Continuum Robots (CTCR)
- Tendon Actuated Continuum Robot (TACR)
- Concentric Agonist-Antagonist Robot (CAAR) will be released soon

**The derivatives (the Generalized Compliance Matrix and the Joint Jacobian) are computed using the Low-Level Derivative Propagation Method, which is an analytic and very efficient method compared with numerical finite differences.**

**The Generalized Compliance Matrix is a kind of Jacobian that fully captures the flexibility properties of the robot. It is a powerful mathematical tool for :**
- Trajectory planning algorithms that take into account mechanical contacts between the robot and its environment
- For stiffness modulation algorithms
- Vision-based contact force estimation algorithms

**An example is provided showing how to linearize the robot's deformations when one or more forces are applied to it.**


## Information and requirements

**This code requires "Matlab R2023a", or a more recent version, as well as the installation of the "Optimization Toolbox". There are two main folders associated with the different kinds of robots: "Concentric_Tubes_Robots" and "Tendon_Actuated_Robots". The organisation of the folders is identical to what will be described for a given ROBOT = CTCR or TACR.**

## Content
	- "main.m " is the main script using standard Matlab code
	- "main_cpp.m " is similar to "main.m" but contains MEX functions running converted C++ code using the Matlab Coder app
	- "ROBOT_CPP/ " contains the MEX functions
	- "ROBOT_Config/" contains the config files
	- "ROBOT_Deriv_Propag_Class/" contains the classes used to compute the derivatives using the Low-Level Derivative Propagation Method
	- "ROBOT_Deriv_Propag_Functions/" contains the functions used to compute the derivatives using the Low-Level Derivative Propagation Method
	- "ROBOT_FD_Deriv_Propag_Class/" contains the classes used to compute the derivatives using the numeric finite differences method
	- "ROBOT_FD_Deriv_Propag_Functions/" contains the functions used to compute the derivatives using the numeric finite differences method
	- "ROBOT_Graphic/" contains the functions used to generate graphs
	- "ROBOT_Maths_Functions/" contains elementary mathematical functions
	- "ROBOT_Shape_Class/" contains the classes used to compute the shape of the robot
	- "ROBOT_Shape_Functions/" contains the functions used to compute the shape of the robot
	- "ROBOT_Write_Config/" contains the functions used to generate custom config files

## How to use your custom configuration file : 
	- Open "ROBOT_Write_Config/Write_Config.m"
	- Change the parameters you want
	- Set the folder "Generalized-Compliance-Computation-for-Continuum-Robots/ROBOT" as the Matlab workspace
	- Run "Write_Config(<your_config_name>)" in the Matlab terminal
	Change the name of the config file at the top of "main.m" (or "main_cpp.m")
	- Run "main.m" (or "main_cpp.m")

## Contact : 
**Do not hesitate to contact us if you have any questions.**

**Guillaume Lods | g.lods@unistra.fr**

**Benoit Rosa | b.rosa@unistra.fr**
