#include "snsd_write.h"

int SNSD_MPI_File_write(MPI_File fh, void *buf, int count, 
	MPI_Datatype datatype, MPI_Status *status)
{

	sleep(300);

	return MPI_File_write(fh, buf, count, datatype, status);
}
