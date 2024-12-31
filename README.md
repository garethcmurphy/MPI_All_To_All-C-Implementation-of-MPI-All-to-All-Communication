# MPI_All_To_All: C Implementation of MPI All-to-All Communication ⚡💻  

This repository contains a **C implementation** of the **MPI All-to-All communication** operation, using native MPI calls. It demonstrates how to exchange data between all processes in a distributed system efficiently.

---

## Features ✨  

- **Custom MPI All-to-All**: Implements the functionality of `MPI_Alltoall` using MPI primitives.  
- **Parallel Communication**: Showcase data exchange among multiple processes.  
- **Scalable**: Designed for distributed systems with various process counts.  

---

## Prerequisites 🛠️  

- **C Compiler** (e.g., `gcc`).  
- **MPI Implementation** (e.g., OpenMPI or MPICH).  

---

## Installation  

1. Clone the repository:  
git clone https://github.com/your-username/mpi_all_to_all.git  
cd mpi_all_to_all  

2. Compile the program:  
mpicc -o mpi_all_to_all mpi_all_to_all.c  

---

## Usage 🔧  

1. Run the program with the desired number of processes:  
mpirun -n <number_of_processes> ./mpi_all_to_all  

   Example:  
   mpirun -n 4 ./mpi_all_to_all  

2. Modify the input data in the `mpi_all_to_all.c` file to test different configurations.  

---

## File Structure 📂  

- `mpi_all_to_all.c`: Main C implementation of MPI All-to-All communication.  
- `README.md`: Documentation for the repository.  

---

## Example Output  

For `n = 4` processes, the program outputs
