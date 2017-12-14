#!/bin/bash
blih -u thomas.foubert@epitech.eu repository create $1
blih -u thomas.foubert@epitech.eu repository setacl $1 ramassage-tek r
blih -u thomas.foubert@epitech.eu repository getacl $1
