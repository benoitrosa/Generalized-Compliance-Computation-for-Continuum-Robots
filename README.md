# Generalized-Compliance-Computation-for-Continuum-Robots

## This code is associated to the following paper, please cite this reference if reusing the code :

> Guillaume Lods, Benoit Rosa, Bernard Bayle et Florent Nageotte, "Exact derivative propagation method to compute the generalized compliance matrix for continuum robots : Application to concentric tubes continuum robots", Mechanism and Machine Theory, Volume 200, 15 September 2024
> DOI : https://doi.org/10.1016/j.mechmachtheory.2024.105696
> HAL link : https://hal.science/hal-04626541/

**This code computes the Quasistatic Model, the Generalized Compliance Matrix and the Joint Jacobian of a concentric tubes continuum robot. An example is also provided showing how to linearize the robot's deformations when one or more forces are applied to it.**

**This code requires "Matlab R2023a", or a more recent version, as well as the installation of the "Optimization Toolbox".**

**The “variable_mapping.pdf” file shows the correspondences between article and code variables**

**We provide several configuration files that enable you to run the code on simple examples :**
- "Demo_11" : CTCR n°1 composed of 2 tubes
- "Demo_12" : CTCR n°1 with a tip external force
- "Demo_13" : CTCR n°1 with a mid-length external force
- "Demo_21" : CTCR n°2 composed of 3 tubes
- "Demo_22" : CTCR n°2 with a tip external force
- "Demo_23" : CTCR n°2 with a mid-length external force
- "Demo_24" : CTCR n°2 with a tip and a mid-length external forces
- "Demo_25" : CTCR n°2 with a tip and two mid-length external forces
- "Demo_26" : CTCR n°2 with a 1-force deformation linearization
- "Demo_27" : CTCR n°2 with a 2-forces deformation linearization

**We are currently preparing C++ compilations of the Matlab functions via the Matlab Coder application, as well as MEX functions to reduce the computation time of the models.**

**Do not hesitate to contact us if you have any questions.**

## Contact : 
**Guillaume Lods | g.lods@unistra.fr**
