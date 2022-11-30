#pragma once

// ReSharper disable CppClangTidyCppcoreguidelinesMacroUsage
#define RFU_VERSION "5.4.5"
#define RFU_GITHUB_REPO "LewisTehMinerz/RFU"
#define RFU_REGKEY "RFU"
// ReSharper enable CppClangTidyCppcoreguidelinesMacroUsage

bool CheckForUpdates();
bool RunsOnStartup();
void SetRunOnStartup(bool shouldRun);
void SetFPSCapExternal(double value);