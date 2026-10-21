# Physics-based Projectile Simulator

A C-based physical 2-dimensional projectile simulator designed to calculate and analyse the motion of an object when thrown from the ground with a speed and an angle with the ground. The program takes input from the user: (i) the initial velocity of the projectile and (ii) the angle it makes with the horizontal, to determine the physical parameters of the flight path and other attributes related to the motion, such as maximum height attained, range of the projectile and the total time taken by the projectile.

## Key calculations

* **Time of flight:** (T) Total time the projectile remains in the air.
* **Maximum height attained:** (H) The peak altitude reached by the projectile during its motion.
* **Range:** (R) The total horizontal distance covered by the projectile during its flight.

## Description

Heavily inspired by a physics lecture straight out of the classroom, I've built this program as my first step towards a blend of my passion for physics and computer science. This project calculates the range, maximum height attained and time of flight mathematically, using physics formulas and the input of the initial velocity and angle of the projectile. I built this project to better understand how physics mechanics translate into software. I wanted a fast, lightweight terminal tool to instantly verify the motion the projectile goes through, using simple graphics (stars depicting a pre-defined parabolic path, which is *not to scale*; it just presents the idea that a projectile always follows a parabolic path). This project helped me practice working with mathematical libraries in C. This is also my first ever project on GitHub, so before posting it I learnt the basics of Git and GitHub: what a repository is, how Git and GitHub work, and how to create a repository. I am going to create more physics-based programs related to fluid mechanics and other topics. Thank you.

## Formulas used

* For (T): `T = (2 * v0 * sin θ) / g`
* For (H): `H = (v0^2 * sin^2 θ) / (2 * g)`
* For (R): `R = (v0^2 * sin 2θ) / g`
