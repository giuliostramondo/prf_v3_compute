#!/bin/bash


PROJECTDIR="`pwd`/APP"
echo $PROJECTDIR

alias runsim="make RUNRULE=Simulation runsim"
alias enginesrc="cd $PROJECTDIR/EngineCode/src/prf_v3_compute"
alias cpucode="cd $PROJECTDIR/CPUCode"
alias simdir="cd $PROJECTDIR/RunRules/Simulation"
alias cleanall="make RUNRULE=Simulation distclean"
alias check_include="vim $PROJECTDIR/RunRules/Simulation/include/prf_v3_compute.h"
