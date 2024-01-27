#!/usr/bin/node

/*
    Function to print a square with #
*/

if (process.argv.length <= 2) {
    process.stderr.write("Warning: missing argument\n");
    process.exit(1)
}

square_size = parseInt(process.argv[2], 10)

for (let i = 0 ; i < square_size ; i ++) {
    for (let j = 0 ; j < square_size ; j ++) {
        process.stdout.write("#");
    }
    process.stdout.write("\n");
}
