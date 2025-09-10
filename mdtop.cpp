#include <iostream>
#include <fstream>
#include <string>
#include <unistd.h>

int spl_count = 0;
int count = 8;

constexpr const char* tab = "	";

void clear_screen(){
using namespace std;
	cout << "\033[H\033[2J\033[3J";
}


constexpr const char* spl[6] =
	{
	"███╗   ███╗██████╗ ████████╗ ██████╗ ██████╗ \n",
	"████╗ ████║██╔══██╗╚══██╔══╝██╔═══██╗██╔══██╗\n",
	"██╔████╔██║██║  ██║   ██║   ██║   ██║██████╔╝\n",
	"██║╚██╔╝██║██║  ██║   ██║   ██║   ██║██╔═══╝ \n",
	"██║ ╚═╝ ██║██████╔╝   ██║   ╚██████╔╝██║     \n",
	"╚═╝     ╚═╝╚═════╝    ╚═╝    ╚═════╝ ╚═╝     \n"
	};

void print_tabs(int count) {
using namespace std;
    for (int i = 0; i < count; ++i) {
        cout << tab;
    }
}


void splash(){
	using namespace std;
	spl_count = 0;
	while(spl_count < 6){
		cout << spl[spl_count];
		spl_count = spl_count + 1;
	}
}

int main() {

while(true){
	clear_screen();
	splash();

    	std::string path = "/proc/mdstat";

    	std::ifstream stat_file(path);
    	if (!stat_file.is_open()) {
        	std::cerr << "Failed to open: " << path << "\n";
        	return 1;
    	}

    	std::string line;
    	while (std::getline(stat_file, line)) {
       		std::cout << line << '\n';
    	}

	stat_file.close();

// Shits broke
// idk why tho

/*
	std::string path2 = "/proc/mounts";

	std::ifstream df_file(path2);
	if (!df_file.is_open()){
		std::cerr << "Failed to open: " << path2 << "\n";
		return 1;
	}

	std::string line2;
	while (std::getline(df_file, line2)){
		if	(line.find("/dev/md0") != std::string::npos){
				std::cout << line2 << std::endl;
			}
	}

    	df_file.close();
*/
	usleep(500000);

}

    	return 0;

}
