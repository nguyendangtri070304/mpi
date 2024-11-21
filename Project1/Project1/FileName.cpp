#include <mpi.h>
#include <iostream>
int main(int argc, char* argv[]) {
    MPI_Init(&argc, &argv);  // Initialize the MPI environment
    int world_size;
    MPI_Comm_size(MPI_COMM_WORLD, &world_size);  // Get the number of processes
    int world_rank;
    MPI_Comm_rank(MPI_COMM_WORLD, &world_rank);  // Get the rank of the process
    std::cout << "Hello from process " << world_rank << " of " << world_size << std::endl;
    MPI_Finalize();  // Finalize the MPI environment
    return 0;
}
