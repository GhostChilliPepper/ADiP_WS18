# ADiP_WS18

Repo for ADiP Group 7

**Mitglieder:**

- Lasse
- Alex

__Uebung 1:__

A1) Algorithmenentwurf und Flussdiagramme

A2) Summe

A3) Primzahl

__Terminal quickcompile-script:__

1. edit bashrc file (terminal startup script)
 
    `vim ~/.bashrc` 
    (alternatives to vim are vi, nano, etc.)
    
2. paste the following code at the end

    ```
    function crun() {
         gcc "$@" -o tmp.out && ./tmp.out && rm ./tmp.out
    }
     ```
     
3. compile and execute c file with the folloing command in the terminal

    `crun <path to file.c>`