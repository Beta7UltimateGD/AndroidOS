#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <chrono>
#include <thread>

using namespace std;

#define el endl or "\n"
// string file = "FILE";
// string file2 = "file";
string input2;
string line2 = "SYSTEM_32";
string line2p1 = "system32";
string line2p2 = "system_32";
string line2p3 = "SYSTEM32";
string input3;


double main() {
  while (true) {
    cout << "[00:00:01] Loading 1 files..." << el;
    this_thread::sleep_for(chrono::milliseconds(1000));
    cout << "[00:00:02] Loading AndroidOS" << el;
    this_thread::sleep_for(chrono::milliseconds(1000));
    cout << "[00:00:03] Loaded." << el;
    this_thread::sleep_for(chrono::milliseconds(1000));
    string input;
    cout << "ANDROID-OS32 ***** BUILD 100" << el;
    this_thread::sleep_for(chrono::milliseconds(1000));
    cout << "CONSOLE VERSION: RELEASE1.0" << el;
    cout << ">> ";
    getline(cin, input);
    if (input == "I") { 
      cout << "-- INSERT MODE --" << el;
    }
    else {
      cout << "SELECT A MODE: I, T" << el;
      continue;
    }

    if (input == "CALCULATOR" || input == "calculator") {
      cout << "CALCULATOR32" << el;
    }
      
      while (true) {
        char op;
        float a, b, result;

        cout << ">> ";
        getline(cin, input);

        
        if (input == "EXIT_CALCULATOR" || input == "exit_calculator") {
          cout << "CALCULATOR DISCONNECTED" << el;
          break;
        }
        else if (input == "file" || input == "FILE") {
          cout << "             FILE_EXPLORER               " << el;
          cout << "SYSTEM_32" << el;
          cout << el;
          cout << ">> ";
          getline(cin, input2);
          if (input2 == line2 || input2 == line2p1 || input2 == line2p2 || input2 == line2p3) {
            cout << "ANDROID_OS.ISO" << el;
            cout << "WARNING_KNL.EXE" << el;
            cout << ">> ";
            getline(cin, input3);
            if (input3 == "ANDROID_OS.ISO") {
              cout << "************* ! *************" << el;
              cout << "THERE IS NO IMAGE LOADER YET!" << el;
              cout << "***********0x99792***********" << el;
              cout << "*****************************" << el;
              continue;
            } else if (input3 == "WARNING_KNL.EXE") {
              cout << "ERROR" << el;
              this_thread::sleep_for(chrono::milliseconds(1000));
              cout << "SYSTEM32 ERROR" << el;
              this_thread::sleep_for(chrono::milliseconds(1000));
              cout << "[CRASH1{OS} ***** CRASH2{SYSTEM} *****]" << el;
              this_thread::sleep_for(chrono::milliseconds(1000));
              cout << "code=1";
              return 1;
            } else if (input3 != "ANDROID_OS.ISO" || input3 != "WARNING_KNL.EXE") {
              cout << "********{ ! }********" << el;
              cout << "ERROR: FILE NOT FOUND" << el;
              cout << "*******0x19382*******" << el;
              cout << "*********************" << el;
              continue;
            } 
          

        
        op = input[0];
  
        
        cout << "NUMBER_1: ";
        cin >> a;
        cout << "NUMBER_2: ";
        cin >> b;

        switch (op) {
          case '+':
            result = a + b;
            cout << result << el;
            break;
          case '-':
            result = a - b;
            cout << result << el;
            break;
          case '*':
            result = a * b;
            cout << result << el;
            break;
          case '/':
            if (b == 0) {
              cout << "ERROR32 SYSTEM CRASH" << el;
              return 0;
            } else {
              result = a / b;
              cout << result << el;
            }
            break;
          default:
            cout << "INVALID_OPERATOR" << el;
            cout << "RESTARTING101";
            break;
        }
          }
        }
    else if (input == "PRINT" || input == "print") {
      cout << ">> ";
      string line;
      getline(cin, line);

      // exit print
      if (line == "END") {
        break;
      }

      cout << line << endl;
    } 
    else if (input == "EXIT" || input == "exit" || input == "X" || input == "x") {
      cout << "SHUTTING DOWN SYSTEM_32" << el;
      this_thread::sleep_for(chrono::milliseconds(1000));
      cout << "code=0";
      return 0;
    }
    else if (input == "POWER_SETTINGS") {
      cout << "POWER SETTINGS: ABNORMAL, NORMAL, OVERLOAD" << el;
      cout << "CURRENT POWER SETTING: NORMAL" << el;
    }
    else if (input == "help") {
      cout << "COMMANDS: I, CALCULATOR, EXIT_CALCULATOR, FILE, PRINT&END, EXIT, dir, POWER_SETTINGS" << el;
      cout << "USE ANY COMMANDS EXCEPT BREAKING THE OS." << el;
      cout << "- Beta" << el;
    }
    else if (input == "dir") {
      cout << "<SYSTEM_32>" << el;
      cout << "<ANDROID_OS.ISO>" << el;
      cout << "<WARNING_KNL.EXE>" << el;
    }
    else {
      while (true) {
      // cout << "INVALID_RESPONSE" << el;
      // this_thread::sleep_for(chrono::milliseconds(1000));
      // cout << "ENTER A DIFFERENT SYNTAX OR UPDATE SYSTEM_32" << el;
      // cout << "sjxuxdhwniydwuhdwuhxbuhxubxuhb™√®¢√π^^π™$•$¢√÷°✓^π™¢√®" << endl;
      // cout << "uhyhhuhuyhuhhuyhuyhuh°€=``√£✓£^^€===÷°-+--2!26--!16-6r" << endl;
      // cout << "+#7#2+!-#-#--#-2!6#&-;!28+277-π°π^π^°~°π~^£×~=°€π°£÷89";
      // return 1;
        cout << 01 << el;
      }
    }
  }
  }
}
