##################################################
# How to use Makefile for automated diff testing #
##################################################

CXX      = clang++
CXXFLAGS = -g3 -Wall -Wextra -Wpedantic -Wshadow
LDFLAGS  = -g3

nochange: typewriter the_typewriter
	./typewriter 1_opendoc.txt 1_opendoclog.txt < 1_nochange.txt
	./the_typewriter 1_opendoc.txt 1_opendoclogdemo.txt < 1_nochange.txt
	diff 1_opendoclog.txt 1_opendoclogdemo.txt

downarrow: typewriter the_typewriter
	./typewriter 2_snaptoend.txt 2_snaptoendlog.txt < 2_downarrow.txt
	./the_typewriter 2_snaptoend.txt 2_snaptoendlogdemo.txt < 2_downarrow.txt
	diff 2_snaptoendlog.txt 2_snaptoendlogdemo.txt

multi: typewriter the_typewriter
	./typewriter 3_multiaction.txt 3_multiactionlog.txt < 3_multiinput.txt
	./the_typewriter 3_multiaction.txt 3_multiactionlogdemo.txt < 3_multiinput.txt
	diff 3_multiactionlog.txt 3_multiactionlogdemo.txt

#make all logs and diff
all: nochange downarrow multi

deldownarrow:
	rm -f 2_snaptoendlog.txt 2_snaptoendlogdemo.txt

delnochange:
	rm -f 1_opendoclog.txt 1_opendoclogdemo.txt

delmulti:
	rm -rf 3_multiactionlog.txt 3_multiactionlogdemo.txt

#delete all logs
del: deldownarrow delnochange delmulti
	rm -rf






