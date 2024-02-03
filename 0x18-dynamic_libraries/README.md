Static libraries, while reusable in multiple programs, are locked into a program at compile time. Dynamic, or shared libraries on the other hand, exist as separate files outside of the executable file.

Dynamic libraries are a collection of object files which are referenced at build time to give the executable information how they will eventually be used, but they aren’t used until run time. In other words, these objects are dynamically linked into executables that use them.

Static libraries are separate files whose executable code gets embedded into the executable at build time. A static library is basically an archive (like a zip file) of object files, which are compiled from the .c source code

In programming, a library is a collection of pre-compiled pieces of code that can be reused in a program. Libraries simplify life for programmers, in that they provide reusable functions, routines, classes, data structures and so on which they can be reused in the programs. So instead of writing it ourselves, we can go and get it from something that has already been written and optimized. That is where the idea behind libraries comes from. We are reusing blocks of codes that have come from somewhere else. The main reason for writing a library is to allow code reusability, thus save considerable development time
