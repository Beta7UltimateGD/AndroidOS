#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <chrono>
#include <thread>
#include <vector>
#include <map>
#include <cstdlib>
#include <ctime>
#include <stdlib.h>

using namespace std;

#define el "\n"

// File System
map<string, string> files = 
{
    {"ANDROID_OS.ISO", "System boot image"}, 
    {"WARNING_KNL.EXE", "Critical system file"}, 
    {"README.TXT", "System documentation"}, 
    {"TASKS.LOG", "Task execution history"},
    {"CONFIG.SYS", "System configuration file"}
};

vector<string> recycle_bin;
vector<string> installed_apps = {"File Explorer", "Calculator", "System Info"};
map<string, string> app_store = 
{
    {"Notepad", "A simple text editor"},
    {"Weather", "Shows the current weather"},
    {"Media Player", "Plays audio and video files"}
};

vector<string> users = { "Admin", "Developer" };
string current_user = "Guest";
string theme = "Light";
bool system_locked = false;
bool update_available = false;

string adminpassword = "12345678";
string devpassword = "viethoang082013";
string inputuser;
string inputpassword;

// Login Screen
void login()
{
  cout << "Choose an user: Guest, Admin, Developer" << el;
  cout << ">>";
  getline(cin, inputuser);
  if (inputuser == "Guest")
  {
    cout << "Logging in as Guest..." << el;
  }
  else if (inputuser == "Admin")
  {
    cout << "Enter in the password: ";
    getline(cin, inputpassword);
    if (inputpassword == adminpassword)
    {
      cout << "Logging in as Admin..." << el;
    }
    else 
    {
      for(int i = 0; i <= 3; i++)
      {
        cout << "Try again" << el;
        if (i == 3)
        {
          cout << "System shutting down..." << el;
          exit(1);
        }
      }
    }
  }
  else if (inputuser == "Developer")
  {
    cout << "Enter in the password: ";
    getline(cin, inputpassword);
    if (inputpassword == devpassword)
    {
      cout << "Welcome, Beta. Logging in..." << el;
    }
    else
    {
      cout << "Shutting down..." << el;
      exit(1);
    }
  }
  else
  {
    cout << "Please select an user." << el;
    exit(1);
  }
}

// Task Manager
void task_manager()
{
    cout << "\nTASK MANAGER - Running Processes" << el;
    cout << "--------------------------------" << el;
    cout << "1. SYSTEM_KERNEL - Running" << el;
    cout << "2. FILE_MANAGER - Idle" << el;
    cout << "3. NETWORK_SERVICE - Running" << el;
    cout << "4. GRAPHICS_ENGINE - Running" << el;
    cout << "5. BACKGROUND_TASK - Sleeping" << el;
    cout << "--------------------------------" << el;
}

// Recycle Bin
void recycle_bin_manager()
{
    cout << "\nRECYCLE BIN" << el;
    if (recycle_bin.empty())
    {
        cout << "Recycle bin is empty." << el;
    }
    else
    {
        cout << "Files in recycle bin:" << el;
        for (const auto& file : recycle_bin)
        {
            cout << "- " << file << el;
        }
        cout << "Type 'RESTORE' to recover all files or 'EMPTY' to delete permanently: ";
        string action;
        cin >> action;
        if (action == "RESTORE")
        {
            for (const auto& file : recycle_bin)
            {
                files[file] = "Restored file";
            }
            recycle_bin.clear();
            cout << "Files restored successfully." << el;
        }
        else if (action == "EMPTY")
        {
            recycle_bin.clear();
            cout << "Recycle bin emptied." << el;
        }
    }
}

// Firewall
void firewall_settings()
{
    cout << "\nFIREWALL SETTINGS" << el;
    cout << "Status: ENABLED" << el;
    cout << "Allowed Programs: File Explorer, Calculator, Weather App" << el;
    cout << "Blocked Programs: Unknown Sources" << el;
}

// File Search
void file_search()
{
    cout << "\nFILE SEARCH" << el;
    cout << "Enter filename to search: ";
    string filename;
    cin >> filename;
    if (files.find(filename) != files.end())
    {
        cout << "File found: " << filename << " - " << files[filename] << el;
    }
    else
    {
        cout << "File not found." << el;
    }
}

