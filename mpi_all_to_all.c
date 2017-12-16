

int pdims(2]={0,0};
 //compute good (rectangular) domain decomposition 
 MPI_Dims_create(np, 2, pdims);
 int px = pdims[0];
 int py = pdims[1];

 // create Cartesian topology
 int periods(2] = {0,0};
 MPI_Cart_create(comm, 2, pdims, periods, 0, &topocomm);

 // row-major order - bx and by are the x and y dimensions 
 #define ind(i,j) (j)*(bx+2)+(i)
 // create north-south datatype
 MPI_Datatype north_south_type;
 MPI_Type contiguous(bx, MPI_DOUBLE, &north_south_type);
 MPI_Type_commit(&north_south_type);
 // create east-west type
 MPI_Datatype east_west_type;
 MPI_Type_vector(by, 1, bx+2, MPI_DOUBLE, &east_west_type)
 MPI_Type_commit(&east_west_type);

 int sizes[4] = {size, size, size, size};
 MPI_Aint sdispls[4] = {ind(1,1), ind(1,by), ind(bx,1),
 ind(1,1)),
 rdispls[4] = {ind(1,0), ind(1,by+1), ind(bx+1,1), ind(0,1));
 MPI_Datatype stypes[4] = {north_south_type,north_south_type, east_west_type,east_west_type},
 rtypes[4] = {north_south_type,north_south_type, east_west_type,east_west_type);
 MPI_Neighbor_alltoallw(sbuf, sizes, sdispls, stypes, rbuf,
 sizes, rdispls, rtypes, topocomm);
