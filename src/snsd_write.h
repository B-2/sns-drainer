#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <mpi.h>

int SNSD_MPI_File_write(MPI_File fh, void *buf, int count,
        MPI_Datatype datatype, MPI_Status *status);



