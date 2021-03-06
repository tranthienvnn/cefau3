#pragma once

#include <SDKDDKVer.h>

#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <string>
#include <iostream>
#include "include\cef_app.h"
#include "include\cef_base.h"
#include "include\cef_client.h"
#include "include\cef_v8.h"
#include "include\base\cef_bind.h"
#include "include\views\cef_window.h"
#include "util.h"

using namespace std;
#define QUITAPPMESSAGE 0xDEAD

//typedef void*(__stdcall * Au3Func)();

#include "AutoItX3_DLL.h"
#include "cefau3_app.h"
#include "cefau3_handler.h"
#include "cefau3_extension.h"
#include "cefau3_references.h"