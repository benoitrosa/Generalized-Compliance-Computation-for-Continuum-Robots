# Generalized-Compliance-Computation-for-Continuum-Robots

## This code is associated to the following paper, please cite this reference if reusing the code :

> Guillaume Lods, Benoit Rosa, Bernard Bayle et Florent Nageotte, "Exact derivative propagation method to compute the generalized compliance matrix for continuum robots : Application to concentric tubes continuum robots", Mechanism and Machine Theory, Volume 200, 15 September 2024

> DOI : https://doi.org/10.1016/j.mechmachtheory.2024.105696

> HAL link : https://hal.science/hal-04626541/

**This code computes the Quasistatic Model, the Generalized Compliance Matrix and the Joint Jacobian of a concentric tubes continuum robot. An example is also provided showing how to linearize the robot's deformations when one or more forces are applied to it.**

**This code requires "Matlab R2023a", or a more recent version, as well as the installation of the "Optimization Toolbox".**

## There are 2 main scripts : 
**“main.m” is a the standard Matlab code**
- Advantage : You have access to all the internal comments of the functions.
- Drawback  : The computation time is quite long.

**“main_cpp.m” is a the Matlab code using MEX functions and C++ compiled functions.**
- Advantage : The computation time is is greatly reduced.
- Drawback  : You do not have access to all the internal comments of the functions.

## Folder contents :

- **"CTCR_CPP/" : Contains the MEX functions used to run the C++ compiled functions. The MEX functions are provided for Macintosh, Windows and Linux.**

- **"CTCR_Config/" : Contains several configuration files examples can can be used to test the code.**
	- "Demo_11"  : CTCR n°1 composed of 2 tubes
	- "Demo_12"  : CTCR n°1 with a tip external force
	- "Demo_13"  : CTCR n°1 with a mid-length external force
	- "Demo_21"  : CTCR n°2 composed of 3 tubes
	- "Demo_22"  : CTCR n°2 with a tip external force
	- "Demo_23"  : CTCR n°2 with a mid-length external force
	- "Demo_24"  : CTCR n°2 with a tip external force and a mid-length distributed external force
	- "Demo_25"  : CTCR n°2 with a tip external force and two mid-length distributed external forces
	- "Demo_26"  : CTCR n°2 with a 1-force deformation linearization
	- "Demo_27"  : CTCR n°2 with a 2-forces deformation linearization
	- "Demo_mex" : CTCR composed of T tubes used to generate the MEX functions

- **"CTCR_Deriv_Propag_Class/" : Contains the classes involved in the Low-Level Derivative Propagation Method computation.**

- **"CTCR_Deriv_Propag_Functions/" : Contains the functions involved in the Low-Level Derivative Propagation Method computation.**

- **"CTCR_Graphic/" :Contains the functions used to generate plots.**

- **"CTCR_Graphic/" : Contains the functions used to generate plots.**

- **"CTCR_Maths_Functions"/ : Contains some elementary maths functions.**

- **"CTCR_Shape_Class/" : Contains the classes involved in the quasistatic model computation.**

- **"CTCR_Shape_Functions/" : Contains the functions involved in the quasistatic model computation.**

- **"DOCS/" : Contains helpful files.**
	- “Variable_mapping.pdf”      : explains some of the correspondences between article and code variables
	- "Tutorial_matlab_coder.mp4" : explains how to generate a MEX function from a Matlab code

## How to use your custom configuration file : 
1. Open "CTCR_Shape_Functions/Write_Config.m"
2. Change the parameters you want
3. Set the folder "Generalized-Compliance-Computation-for-Continuum-Robots" as the Matlab workspace
4. Run "Write_Config(<your_config_name>)" in the Matlab terminal
5. Change the line n°42 of the "main.m" (or "main_cpp.m") as "name = '<your_config_name>'" ;
6. Run "main.m" (or "main_cpp.m")

## Contact : 
**Do not hesitate to contact us if you have any questions.**
**Guillaume Lods | g.lods@unistra.fr**
