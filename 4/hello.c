#include <mpi.h>
#include <stdio.h>

int main(int argc, char **argv){
	int i, rank, size;
	MPI_Init(&argc, &argv);
	MPI_Comm_rank(MPO_COMM_WORLD, &rank);
	MPI_Comm_size(MPI_COMM_WORLD, &size);

	printf("Hello world, I have rank %d out of processes \n", rank, size);
	MPI_Finalize();

	return 0;
}