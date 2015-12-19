# Midterm 2

  Dennis Scheglov, Joshua Pelton
  This program was designed to use the Ising Model to determine the temperature of phase transitions for a two-dimensional triangular lattice. Initially provided with the code for a square lattice, this was modified to reflect the new dimensions, in which 6 neighbors are present rather than 4.

Calculating interaction energy between nearest neighbors for each spin within the lattice was done using a metropolis simulation. Each temperature, a Boltzmann ration was generated, used as the probability that a spin change that increases temperature can be accepted. Initial conditions were such that spins did not begin aligned, "randomly" distributed. A GSL random number generator simulated the inherent randomness of the model.

To determine the temperature of the phase transitions, the metropolis simulation was run for several different temperatures. Specific heat is calculated for several steps, and is then plotted against temperature. Phase transition corresponds to the specific heat of the material. The graph for this information is presented below.
![Ising Graph](ising.png)

Special thanks to Filip Bergabo for his help.
