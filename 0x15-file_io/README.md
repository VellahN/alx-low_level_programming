oflag
This argument formed by OR'ing together optional parameters and (from <fcntl.h>) one of:

O_RDONLY, O_RDWR and O_WRONLY
Option parameters include:

O_APPEND data written will be appended to the end of the file. The file operations will always adjust the position pointer to the end of the file.
O_CREAT Create the file if it does not exist; otherwise the open fails setting errno to ENOENT.
O_EXCL Used with O_CREAT if the file already exists, then fail, setting errno to EEXIST.
O_TRUNC If the file already exists then discard its previous contents, reducing it to an empty file. Not applicable for a device or named pipe.

For most file systems, a program initializes access to a file in a file system using the open system call. This allocates resources associated to thefile (the file descriptor), and returns a handle that the process will use to refer to that file. In some cases the open is performed by the first access.