// System Benchmark
void system_benchmark()
{
    cout << "\nRUNNING SYSTEM BENCHMARK..." << el;
    this_thread::sleep_for(chrono::milliseconds(2000));
    cout << "CPU Performance: 85%\nRAM Speed: 3200MHz\nDisk Speed: 500MB/s" << el;
}

// Bluetooth Manager
void bluetooth_manager()
{
    cout << "\nBLUETOOTH MANAGER" << el;
    cout << "Available Devices: \n1. Wireless Headphones\n2. Smartwatch\n3. Bluetooth Speaker" << el;
    cout << "Enter device number to connect: ";
    int device;
    cin >> device;
    cout << "Connecting..." << el;
    this_thread::sleep_for(chrono::milliseconds(1000));
    cout << "Device connected successfully." << el;
}

// Dark Mode Toggle
void dark_mode_toggle()
{
    if (theme == "Light")
    {
        theme = "Dark";
        cout << "Dark mode enabled." << el;
    }
    else
    {
        theme = "Light";
        cout << "Light mode enabled." << el;
    }
}

// Windows Defender
void windows_defender()
{
    cout << "\nSCANNING SYSTEM FILES FOR THREATS..." << el;
    this_thread::sleep_for(chrono::milliseconds(2000));
    cout << "No threats detected." << el;
}

// Task Scheduler
void task_scheduler()
{
    cout << "\nTASK SCHEDULER" << el;
    cout << "Enter task name to schedule: ";
    string task;
    cin >> task;
    cout << "Task '" << task << "' scheduled successfully." << el;
}

// Hibernate Mode
void hibernate_mode()
{
    cout << "\nSystem is now in Hibernate Mode. Resume to continue." << el;
    this_thread::sleep_for(chrono::milliseconds(2000));
    cout << "System Resumed!" << el;
}

// Lock Screen
void lock_screen()
{
    system_locked = true;
    cout << "\nSYSTEM LOCKED. Enter password to unlock: ";
    string password;
    while (true)
    {
        cin >> password;
        if (password == "password")
        {
            system_locked = false;
            cout << "System Unlocked!" << el;
            break;
        }
        else
        {
            cout << "Incorrect password. Try again: ";
        }
    }
}

// Bootloader
void bootloader()
{
  double ram;
  this_thread::sleep_for(chrono::milliseconds(1000));
  system("cls");
  this_thread::sleep_for(chrono::milliseconds(1000));
  cout << "Copyright (C) Beta Corporation. All rights reserved." << el;
  this_thread::sleep_for(chrono::milliseconds(1000));
  cout << "AndroidOS Build 209" << el;
  this_thread::sleep_for(chrono::milliseconds(1000));
  cout << "(209.20)" << el;
  this_thread::sleep_for(chrono::milliseconds(1000));
  cout << "GNU Compiler Collection 8 (GCC v8). C++17" << el;
  this_thread::sleep_for(chrono::milliseconds(10000));
  for(double ram = 0; ram < 32768; ram++)
  {
    cout << "Testing RAM: " << ram << "KB" << el;
    if (ram == 32767) {
      cout << "RAM test complete. No issues detected." << el;
    }
  }
}

// x25 Kernel
void kernel()
{
  int xdigit = 000000;
  int x16 = 0e16;
  while (xdigit < 100001)
  {
    xdigit++;
    if (xdigit == 100000)
    {
      while (x16 < 1e16)
      {
        x16++;
      }
    }
  }
}

// Android Version & Kernel Version
void ver()
{
  string verinput;
  string ver1 = "Build 209";
  string ver2 = "(209.20)";
  string ver3 = "Kernel Version 20";
  cout << ver1 << el;
  cout << ver2 << el;
  cout << ver3 << el;
  cout << "Copyright (C) Beta Corporation. All rights reserved." << el;
  cout << "AndroidOS (Console)" << el;
  cout << "GNU Compiler Collection 8 (GCC v8). C++17" << el;
}

