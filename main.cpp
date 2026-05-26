#include <iostream>
#include <vector>
#include <string>

using namespace std;

// ---------------------- PROCESS CLASS ----------------------
class Process {
private:
    int pid;
    string name;
    int memoryUsage; // in MB

public:
    Process(int pid, string name, int memoryUsage) {
        this->pid = pid;
        this->name = name;
        this->memoryUsage = memoryUsage;
    }

    int getPID() { return pid; }
    string getName() { return name; }
    int getMemoryUsage() { return memoryUsage; }

    void display() {
        cout << "PID: " << pid
             << " | Name: " << name
             << " | Memory: " << memoryUsage << " MB" << endl;
    }
};

// ---------------------- MEMORY MONITOR ----------------------
class MemoryMonitor {
public:
    void showProcesses(vector<Process>& processes) {
        cout << "\n--- Process Memory Report ---\n";
        for (auto &p : processes) {
            p.display();
        }
    }

    double calculateAverageMemory(vector<Process>& processes) {
        int total = 0;
        for (auto &p : processes) {
            total += p.getMemoryUsage();
        }
        return (processes.size() > 0) ? (double)total / processes.size() : 0;
    }
};

// ---------------------- SECURITY DETECTOR ----------------------
class SecurityDetector {
private:
    int threshold;

public:
    SecurityDetector(int threshold) {
        this->threshold = threshold;
    }

    void scan(vector<Process>& processes) {
        cout << "\n--- Security Scan Report ---\n";
        bool found = false;

        for (auto &p : processes) {
            if (p.getMemoryUsage() > threshold) {
                cout << "[ALERT] Suspicious Process Detected!\n";
                cout << "PID: " << p.getPID()
                     << " | Name: " << p.getName()
                     << " | Memory: " << p.getMemoryUsage() << " MB\n";
                found = true;
            }
        }

        if (!found) {
            cout << "No suspicious processes detected.\n";
        }
    }
};

// ---------------------- SYSTEM MANAGER ----------------------
class SystemManager {
private:
    vector<Process> processes;
    MemoryMonitor monitor;
    SecurityDetector detector;

public:
    SystemManager(int threshold) : detector(threshold) {}

    void addProcess(Process p) {
        processes.push_back(p);
    }

    void runMonitoring() {
        monitor.showProcesses(processes);

        cout << "\nAverage Memory Usage: "
             << monitor.calculateAverageMemory(processes)
             << " MB\n";

        detector.scan(processes);
    }
};

// ---------------------- MAIN ----------------------
int main() {
    SystemManager system(300); // threshold = 300 MB

    // Simulated processes
    system.addProcess(Process(1, "chrome.exe", 450));
    system.addProcess(Process(2, "explorer.exe", 120));
    system.addProcess(Process(3, "game.exe", 800));
    system.addProcess(Process(4, "notepad.exe", 50));

    system.runMonitoring();

    return 0;
}
