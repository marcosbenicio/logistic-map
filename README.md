# Logistic map

The Logistic map is a simple, non-linear, iterative map used to model population growth. It has a rich dynamic behavior that can exhibit chaos, periodicity, bifurcations, and attractors.

The logistic map is defined as:

$$x(t+1)=\lambda x(t)\left( 1-x(t)\right)$$

where $x(t)$ represents the population at time t, $\lambda$ is a parameter that controls the rate of growth, and $0 ≤ x(t) ≤ 1$.

When $\lambda$ is small, the population grows linearly and converges to a stable value. As r increases, the population oscillates between two or more values. At a certain value of $\lambda$, the map undergoes a bifurcation and produces a period-doubling cascade, leading to the emergence of chaotic behavior.

- logistic_map.c : This code calculates the values of the logistic map for a given set of parameters and writes them to a file.

<img src="Image/mapa_logistico_lambda1,01.png">

- logistic_map_attractor.c: The code implements the logistic map and shows how to generate an attractor plot for a given parameter value of lambda and initial condition of x. The program calculates the next state of x using the logistic map equation and writes the current and next states to a file to plot the attractor. This shows the convergence for the logistic map equation.

<img src="Image/mapa_logistico_atrator_lambda2.png">


- logistic_map_bifurcation.c: This code generates data for a bifurcation diagram of the logistic map. The logistic map is a mathematical equation that models the growth of a population over time. At a certain value of $\lambda$, the map undergoes a bifurcation and produces a period-doubling cascade, leading to the emergence of chaotic behavior.

<img src="Image/mapa_bifurcacao.png">

- logistic_map_comp.c : This program calculates and writes the values of the logistic map equation with a fixed lambda value of 3.1 and an initial value of $x_0=0.2$.