// Android Updater
void updater()
{
  cout << "Available updates: N/A" << el;
}
  

// Main Menu
int main()
{
    string input;
    login();
    bootloader();
    while (true)
    {
        if (system_locked)
        {
            lock_screen();
        }
        else if (update_available)
        {
            cout << "Please update to build 234.";
            this_thread::sleep_for(chrono::milliseconds(5000));
            system("cls");
            exit(1);
        }

        cout << "\nANDROID OS MENU" << el;
        cout << "1. Task Manager" << el;
        cout << "2. Recycle Bin" << el;
        cout << "3. Firewall Settings" << el;
        cout << "4. File Search" << el;
        cout << "5. System Benchmark" << el;
        cout << "6. Bluetooth Manager" << el;
        cout << "7. Dark Mode" << el;
        cout << "8. Android Security" << el;
        cout << "9. Task Scheduler" << el;
        cout << "10. Hibernate Mode" << el;
        cout << "11. Lock Screen" << el;
        cout << "12. Shutdown" << el;
        cout << "13. Version" << el;
        cout << "14. Updater" << el;
        cout << "Select: ";
        getline(cin, input);

        if (input == "1")
        {
        	this_thread::sleep_for(chrono::milliseconds(1000));
            task_manager();
            this_thread::sleep_for(chrono::milliseconds(1000));
        }
        else if (input == "2")
        {
        	this_thread::sleep_for(chrono::milliseconds(1000));
            recycle_bin_manager();
            this_thread::sleep_for(chrono::milliseconds(1000));
        }
        else if (input == "3")
        {
        	this_thread::sleep_for(chrono::milliseconds(1000));
            firewall_settings();
            this_thread::sleep_for(chrono::milliseconds(1000));
        }
        else if (input == "4")
        {
        	this_thread::sleep_for(chrono::milliseconds(1000));
            file_search();
            this_thread::sleep_for(chrono::milliseconds(1000));
        }
        else if (input == "5")
        {
        	this_thread::sleep_for(chrono::milliseconds(1000));
            system_benchmark();
            this_thread::sleep_for(chrono::milliseconds(1000));
        }
        else if (input == "6")
        {
        	this_thread::sleep_for(chrono::milliseconds(1000));
            bluetooth_manager();
            this_thread::sleep_for(chrono::milliseconds(1000));
        }
        else if (input == "7")
        {
        	this_thread::sleep_for(chrono::milliseconds(1000));
            dark_mode_toggle();
            this_thread::sleep_for(chrono::milliseconds(1000));
        }
        else if (input == "8")
        {
        	this_thread::sleep_for(chrono::milliseconds(1000));
            windows_defender();
            this_thread::sleep_for(chrono::milliseconds(1000));
        }
        else if (input == "9")
        {
        	this_thread::sleep_for(chrono::milliseconds(1000));
            task_scheduler();
            this_thread::sleep_for(chrono::milliseconds(1000));
        }
        else if (input == "10")
        {
        	this_thread::sleep_for(chrono::milliseconds(1000));
            hibernate_mode();
            this_thread::sleep_for(chrono::milliseconds(1000));
        }
        else if (input == "11")
        {
        	this_thread::sleep_for(chrono::milliseconds(1000));
            lock_screen();
            this_thread::sleep_for(chrono::milliseconds(1000));
        }
        else if (input == "12")
        {
        	this_thread::sleep_for(chrono::milliseconds(1000));
            cout << "Shutting down..." << el;
            this_thread::sleep_for(chrono::milliseconds(1000));
            return 0;
        }
        else if (input == "13")
        {
        	this_thread::sleep_for(chrono::milliseconds(1000));
            ver();
            this_thread::sleep_for(chrono::milliseconds(1000));
        }
        else if (input == "14")
        {
        	this_thread::sleep_for(chrono::milliseconds(1000));
            updater();
            this_thread::sleep_for(chrono::milliseconds(1000));
        }
        else
        {
        	this_thread::sleep_for(chrono::milliseconds(1000));
            cout << "Invalid option." << el;
            this_thread::sleep_for(chrono::milliseconds(1000));
        }
    }
}
