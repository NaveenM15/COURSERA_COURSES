#******************************************************************************
# Copyright (C) 2017 by Alex Fosdick - University of Colorado
#
# Redistribution, modification or use of this software in source or binary
# forms is permitted as long as the files maintain this copyright. Users are 
# permitted to modify this and use it to learn about the field of embedded
# software. Alex Fosdick and the University of Colorado are not liable for any
# misuse of this material. 
#
#*****************************************************************************

#------------------------------------------------------------------------------
# Simple makefile for a general build system
#
# Use: make [TARGET] [PLATFORM-OVERRIDES]
#
# Build Targets:
#      <FILE>.o - Builds <FILE>.o object file
#      build - Builds and links all source files
#      all - Same as build
#      clean - removes all generated files
#
# Platform Overrides:
#      CC - Compiler to use (gcc, clang, etc.)
#      CFLAGS - Flags to pass to the compiler
#      LDFLAGS - Flags to pass to the linker
#
#------------------------------------------------------------------------------
include sources.mk

# Platform Overrides
PLATFORM = WINDOWS

# Compiler Flags and Defines
CC = gcc # or replace with another compiler of choice
LD = ld # or use the same compiler as linker, e.g., gcc
LDFLAGS = -Wl,-Map=$(TARGET).map
CFLAGS = -Wall
CPPFLAGs = 

OBJS = $(SRCS:.c=.o)

%.o : %.c
    $(CC) -c $< $(CFLAGS) $(CPPFLAGs) -o $@

.PHONY: build
build: all

.PHONY: all
all: $(TARGET).out

$(TARGET).out: $(OBJS)
    $(CC) $(OBJS) $(CFLAGS) $(LDFLAGS) -o $@

.PHONY: clean
clean:
    rm -f $(OBJS) $(TARGET).out $(TARGET).map
