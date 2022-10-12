// valorant-cleaner.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include "XorStr.hpp"
#include <iostream>
#include <Windows.h>
#include <TlHelp32.h>
#include <cstdio>
#include <string>
#include <thread>
#include <direct.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>

#pragma warning(disable : 4996)

#include <random>
#include <string>

int main()
{
    SetConsoleTitleA(XorStr("valorant cleaner - verious.win | vavy#8424").c_str());

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
    std::cout << XorStr("\n  [").c_str();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
    std::cout << XorStr("!").c_str();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
    std::cout << XorStr("] ").c_str();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
    std::cout << XorStr("PRESS THE ENTER KEY TO START CLEAN VALORANT").c_str();
    std::cin.get();

    system(XorStr("cls").c_str());

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
    system(XorStr("del /s /q C:\\Users\\%username%\\AppData\\Local\\VALORANT").c_str());
    system(XorStr("del /s /q C:\\Users\\%username%\\AppData\\Local\\Riot Games").c_str());
    system(XorStr("del /s /q C:\\ProgramData\\Riot Games").c_str());
    system(XorStr("del /s /q C:\\Users\\%username%\\AppData\\Local\\Riot Games").c_str());
    system(XorStr("reg delete HKEY_CURRENT_USER\\Software\\Microsoft\\Windows\\CurrentVersion\\ExplorerHKEY_CURRENT_USER\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Uninstall\\Riot Game valorant.live").c_str());
    system(XorStr("reg delete HKEY_LOCAL_MACHINE\\system(XorStr\\CurrentControlSet\\Services\\vgk\\Security /f").c_str());
    system(XorStr("reg delete HKEY_LOCAL_MACHINE\\system(XorStr\\CurrentControlSet\\Services\\vgc\\Security /f").c_str());
    system(XorStr("reg delete HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Uninstall\\Riot Vangard /f").c_str());
    system(XorStr("reg delete HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\RADAR\\HeapLeakDetection\\DiagnosedApplications\\VALORANT - Win64 - Shipping.ex /f").c_str());
    system(XorStr("reg delete HKEY_CURRENT_USER\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Explorer\\UserAssist /f").c_str());

    system(XorStr("reg delete HKEY_CLASSES_ROOT\\riotclient /f").c_str());
    system(XorStr("RMDIR /S /Q C:\\Users\\%username%\\AppData\\Local\\VALORANT").c_str());
    system(XorStr("RMDIR /S /Q C:\\Riot Games").c_str());
    system(XorStr("RMDIR /S /Q C:\\ProgramData\\Riot Games").c_str());
    system(XorStr("RMDIR /S /Q C:\\ProgramData\\Application Data\\Riot Games").c_str());
    system(XorStr("RMDIR /S /Q C:\\Program Files\\Riot Vangard").c_str());
    system(XorStr("RMDIR /S /Q C:\\Program Files\\Riot Games").c_str());
    system(XorStr("RMDIR /S /Q C:\\Documents and Settings\\All Users\\Riot Games").c_str());
    system(XorStr("RMDIR /S /Q C:\\Users\\%username%\\AppData\\Roaming\\Microsoft\\Windows\\Start Menu\\Programs\\Riot Games").c_str());
    system(XorStr("RMDIR /S /Q C:\\Users\\%username%\\Local Settings\\Riot Games").c_str());
    system(XorStr("del /f /q C:\\ProgramData\\Microsoft\\Windows\\Start Menu\\Programs\\Riot Games\\VALORANT.lnk").c_str());
    system(XorStr("del C:\\Riot Games\\VALORANT\\live\\Manifest_NonFSFiles_Win64.txt /f /q").c_str());
    system(XorStr("del C:\\Riot Games\\VALORANT\\live\\Engine\\Binaries\\ThirdParty\\CEF3\\Win64\\icdtl.dat /f /q").c_str());
    system(XorStr("del C:\\Riot Games\\Riot Client\\X\\natives_blob.bin /f /q").c_str());
    system(XorStr("del C:\\Riot Games\\Riot Client\\X\\icdtl.dat /f /q").c_str());
    system(XorStr("del C:\\Riot Games\\Riot Client\\X\\Plgins\\plgin - manifest.json /f /q").c_str());
    system(XorStr("del /s /q C:\\Windows\\vgkbootstats.dat").c_str());
    system(XorStr("reg delete HKEY_LOCAL_MACHINE\\system(XorStr\\HardwareConfig /f").c_str());
    system(XorStr("del /s /q /f %system(XorStrdrive%\\$Recycle.bin").c_str());
    system(XorStr("del /s /q D:\\system(XorStr Volume Information\\tracking.log").c_str());
    system(XorStr("del /s /q C:\\Windows\\win.ini").c_str());
    system(XorStr("del /s /q C:\\Windows\\memory.dmp").c_str());
    system(XorStr("del /s /q C:\\Windows\\WindowsUpdate.log").c_str());
    system(XorStr("del /s /q C:\\Windows\\system(XorStr32\\LogFiles\\WMI\\Wifi.etl").c_str());
    system(XorStr("del /s /q C:\\Windows\\system(XorStr32\\LogFiles\\WMI\\RadioMgr.etl").c_str());
    system(XorStr("del /s /q C:\\Windows\\system(XorStr32\\LogFiles\\WMI\\NtfsLog.etl").c_str());
    system(XorStr("del /s /q C:\\Windows\\system(XorStr32\\LogFiles\\WMI\\NetCore.etl").c_str());
    system(XorStr("del /s /q C:\\Windows\\system(XorStr32\\LogFiles\\WMI\\Microsoft - Windows - Rdp - Graphics - RdpIdd - Trace.etl").c_str());
    system(XorStr("del /s /q C:\\Windows\\system(XorStr32\\LogFiles\\WMI\\LwtNetLog.etl").c_str());
    system(XorStr("del /s /q C:\\Windows\\UserviceProfiles\\NetworkService\\NTSER.DAT").c_str());
    system(XorStr("del /s /q C:\\Windows\\UserviceProfiles\\LocalService\\AppData\\Local\\Microsoft\\Windows\\qwavecache.dat").c_str());
    system(XorStr("del /s /q C:\\Windows\\Logs\\DISM\\dism.log").c_str());
    system(XorStr("del /s /q C:\\Windows\\DirectX.log").c_str());
    system(XorStr("del /s /q C:\\Users\\Public\\Desktop\\VALORANT.lnk").c_str());
    system(XorStr("del /s /q C:\\Users\\%username%\\ntser.dat.LOG2").c_str());
    system(XorStr("del /s /q C:\\Users\\%username%\\ntser.dat.LOG1").c_str());
    system(XorStr("del /s /q C:\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\container.dat").c_str());
    system(XorStr("del /s /q C:\\Users\\%username%\\NTSER.DAT").c_str());
    system(XorStr("del /s /q C:\\Users\\%username%\\AppData\\Local\\UnrealEngine\\4.23\\Saved\\Config\\WindowsClient\\Manifest.ini").c_str());
    system(XorStr("del /s /q C:\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache\\IE\\container.dat").c_str());
    system(XorStr("del /s /q C:\\Users\\%username%\\AppData\\Local\\Microsoft\\Vault\\UserProfileRoaming\\Latest.dat").c_str());
    system(XorStr("del /s /q C:\\Users\\%username%\\AppData\\Local\\Microsoft\\OneDrive\\logs\\Common\\DeviceHealthSummaryConfigration.ini").c_str());
    system(XorStr("del /s /q C:\\Users\\%username%\\AppData\\Local\\IconCache.db").c_str());
    system(XorStr("del /s /q C:\\Users\\%username%\\AppData\\Local\\AC\\INetCookies\\ESE\\container.dat").c_str());
    system(XorStr("del /s /q C:\\system(XorStr Volume Information\\tracking.log").c_str());
    system(XorStr("del /s /q C:\\ProgramData\\Microsoft\\Windows\\DeviceMetadataCache\\dmrc.idx").c_str());
    system(XorStr("del /s /q C:\\Config.Msi").c_str());
    system(XorStr("RMDIR /S /Q C:\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\Temporary Internet Files").c_str());
    system(XorStr("RMDIR /S /Q C:\\Windows\\logs\\CBS").c_str());
    system(XorStr("RMDIR /S /Q C:\\Windows\\Temp").c_str());
    system(XorStr("RMDIR /S /Q C:\\Windows\\system(XorStr32\\config\\system(XorStrprofile\\AppData\\Local\\ScreenTime").c_str());
    system(XorStr("RMDIR /S /Q C:\\Windows\\system(XorStr32\\config\\system(XorStrprofile\\AppData\\Local\\Microsoft\\Vault\\UserProfileRoaming").c_str());
    system(XorStr("RMDIR /S /Q C:\\Windows\\system(XorStr32\\config\\system(XorStrprofile\\AppData\\Local\\D3DSCache").c_str());
    system(XorStr("RMDIR /S /Q C:\\Windows\\system(XorStr32\\config\\TxR").c_str());
    system(XorStr("RMDIR /S /Q C:\\Windows\\system(XorStr32\\WDI\\LogFiles\\StartpInfo").c_str());
    system(XorStr("RMDIR /S /Q C:\\Windows\\system(XorStr32\\WDI\\LogFiles").c_str());
    system(XorStr("RMDIR /S /Q C:\\Windows\\SoftwareDistribution").c_str());
    system(XorStr("RMDIR /S /Q C:\\Windows\\UserviceProfiles\\NetworkService\\AppData\\Local\\Microsoft\\Windows\\deliveryOptimization\\Logs").c_str());
    system(XorStr("RMDIR /S /Q C:\\Windows\\UserviceProfiles\\NetworkService\\AppData\\Local\\Microsoft\\Windows\\DeliveryOptimization\\State").c_str());
    system(XorStr("RMDIR /S /Q C:\\Users\\%username%\\AppData\\Roaming\\Microsoft\\Protect").c_str());
    system(XorStr("RMDIR /S /Q C:\\Users\\%username%\\AppData\\Local\\VirtalStore").c_str());
    system(XorStr("RMDIR /S /Q C:\\Users\\%username%\\AppData\\Local\\UnrealEngine").c_str());
    system(XorStr("RMDIR /S /Q C:\\Users\\%username%\\AppData\\Local\\Temp").c_str());
    system(XorStr("RMDIR /S /Q C:\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.Windows.Search_cw5n1h2txyewy\\LocalState\\DeviceSearchCache").c_str());
    system(XorStr("RMDIR /S /Q C:\\Users\\%username%\\AppData\\Local\\Packages\\Microsoft.Windows.Search_cw5n1h2txyewy\\LocalState\\ConstraintIndex").c_str());
    system(XorStr("RMDIR /S /Q C:\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\WebCache").c_str());
    system(XorStr("RMDIR /S /Q C:\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\WER").c_str());
    system(XorStr("RMDIR /S /Q C:\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCookies").c_str());
    system(XorStr("RMDIR /S /Q C:\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\INetCache").c_str());
    system(XorStr("RMDIR /S /Q C:\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\IEDownloadHistory").c_str());
    system(XorStr("RMDIR /S /Q C:\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\IECompataCache").c_str());
    system(XorStr("RMDIR /S /Q C:\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\IECompatCache").c_str());
    system(XorStr("RMDIR /S /Q C:\\Users\\%username%\\AppData\\Local\\Microsoft\\Windows\\Caches").c_str());
    system(XorStr("RMDIR /S /Q C:\\Users\\%username%\\AppData\\Local\\Microsoft\\Terminal Server Client\\Cache").c_str());
    system(XorStr("RMDIR /S /Q C:\\Users\\%username%\\AppData\\Local\\Microsoft\\Internet Explorer\\CacheStorage").c_str());
    system(XorStr("RMDIR /S /Q C:\\Users\\%username%\\AppData\\Local\\D3DSCache").c_str());
    system(XorStr("RMDIR /S /Q C:\\Users\\%username%\\AppData\\Local\\CrashDmps").c_str());
    system(XorStr("RMDIR /S /Q C:\\Users\\%username%\\AppData\\Local\\ConnectedDevicesPlatform").c_str());
    system(XorStr("RMDIR /S /Q C:\\ProgramData\\NVIDIA Corporation\\NV_Cache").c_str());
    system(XorStr("RMDIR /S /Q C:\\ProgramData\\NVIDIA Corporation\\Drs\\nvAppTimestamps").c_str());
    system(XorStr("RMDIR /S /Q C:\\ProgramData\\Microsoft\\Windows\\WER").c_str());
    system(XorStr("RMDIR /S /Q C:\\PerfLogs").c_str());
    system(XorStr("RMDIR /S /Q C:\\Documents and Settings\\%username%\\AppData\\Local\\Application Data\\Microsoft\\Windows\\Caches").c_str());
    system(XorStr("RMDIR /S /Q %localappdata%\\Microsoft\\Windows\\Caches").c_str());
    system(XorStr("del /s /q C:\\Windows\\system(XorStr32\\restore\\MachineGuid.txt").c_str());
    system(XorStr("del /s /q %system(XorStrdrive%\\Users\\Public\\Libraries\\collection.dat").c_str());
    system(XorStr("RMDIR /S /Q %system(XorStrdrive%\\system(XorStr Volume Information\\IndexerVolumeGuid").c_str());
    system(XorStr("del /s /q %system(XorStrdrive%\\system(XorStr Volume Information\\WPSettings.dat").c_str());
    system(XorStr("del /s /q %system(XorStrdrive%\\system(XorStr Volume Information\\tracking.log").c_str());
    system(XorStr("RMDIR /S /Q %system(XorStrdrive%\\ProgramData\\Microsoft\\Windows\\WER").c_str());
    system(XorStr("RMDIR /S /Q %system(XorStrdrive%\\Users\\Public\\Shared Files").c_str());
    system(XorStr("del /s /q %system(XorStrdrive%\\Windows\\INF\\setpapi.dev.log").c_str());
    system(XorStr("del /s /q %system(XorStrdrive%\\Windows\\INF\\setpapi.setp.log").c_str());
    system(XorStr("RMDIR /S /Q %system(XorStrdrive%\\Users\\Public\\Libraries").c_str());
    system(XorStr("RMDIR /S /Q %system(XorStrdrive%\\MSOCache").c_str());
    system(XorStr("del /s /q %system(XorStrdrive%\\ProgramData\\ntser.pol").c_str());
    system(XorStr("del /s /q %system(XorStrdrive%\\Users\\Defalt\\NTSER.DAT").c_str());
    system(XorStr("del /s /q %system(XorStrdrive%\\Recovery\\ntser.sys").c_str());
    system(XorStr("del /s /q %system(XorStrdrive%\\desktop.ini").c_str());
    system(XorStr("netsh winsock reset").c_str());

    system(XorStr("cls").c_str());

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
    std::cout << XorStr("\n  [").c_str();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
    std::cout << XorStr("+").c_str();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
    std::cout << XorStr("] ").c_str();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
    std::cout << XorStr("DONE! PRESS ANY KEY TO EXIT").c_str();
    std::cin.get();

    system(XorStr("cls").c_str());
    exit(0);
}
