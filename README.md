# Generalized-Compliance-Computation-for-Continuum-Robots

## This code is associated to the following paper. Please cite this reference if reusing the code :

> Guillaume Lods, Benoît Rosa, Bernard Bayle and Florent Nageotte (2024): “Exact Derivative Propagation Method to compute the Generalized Compliance Matrix for Continuum Robots: Application to Concentric Tubes Continuum Robots”. Mechanism and Machine Theory, to appear.

**This code computes the Quasistatic Model, the Generalized Compliance Matrix and the Joint Jacobian of a concentric tubes continuum robot. An example is also provided showing how to linearize the robot's deformations when one or more forces are applied to it.**

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
