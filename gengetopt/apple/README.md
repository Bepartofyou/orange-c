## Refs
* http://bikulov.org/blog/2013/10/26/command-line-arguments-in-c-and-c-plus-plus-with-gengetopt/
## build
* make
## Output samples:
* ./app -a 1,2,3,4,5,6 -f test -s 16,32,64 --long-option 0.4 -d 0.8

      test
      16 32 64
      1 2 3 4 5 6
      0.4
      0.8
      0
* ./app -a 1 -f test -c

      test
      1
      0.003
      1
* ./app

      ./app: '--filename' ('-f') option required
      ./app: '--array' ('-a') option required
