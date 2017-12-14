#!/bin/bash
cut -d : -f 5 | grep -ic " $1"
