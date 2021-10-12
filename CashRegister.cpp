
#include <iostream>
#include <getopt.h>

class CashRegister{
public:
};

void registershell(){

}

int main(int argc, char *argv[]){
int opr;
int option_index = 0;

static struct option long_options[] = {
		{"register-shell", required_argument, 0, 'r'},
		{"help", no_argument, 0, 'h'},
		{"version", no_argument, 0, 'v'},
		{0, 0, 0, 0}
};

opr = getopt_long(argc, argv, "r:hv", long_options, &option_index);

switch(opr){
case -1:
	std::cout << "Usage: crust --register-shell, crust --help";
	break;
case 'r':
	break;
case 'h':
	std::cout << "-r --register-shell	crust's shell, only way to use crust.\n-h --help		Print this help\n-v --version		Print program version.";
	break;
case 'v':
	std::cout << "crust version 0.1";
	break;
}

}
