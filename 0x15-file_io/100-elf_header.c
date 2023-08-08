#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

import struct

# Define constants for ELF header structure
ELF_HEADER_FORMAT = "16sHHI3sHHHHHH"
ELF_HEADER_SIZE = struct.calcsize(ELF_HEADER_FORMAT)

# ELF header field offsets
EI_CLASS = 4
EI_DATA = 5
EI_VERSION = 6
EI_OSABI = 7
EI_ABIVERSION = 8
EI_PAD = 9
E_TYPE = 16
E_MACHINE = 18
E_VERSION = 20
E_ENTRY = 24
E_PHOFF = 32
E_SHOFF = 40
E_FLAGS = 48
E_EHSIZE = 52
E_PHENTSIZE = 54
E_PHNUM = 56
E_SHENTSIZE = 58
E_SHNUM = 60
E_SHSTRNDX = 62

def read_elf_header(file_path) :
	with open(file_path, "rb") as f :
		elf_header_data = f.read(ELF_HEADER_SIZE)
		elf_header_values = struct.unpack(ELF_HEADER_FORMAT, elf_header_data)
		return elf_header_values

def display_elf_header_info(header_values) :
	print("ELF Header Information:")
	print("Magic:", header_values[0].hex())
	print("Class:", header_values[EI_CLASS])
	print("Data Encoding:", header_values[EI_DATA])
	print("Version:", header_values[EI_VERSION])
	print("OS ABI:", header_values[EI_OSABI])
	print("ABI Version:", header_values[EI_ABIVERSION])
	print("Type:", header_values[E_TYPE])
	print("Machine:", header_values[E_MACHINE])
	print("Entry Point:", hex(header_values[E_ENTRY]))
	print("Program Header Offset:", header_values[E_PHOFF])
	print("Section Header Offset:", header_values[E_SHOFF])
	print("Flags:", header_values[E_FLAGS])
	print("ELF Header Size:", header_values[E_EHSIZE])
	print("Program Header Entry Size:", header_values[E_PHENTSIZE])
	print("Number of Program Headers:", header_values[E_PHNUM])
	print("Section Header Entry Size:", header_values[E_SHENTSIZE])
	print("Number of Section Headers:", header_values[E_SHNUM])
	print("Section Header String Table Index:", header_values[E_SHSTRNDX])

if == "main()" :
	elf_file_path = "user/dyildum/desktop/my_program.elf"
	header_values = read_elf_header(elf_file_path)
	display_elf_header_info(header_values)

	return (0);
