#!/bin/bash


PROJECTDIR="`pwd`/APP"
echo $PROJECTDIR

SLIC=`cat $PROJECTDIR/RunRules/Simulation/RunRules.settings | grep socketName | sed "s/<\/.*//" | sed "s/.*>//"`

alias runsim="make RUNRULE=Simulation runsim"
alias enginesrc="cd $PROJECTDIR/EngineCode/src/prf_v3_compute"
alias cpucode="cd $PROJECTDIR/CPUCode"
alias simdir="cd $PROJECTDIR/RunRules/Simulation"
alias cleanall="make RUNRULE=Simulation distclean"
alias check_include="vim $PROJECTDIR/RunRules/Simulation/include/prf_v3_compute.h"
alias prjdir="cd $PROJECTDIR"
alias debug="'/opt/maxcompiler/bin/maxcompilersim' -n $SLIC -c VECTIS -d 1  restart; env MAXELEROSDIR=\"/opt/maxcompiler/lib/maxeleros-sim\" LD_LIBRARY_PATH=\"/opt/maxcompiler/lib/maxeleros-sim/lib:$LD_LIBRARY_PATH\" SLIC_CONF=\"use_simulation=$SLIC;\"   gdb $PROJECTDIR/RunRules/Simulation/binaries/prf_v3_compute"
alias debug_valgrind="'/opt/maxcompiler/bin/maxcompilersim' -n $SLIC -c VECTIS -d 1  restart; env MAXELEROSDIR=\"/opt/maxcompiler/lib/maxeleros-sim\" LD_LIBRARY_PATH=\"/opt/maxcompiler/lib/maxeleros-sim/lib:$LD_LIBRARY_PATH\" SLIC_CONF=\"use_simulation=$SLIC;\"   valgrind --tool=memcheck --leak-check=yes --show-reachable=yes --num-callers=20 --track-fds=yes  $PROJECTDIR/RunRules/Simulation/binaries/prf_v3_compute"
