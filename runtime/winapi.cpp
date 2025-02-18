// Windows API wrapper
// Copyright (C) Florian Negele

// This file is part of the Eigen Compiler Suite.

// The ECS is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// The ECS is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of the GNU General Public License version 3,
// the copyright holder grants you additional permissions to use
// this file as described in the ECS Runtime Support Exception.

// You should have received a copy of the GNU General Public License
// and a copy of the ECS Runtime Support Exception along with
// the ECS.  If not, see <https://www.gnu.org/licenses/>.

#include "winlib.hpp"

LIBRARY (kernel32, "kernel32.dll")
FUNCTION (kernel32, AddAtomA, 1)
FUNCTION (kernel32, AddAtomW, 1)
FUNCTION (kernel32, AddConsoleAliasA, 3)
FUNCTION (kernel32, AddConsoleAliasB, 3)
FUNCTION (kernel32, AddVectoredContinueHandler, 2)
FUNCTION (kernel32, AddVectoredExceptionHandler, 2)
FUNCTION (kernel32, AllocConsole, 0)
FUNCTION (kernel32, AttachConsole, 1)
FUNCTION (kernel32, Beep, 2)
FUNCTION (kernel32, BuildCommDCBA, 2)
FUNCTION (kernel32, BuildCommDCBAndTimeoutsA, 3)
FUNCTION (kernel32, BuildCommDCBAndTimeoutsW, 3)
FUNCTION (kernel32, BuildCommDCBW, 2)
FUNCTION (kernel32, CallNamedPipeA, 7)
FUNCTION (kernel32, CallNamedPipeW, 7)
FUNCTION (kernel32, ClearCommBreak, 1)
FUNCTION (kernel32, ClearCommError, 3)
FUNCTION (kernel32, CloseHandle, 1)
FUNCTION (kernel32, CommConfigDialogA, 3)
FUNCTION (kernel32, CommConfigDialogW, 3)
FUNCTION (kernel32, CompareFileTime, 2)
FUNCTION (kernel32, ConnectNamedPipe, 2)
FUNCTION (kernel32, ConvertAuxiliaryCounterToPerformanceCounter, 3)
FUNCTION (kernel32, ConvertFiberToThread, 0)
FUNCTION (kernel32, ConvertPerformanceCounterToAuxiliaryCounter, 3)
FUNCTION (kernel32, ConvertThreadToFiber, 1)
FUNCTION (kernel32, ConvertThreadToFiberEx, 2)
FUNCTION (kernel32, CreateConsoleScreenBuffer, 5)
FUNCTION (kernel32, CreateDirectoryA, 2)
FUNCTION (kernel32, CreateEventA, 4)
FUNCTION (kernel32, CreateEventW, 4)
FUNCTION (kernel32, CreateFiber, 3)
FUNCTION (kernel32, CreateFiberEx, 5)
FUNCTION (kernel32, CreateFileA, 7)
FUNCTION (kernel32, CreateFileW, 7)
FUNCTION (kernel32, CreateMailslotA, 4)
FUNCTION (kernel32, CreateMailslotW, 4)
FUNCTION (kernel32, CreateMutexA, 3)
FUNCTION (kernel32, CreateMutexW, 3)
FUNCTION (kernel32, CreateNamedPipeA, 8)
FUNCTION (kernel32, CreateNamedPipeW, 8)
FUNCTION (kernel32, CreatePipe, 4)
FUNCTION (kernel32, CreateProcessA, 10)
FUNCTION (kernel32, CreateProcessW, 10)
FUNCTION (kernel32, CreateSemaphoreA, 4)
FUNCTION (kernel32, CreateSemaphoreW, 4)
FUNCTION (kernel32, CreateThread, 6)
FUNCTION (kernel32, DeleteAtom, 1)
FUNCTION (kernel32, DeleteCriticalSection, 1)
FUNCTION (kernel32, DeleteFiber, 1)
FUNCTION (kernel32, DeleteFileA, 1)
FUNCTION (kernel32, DeleteFileW, 1)
FUNCTION (kernel32, DisconnectNamedPipe, 1)
FUNCTION (kernel32, DosDateTimeToFileTime, 3)
FUNCTION (kernel32, EnterCriticalSection, 1)
FUNCTION (kernel32, EnumDynamicTimeZoneInformation, 2)
FUNCTION (kernel32, EscapeCommFunction, 2)
FUNCTION (kernel32, ExitProcess, 1)
FUNCTION (kernel32, ExitThread, 1)
FUNCTION (kernel32, FatalAppExitA, 2)
FUNCTION (kernel32, FatalAppExitW, 2)
FUNCTION (kernel32, FileTimeToDosDateTime, 3)
FUNCTION (kernel32, FileTimeToLocalFileTime, 2)
FUNCTION (kernel32, FileTimeToSystemTime, 2)
FUNCTION (kernel32, FillConsoleOutputAttribute, 5)
FUNCTION (kernel32, FillConsoleOutputCharacterA, 5)
FUNCTION (kernel32, FillConsoleOutputCharacterW, 5)
FUNCTION (kernel32, FindAtomA, 1)
FUNCTION (kernel32, FindAtomW, 1)
FUNCTION (kernel32, FindClose, 1)
FUNCTION (kernel32, FindFirstFileA, 2)
FUNCTION (kernel32, FindNextFileA, 2)
FUNCTION (kernel32, FlushConsoleInputBuffer, 1)
FUNCTION (kernel32, FlushFileBuffers, 1)
FUNCTION (kernel32, FreeConsole, 0)
FUNCTION (kernel32, FreeLibrary, 1)
FUNCTION (kernel32, GenerateConsoleCtrlEvent, 2)
FUNCTION (kernel32, GetAtomNameA, 3)
FUNCTION (kernel32, GetAtomNameW, 3)
FUNCTION (kernel32, GetCommandLineA, 0)
FUNCTION (kernel32, GetCommandLineW, 0)
FUNCTION (kernel32, GetCommConfig, 3)
FUNCTION (kernel32, GetCommMask, 2)
FUNCTION (kernel32, GetCommModemStatus, 2)
FUNCTION (kernel32, GetCommProperties, 2)
FUNCTION (kernel32, GetCommState, 2)
FUNCTION (kernel32, GetCommTimeouts, 2)
FUNCTION (kernel32, GetConsoleAliasA, 4)
FUNCTION (kernel32, GetConsoleAliasesA, 3)
FUNCTION (kernel32, GetConsoleAliasesLengthA, 1)
FUNCTION (kernel32, GetConsoleAliasesLengthW, 1)
FUNCTION (kernel32, GetConsoleAliasesW, 3)
FUNCTION (kernel32, GetConsoleAliasExesA, 2)
FUNCTION (kernel32, GetConsoleAliasExesLength, 0)
FUNCTION (kernel32, GetConsoleAliasExesW, 2)
FUNCTION (kernel32, GetConsoleAliasW, 4)
FUNCTION (kernel32, GetConsoleCP, 0)
FUNCTION (kernel32, GetConsoleCursorInfo, 2)
FUNCTION (kernel32, GetConsoleDisplayMode, 1)
FUNCTION (kernel32, GetConsoleFontSize, 2)
FUNCTION (kernel32, GetConsoleHistoryInfo, 1)
FUNCTION (kernel32, GetConsoleMode, 2)
FUNCTION (kernel32, GetConsoleOriginalTitleA, 2)
FUNCTION (kernel32, GetConsoleOriginalTitleW, 2)
FUNCTION (kernel32, GetConsoleOutputCP, 0)
FUNCTION (kernel32, GetConsoleProcessList, 2)
FUNCTION (kernel32, GetConsoleScreenBufferInfo, 2)
FUNCTION (kernel32, GetConsoleScreenBufferInfoEx, 2)
FUNCTION (kernel32, GetConsoleSelectionInfo, 1)
FUNCTION (kernel32, GetConsoleTitleA, 2)
FUNCTION (kernel32, GetConsoleTitleW, 2)
FUNCTION (kernel32, GetConsoleWindow, 0)
FUNCTION (kernel32, GetCurrentConsoleFont, 3)
FUNCTION (kernel32, GetCurrentConsoleFontEx, 3)
FUNCTION (kernel32, GetCurrentDirectoryA, 2)
FUNCTION (kernel32, GetCurrentDirectoryW, 2)
FUNCTION (kernel32, GetCurrentProcess, 0)
FUNCTION (kernel32, GetCurrentProcessId, 0)
FUNCTION (kernel32, GetCurrentProcessorNumber, 0)
FUNCTION (kernel32, GetCurrentThread, 0)
FUNCTION (kernel32, GetCurrentThreadId, 0)
FUNCTION (kernel32, GetDefaultCommConfigA, 3)
FUNCTION (kernel32, GetDefaultCommConfigW, 3)
FUNCTION (kernel32, GetDynamicTimeZoneInformation, 1)
FUNCTION (kernel32, GetDynamicTimeZoneInformationEffectiveYears, 3)
FUNCTION (kernel32, GetEnvironmentVariableA, 3)
FUNCTION (kernel32, GetEnvironmentVariableW, 3)
FUNCTION (kernel32, GetExitCodeProcess, 2)
FUNCTION (kernel32, GetExitCodeThread, 2)
FUNCTION (kernel32, GetFileAttributesA, 1)
FUNCTION (kernel32, GetFileSize, 2)
FUNCTION (kernel32, GetFileTime, 4)
FUNCTION (kernel32, GetLargestConsoleWindowSize, 1)
FUNCTION (kernel32, GetLastError, 0)
FUNCTION (kernel32, GetLocalTime, 1)
FUNCTION (kernel32, GetMailslotInfo, 5)
FUNCTION (kernel32, GetModuleFileNameA, 3)
FUNCTION (kernel32, GetModuleFileNameW, 3)
FUNCTION (kernel32, GetModuleHandleA, 1)
FUNCTION (kernel32, GetModuleHandleW, 1)
FUNCTION (kernel32, GetNamedPipeClientComputerNameA, 3)
FUNCTION (kernel32, GetNamedPipeClientComputerNameW, 3)
FUNCTION (kernel32, GetNamedPipeClientProcessId, 2)
FUNCTION (kernel32, GetNamedPipeClientSessionId, 2)
FUNCTION (kernel32, GetNamedPipeHandleStateA, 7)
FUNCTION (kernel32, GetNamedPipeHandleStateW, 7)
FUNCTION (kernel32, GetNamedPipeInfo, 5)
FUNCTION (kernel32, GetNamedPipeServerProcessId, 2)
FUNCTION (kernel32, GetNamedPipeServerSessionId, 2)
FUNCTION (kernel32, GetNativeSystemInfo, 1)
FUNCTION (kernel32, GetNumberOfConsoleInputEvents, 2)
FUNCTION (kernel32, GetNumberOfConsoleMouseButtons, 1)
FUNCTION (kernel32, GetPriorityClass, 1)
FUNCTION (kernel32, GetProcAddress, 2)
FUNCTION (kernel32, GetProcessAffinityMask, 3)
FUNCTION (kernel32, GetProcessHeap, 0)
FUNCTION (kernel32, GetProcessId, 1)
FUNCTION (kernel32, GetStdHandle, 1)
FUNCTION (kernel32, GetSystemInfo, 1)
FUNCTION (kernel32, GetSystemRegistryQuota, 2)
FUNCTION (kernel32, GetSystemTime, 1)
FUNCTION (kernel32, GetSystemTimeAdjustment, 3)
FUNCTION (kernel32, GetSystemTimeAsFileTime, 1)
FUNCTION (kernel32, GetSystemTimes, 3)
FUNCTION (kernel32, GetThreadId, 1)
FUNCTION (kernel32, GetTickCount, 0)
FUNCTION (kernel32, GetTickCount64, 0)
FUNCTION (kernel32, GetTimeFormatA, 6)
FUNCTION (kernel32, GetTimeFormatW, 6)
FUNCTION (kernel32, GetTimeZoneInformation, 1)
FUNCTION (kernel32, GetTimeZoneInformationForYear, 3)
FUNCTION (kernel32, GlobalAddAtomA, 1)
FUNCTION (kernel32, GlobalAddAtomW, 1)
FUNCTION (kernel32, GlobalAlloc, 2)
FUNCTION (kernel32, GlobalDeleteAtom, 1)
FUNCTION (kernel32, GlobalFindAtomA, 1)
FUNCTION (kernel32, GlobalFindAtomW, 1)
FUNCTION (kernel32, GlobalFree, 1)
FUNCTION (kernel32, GlobalGetAtomNameA, 3)
FUNCTION (kernel32, GlobalGetAtomNameW, 3)
FUNCTION (kernel32, GlobalHandle, 1)
FUNCTION (kernel32, GlobalLock, 1)
FUNCTION (kernel32, GlobalReAlloc, 3)
FUNCTION (kernel32, GlobalSize, 1)
FUNCTION (kernel32, GlobalUnlock, 1)
FUNCTION (kernel32, HeapAlloc, 3)
FUNCTION (kernel32, HeapCompact, 2)
FUNCTION (kernel32, HeapCreate, 3)
FUNCTION (kernel32, HeapDestroy, 1)
FUNCTION (kernel32, HeapFree, 3)
FUNCTION (kernel32, HeapLock, 1)
FUNCTION (kernel32, HeapReAlloc, 4)
FUNCTION (kernel32, HeapSize, 3)
FUNCTION (kernel32, HeapUnlock, 1)
FUNCTION (kernel32, HeapValidate, 3)
FUNCTION (kernel32, HeapWalk, 2)
FUNCTION (kernel32, ImpersonateNamedPipeClient, 1)
FUNCTION (kernel32, InitAtomTable, 1)
FUNCTION (kernel32, InitializeConditionVariable, 1)
FUNCTION (kernel32, InitializeCriticalSection, 1)
FUNCTION (kernel32, InitializeCriticalSectionAndSpinCount, 2)
FUNCTION (kernel32, InitializeCriticalSectionEx, 3)
FUNCTION (kernel32, InitOnceBeginInitialize, 4)
FUNCTION (kernel32, InitOnceComplete, 3)
FUNCTION (kernel32, InitOnceInitialize, 1)
FUNCTION (kernel32, IsThreadAFiber, 0)
FUNCTION (kernel32, LeaveCriticalSection, 1)
FUNCTION (kernel32, LoadLibraryA, 1)
FUNCTION (kernel32, LoadLibraryW, 1)
FUNCTION (kernel32, LocalFileTimeToFileTime, 2)
FUNCTION (kernel32, MoveFileA, 2)
FUNCTION (kernel32, MoveFileW, 2)
FUNCTION (kernel32, OpenEventA, 3)
FUNCTION (kernel32, OpenEventW, 3)
FUNCTION (kernel32, PeekNamedPipe, 6)
FUNCTION (kernel32, PulseEvent, 1)
FUNCTION (kernel32, PurgeComm, 2)
FUNCTION (kernel32, QueryAuxiliaryCounterFrequency, 1)
FUNCTION (kernel32, QueryInterruptTime, 1)
FUNCTION (kernel32, QueryInterruptTimePrecise, 1)
FUNCTION (kernel32, QueryPerformanceCounter, 1)
FUNCTION (kernel32, QueryPerformanceFrequency, 1)
FUNCTION (kernel32, QueryUnbiasedInterruptTime, 1)
FUNCTION (kernel32, QueryUnbiasedInterruptTimePrecise, 1)
FUNCTION (kernel32, ReadFile, 5)
FUNCTION (kernel32, ReleaseMutex, 1)
FUNCTION (kernel32, ReleaseSemaphore, 3)
FUNCTION (kernel32, RemoveDirectoryA, 1)
FUNCTION (kernel32, RemoveVectoredContinueHandler, 1)
FUNCTION (kernel32, RemoveVectoredExceptionHandler, 1)
FUNCTION (kernel32, ResetEvent, 1)
FUNCTION (kernel32, ResumeThread, 1)
FUNCTION (kernel32, SetCommBreak, 1)
FUNCTION (kernel32, SetCommConfig, 3)
FUNCTION (kernel32, SetCommMask, 2)
FUNCTION (kernel32, SetCommState, 2)
FUNCTION (kernel32, SetCommTimeouts, 2)
FUNCTION (kernel32, SetConsoleCP, 1)
FUNCTION (kernel32, SetConsoleMode, 2)
FUNCTION (kernel32, SetConsoleOutputCP, 1)
FUNCTION (kernel32, SetConsoleTextAttribute, 2)
FUNCTION (kernel32, SetCriticalSectionSpinCount, 2)
FUNCTION (kernel32, SetCurrentDirectoryA, 1)
FUNCTION (kernel32, SetDefaultCommConfigA, 3)
FUNCTION (kernel32, SetDefaultCommConfigW, 3)
FUNCTION (kernel32, SetDynamicTimeZoneInformation, 1)
FUNCTION (kernel32, SetEnvironmentVariableA, 2)
FUNCTION (kernel32, SetEnvironmentVariableW, 2)
FUNCTION (kernel32, SetEndOfFile, 1)
FUNCTION (kernel32, SetEvent, 1)
FUNCTION (kernel32, SetFileAttributes, 2)
FUNCTION (kernel32, SetFilePointer, 4)
FUNCTION (kernel32, SetFileTime, 2)
FUNCTION (kernel32, SetLocalTime, 1)
FUNCTION (kernel32, SetMailslotInfo, 2)
FUNCTION (kernel32, SetNamedPipeHandleState, 4)
FUNCTION (kernel32, SetPriorityClass, 2)
FUNCTION (kernel32, SetStdHandle, 2)
FUNCTION (kernel32, SetSystemTime, 1)
FUNCTION (kernel32, SetSystemTimeAdjustment, 2)
FUNCTION (kernel32, SetThreadAffinityMask, 2)
FUNCTION (kernel32, SetTimeZoneInformation, 1)
FUNCTION (kernel32, SetupComm, 3)
FUNCTION (kernel32, Sleep, 1)
FUNCTION (kernel32, SleepConditionVariableCS, 3)
FUNCTION (kernel32, SwitchToFiber, 1)
FUNCTION (kernel32, SwitchToThread, 0)
FUNCTION (kernel32, SystemTimeToFileTime, 2)
FUNCTION (kernel32, SystemTimeToTzSpecificLocalTime, 3)
FUNCTION (kernel32, SystemTimeToTzSpecificLocalTimeEx, 3)
FUNCTION (kernel32, TlsAlloc, 0)
FUNCTION (kernel32, TlsFree, 1)
FUNCTION (kernel32, TlsGetValue, 1)
FUNCTION (kernel32, TlsSetValue, 2)
FUNCTION (kernel32, TransactNamedPipe, 7)
FUNCTION (kernel32, TransmitCommChar, 2)
FUNCTION (kernel32, TryEnterCriticalSection, 1)
FUNCTION (kernel32, TzSpecificLocalTimeToSystemTime, 3)
FUNCTION (kernel32, TzSpecificLocalTimeToSystemTimeEx, 3)
FUNCTION (kernel32, WaitCommEvent, 3)
FUNCTION (kernel32, WaitForMultipleObjects, 4)
FUNCTION (kernel32, WaitForSingleObject, 2)
FUNCTION (kernel32, WaitNamedPipeA, 2)
FUNCTION (kernel32, WaitNamedPipeW, 2)
FUNCTION (kernel32, WakeAllConditionVariable, 1)
FUNCTION (kernel32, WakeConditionVariable, 1)
FUNCTION (kernel32, WriteFile, 5)

LIBRARY (user32, "user32.dll")
FUNCTION (user32, AdjustWindowRect, 3)
FUNCTION (user32, BeginPaint, 2)
FUNCTION (user32, ChangeDisplaySettingsA, 2)
FUNCTION (user32, ChangeDisplaySettingsExA, 5)
FUNCTION (user32, ChangeDisplaySettingsExW, 5)
FUNCTION (user32, ChangeDisplaySettingsW, 2)
FUNCTION (user32, CheckMenuItem, 3)
FUNCTION (user32, CheckMenuRadioItem, 5)
FUNCTION (user32, ClientToScreen, 2)
FUNCTION (user32, CloseClipboard, 0)
FUNCTION (user32, CopyRect, 2)
FUNCTION (user32, CreateWindowExA, 12)
FUNCTION (user32, CreateWindowExW, 12)
FUNCTION (user32, DefWindowProcA, 4)
FUNCTION (user32, DefWindowProcW, 4)
FUNCTION (user32, DispatchMessageA, 1)
FUNCTION (user32, DispatchMessageW, 1)
FUNCTION (user32, DrawAnimatedRects, 4)
FUNCTION (user32, DrawCaption, 4)
FUNCTION (user32, DrawEdge, 4)
FUNCTION (user32, DrawFocusRect, 2)
FUNCTION (user32, DrawFrameControl, 4)
FUNCTION (user32, DrawMenuBar, 1)
FUNCTION (user32, DrawStateA, 10)
FUNCTION (user32, DrawStateW, 10)
FUNCTION (user32, DrawTextA, 5)
FUNCTION (user32, DrawTextExA, 6)
FUNCTION (user32, DrawTextExW, 6)
FUNCTION (user32, DrawTextW, 5)
FUNCTION (user32, EmptyClipboard, 0)
FUNCTION (user32, EnableMenuItem, 3)
FUNCTION (user32, EndDialog, 2)
FUNCTION (user32, EndPaint, 2)
FUNCTION (user32, EnumDisplayDevicesA, 4)
FUNCTION (user32, EnumDisplayDevicesW, 4)
FUNCTION (user32, EnumDisplayMonitors, 4)
FUNCTION (user32, EnumDisplaySettingsA, 3)
FUNCTION (user32, EnumDisplaySettingsExA, 4)
FUNCTION (user32, EnumDisplaySettingsExW, 4)
FUNCTION (user32, EnumDisplaySettingsW, 3)
FUNCTION (user32, EqualRect, 2)
FUNCTION (user32, ExcludeUpdateRgn, 2)
FUNCTION (user32, FillRect, 3)
FUNCTION (user32, GetClassInfoA, 3)
FUNCTION (user32, GetClassInfoExA, 3)
FUNCTION (user32, GetClassInfoExW, 3)
FUNCTION (user32, GetClassInfoW, 3)
FUNCTION (user32, GetClassLongA, 2)
FUNCTION (user32, GetClassLongPtrA, 2)
FUNCTION (user32, GetClassLongPtrW, 2)
FUNCTION (user32, GetClassLongW, 2)
FUNCTION (user32, GetClassNameA, 3)
FUNCTION (user32, GetClassNameW, 3)
FUNCTION (user32, GetClassWord, 2)
FUNCTION (user32, GetClipboardData, 1)
FUNCTION (user32, GetDC, 1)
FUNCTION (user32, GetDCEx, 3)
FUNCTION (user32, GetDisplayAutoRotationPreferences, 1)
FUNCTION (user32, GetDlgItem, 2)
FUNCTION (user32, GetForegroundWindow, 0)
FUNCTION (user32, GetMenu, 1)
FUNCTION (user32, GetMenuItemInfoA, 4)
FUNCTION (user32, GetMenuItemInfoW, 4)
FUNCTION (user32, GetMessageA, 4)
FUNCTION (user32, GetMessageW, 4)
FUNCTION (user32, GetMonitorInfoA, 2)
FUNCTION (user32, GetMonitorInfoW, 2)
FUNCTION (user32, GetTabbedTextExtentA, 5)
FUNCTION (user32, GetTabbedTextExtentW, 5)
FUNCTION (user32, GetUpdateRect, 3)
FUNCTION (user32, GetUpdateRgn, 3)
FUNCTION (user32, GetWindow, 2)
FUNCTION (user32, GetWindowDC, 1)
FUNCTION (user32, GetWindowLongA, 2)
FUNCTION (user32, GetWindowLongPtrA, 2)
FUNCTION (user32, GetWindowLongPtrW, 2)
FUNCTION (user32, GetWindowLongW, 2)
FUNCTION (user32, GetWindowRect, 2)
FUNCTION (user32, GetWindowRgn, 2)
FUNCTION (user32, GetWindowRgnBox, 2)
FUNCTION (user32, GrayStringA, 9)
FUNCTION (user32, GrayStringW, 9)
FUNCTION (user32, InflateRect, 3)
FUNCTION (user32, InsertMenuItemA, 4)
FUNCTION (user32, InsertMenuItemW, 4)
FUNCTION (user32, IntersectRect, 3)
FUNCTION (user32, InvalidateRect, 3)
FUNCTION (user32, InvalidateRgn, 3)
FUNCTION (user32, IsRectEmpty, 1)
FUNCTION (user32, KillTimer, 2)
FUNCTION (user32, LoadCursorA, 2)
FUNCTION (user32, LoadCursorW, 2)
FUNCTION (user32, LoadIconA, 2)
FUNCTION (user32, LoadIconW, 2)
FUNCTION (user32, LockWindowUpdate, 1)
FUNCTION (user32, MapWindowPoints, 4)
FUNCTION (user32, MessageBeep, 1)
FUNCTION (user32, MessageBoxA, 4)
FUNCTION (user32, MessageBoxExA, 5)
FUNCTION (user32, MessageBoxExW, 5)
FUNCTION (user32, MessageBoxW, 4)
FUNCTION (user32, MonitorFromPoint, 2)
FUNCTION (user32, MonitorFromRect, 2)
FUNCTION (user32, MonitorFromWindow, 2)
FUNCTION (user32, mouse_event, 5)
FUNCTION (user32, OffsetRect, 3)
FUNCTION (user32, OpenClipboard, 1)
FUNCTION (user32, PaintDesktop, 1)
FUNCTION (user32, PostQuitMessage, 1)
FUNCTION (user32, PtInRect, 3)
FUNCTION (user32, RedrawWindow, 4)
FUNCTION (user32, RegisterClassA, 1)
FUNCTION (user32, RegisterClassExA, 1)
FUNCTION (user32, RegisterClassExW, 1)
FUNCTION (user32, RegisterClassW, 1)
FUNCTION (user32, ReleaseCapture, 0)
FUNCTION (user32, ReleaseDC, 2)
FUNCTION (user32, ScreenToClient, 2)
FUNCTION (user32, SendMessageA, 4)
FUNCTION (user32, SendMessageW, 4)
FUNCTION (user32, SetCapture, 1)
FUNCTION (user32, SetClassLongA, 3)
FUNCTION (user32, SetClassLongPtrA, 3)
FUNCTION (user32, SetClassLongPtrW, 3)
FUNCTION (user32, SetClassLongW, 3)
FUNCTION (user32, SetClassWord, 3)
FUNCTION (user32, SetClipboardData, 2)
FUNCTION (user32, SetCoalescableTimer, 5)
FUNCTION (user32, SetDisplayAutoRotationPreferences, 1)
FUNCTION (user32, SetMenuItemInfoA, 4)
FUNCTION (user32, SetMenuItemInfoW, 4)
FUNCTION (user32, SetRect, 5)
FUNCTION (user32, SetRectEmpty, 1)
FUNCTION (user32, SetTimer, 4)
FUNCTION (user32, SetWindowLongA, 3)
FUNCTION (user32, SetWindowLongPtrA, 3)
FUNCTION (user32, SetWindowLongPtrW, 3)
FUNCTION (user32, SetWindowLongW, 3)
FUNCTION (user32, SetWindowPos, 7)
FUNCTION (user32, SetWindowRgn, 3)
FUNCTION (user32, ShowWindow, 2)
FUNCTION (user32, SubtractRect, 3)
FUNCTION (user32, TabbedTextOutA, 8)
FUNCTION (user32, TabbedTextOutW, 8)
FUNCTION (user32, TranslateMessage, 1)
FUNCTION (user32, UnionRect, 3)
FUNCTION (user32, UnregisterClassA, 2)
FUNCTION (user32, UnregisterClassW, 2)
FUNCTION (user32, UpdateWindow, 1)
FUNCTION (user32, ValidateRect, 2)
FUNCTION (user32, ValidateRgn, 2)
FUNCTION (user32, WindowFromDC, 1)

LIBRARY (gdi32, "gdi32.dll")
FUNCTION (gdi32, AbortPath, 1)
FUNCTION (gdi32, AddFontMemResourceEx, 4)
FUNCTION (gdi32, AddFontResourceA, 1)
FUNCTION (gdi32, AddFontResourceExA, 3)
FUNCTION (gdi32, AddFontResourceExW, 3)
FUNCTION (gdi32, AddFontResourceW, 1)
FUNCTION (gdi32, AlphaBlend, 11)
FUNCTION (gdi32, AngleArc, 6)
FUNCTION (gdi32, AnimatePalette, 4)
FUNCTION (gdi32, Arc, 9)
FUNCTION (gdi32, ArcTo, 9)
FUNCTION (gdi32, BeginPath, 1)
FUNCTION (gdi32, BitBlt, 9)
FUNCTION (gdi32, CancelDC, 1)
FUNCTION (gdi32, Chord, 9)
FUNCTION (gdi32, CloseFigure, 1)
FUNCTION (gdi32, CombineRgn, 4)
FUNCTION (gdi32, CombineTransform, 3)
FUNCTION (gdi32, CreateBitmap, 5)
FUNCTION (gdi32, CreateBitmapIndirect, 1)
FUNCTION (gdi32, CreateBrushIndirect, 1)
FUNCTION (gdi32, CreateCompatibleBitmap, 3)
FUNCTION (gdi32, CreateCompatibleDC, 1)
FUNCTION (gdi32, CreateDCA, 4)
FUNCTION (gdi32, CreateDCW, 4)
FUNCTION (gdi32, CreateDIBitmap, 6)
FUNCTION (gdi32, CreateDIBPatternBrushPt, 2)
FUNCTION (gdi32, CreateDIBSection, 6)
FUNCTION (gdi32, CreateEllipticRgn, 4)
FUNCTION (gdi32, CreateEllipticRgnIndirect, 1)
FUNCTION (gdi32, CreateFontA, 14)
FUNCTION (gdi32, CreateFontIndirectA, 1)
FUNCTION (gdi32, CreateFontIndirectExA, 1)
FUNCTION (gdi32, CreateFontIndirectExW, 1)
FUNCTION (gdi32, CreateFontIndirectW, 1)
FUNCTION (gdi32, CreateFontW, 14)
FUNCTION (gdi32, CreateHalftonePalette, 1)
FUNCTION (gdi32, CreateHatchBrush, 2)
FUNCTION (gdi32, CreateICA, 4)
FUNCTION (gdi32, CreateICW, 4)
FUNCTION (gdi32, CreatePalette, 1)
FUNCTION (gdi32, CreatePatternBrush, 1)
FUNCTION (gdi32, CreatePen, 3)
FUNCTION (gdi32, CreatePenIndirect, 1)
FUNCTION (gdi32, CreatePolygonRgn, 3)
FUNCTION (gdi32, CreatePolyPolygonRgn, 4)
FUNCTION (gdi32, CreateRectRgn, 4)
FUNCTION (gdi32, CreateRectRgnIndirect, 1)
FUNCTION (gdi32, CreateRoundRectRgn, 6)
FUNCTION (gdi32, CreateSolidBrush, 1)
FUNCTION (gdi32, DeleteDC, 1)
FUNCTION (gdi32, DeleteObject, 1)
FUNCTION (gdi32, DeviceCapabilitiesA, 5)
FUNCTION (gdi32, DeviceCapabilitiesW, 5)
FUNCTION (gdi32, DPtoLP, 3)
FUNCTION (gdi32, DrawEscape, 4)
FUNCTION (gdi32, Ellipse, 5)
FUNCTION (gdi32, EndPath, 1)
FUNCTION (gdi32, EnumFontFamiliesExA, 5)
FUNCTION (gdi32, EnumFontFamiliesExW, 5)
FUNCTION (gdi32, EnumObjects, 4)
FUNCTION (gdi32, EqualRgn, 2)
FUNCTION (gdi32, ExcludeClipRect, 5)
FUNCTION (gdi32, ExtCreatePen, 5)
FUNCTION (gdi32, ExtCreateRegion, 3)
FUNCTION (gdi32, ExtFloodFill, 5)
FUNCTION (gdi32, ExtSelectClipRgn, 3)
FUNCTION (gdi32, ExtTextOutA, 8)
FUNCTION (gdi32, ExtTextOutW, 8)
FUNCTION (gdi32, FillPath, 1)
FUNCTION (gdi32, FillRgn, 3)
FUNCTION (gdi32, FlattenPath, 1)
FUNCTION (gdi32, FrameRect, 3)
FUNCTION (gdi32, FrameRgn, 5)
FUNCTION (gdi32, GdiFlush, 0)
FUNCTION (gdi32, GdiGetBatchLimit, 0)
FUNCTION (gdi32, GdiSetBatchLimit, 1)
FUNCTION (gdi32, GetArcDirection, 1)
FUNCTION (gdi32, GetAspectRatioFilterEx, 2)
FUNCTION (gdi32, GetBitmapDimensionEx, 2)
FUNCTION (gdi32, GetBkColor, 1)
FUNCTION (gdi32, GetBkMode, 1)
FUNCTION (gdi32, GetBoundsRect, 3)
FUNCTION (gdi32, GetBrushOrgEx, 2)
FUNCTION (gdi32, GetCharABCWidthsA, 4)
FUNCTION (gdi32, GetCharABCWidthsFloatA, 4)
FUNCTION (gdi32, GetCharABCWidthsFloatW, 4)
FUNCTION (gdi32, GetCharABCWidthsI, 5)
FUNCTION (gdi32, GetCharABCWidthsW, 4)
FUNCTION (gdi32, GetCharacterPlacementA, 6)
FUNCTION (gdi32, GetCharacterPlacementW, 6)
FUNCTION (gdi32, GetCharWidth32A, 4)
FUNCTION (gdi32, GetCharWidth32W, 4)
FUNCTION (gdi32, GetCharWidthFloatA, 4)
FUNCTION (gdi32, GetCharWidthFloatW, 4)
FUNCTION (gdi32, GetCharWidthI, 5)
FUNCTION (gdi32, GetClipBox, 2)
FUNCTION (gdi32, GetClipRgn, 2)
FUNCTION (gdi32, GetColorAdjustment, 2)
FUNCTION (gdi32, GetCurrentObject, 2)
FUNCTION (gdi32, GetCurrentPositionEx, 2)
FUNCTION (gdi32, GetDCBrushColor, 1)
FUNCTION (gdi32, GetDCOrgEx, 2)
FUNCTION (gdi32, GetDCPenColor, 1)
FUNCTION (gdi32, GetDeviceCaps, 2)
FUNCTION (gdi32, GetDIBColorTable, 4)
FUNCTION (gdi32, GetDIBits, 7)
FUNCTION (gdi32, GetFontData, 5)
FUNCTION (gdi32, GetFontLanguageInfo, 1)
FUNCTION (gdi32, GetFontUnicodeRanges, 2)
FUNCTION (gdi32, GetGlyphIndicesA, 5)
FUNCTION (gdi32, GetGlyphIndicesW, 5)
FUNCTION (gdi32, GetGlyphOutlineA, 7)
FUNCTION (gdi32, GetGlyphOutlineW, 7)
FUNCTION (gdi32, GetGraphicsMode, 1)
FUNCTION (gdi32, GetKerningPairsA, 3)
FUNCTION (gdi32, GetKerningPairsW, 3)
FUNCTION (gdi32, GetLayout, 1)
FUNCTION (gdi32, GetMapMode, 1)
FUNCTION (gdi32, GetMetaRgn, 2)
FUNCTION (gdi32, GetMiterLimit, 2)
FUNCTION (gdi32, GetNearestColor, 2)
FUNCTION (gdi32, GetNearestPaletteIndex, 2)
FUNCTION (gdi32, GetObjectA, 3)
FUNCTION (gdi32, GetObjectType, 1)
FUNCTION (gdi32, GetObjectW, 3)
FUNCTION (gdi32, GetOutlineTextMetricsA, 3)
FUNCTION (gdi32, GetOutlineTextMetricsW, 3)
FUNCTION (gdi32, GetPaletteEntries, 4)
FUNCTION (gdi32, GetPath, 4)
FUNCTION (gdi32, GetPixel, 3)
FUNCTION (gdi32, GetPolyFillMode, 1)
FUNCTION (gdi32, GetRandomRgn, 3)
FUNCTION (gdi32, GetRasterizerCaps, 2)
FUNCTION (gdi32, GetRegionData, 3)
FUNCTION (gdi32, GetRgnBox, 2)
FUNCTION (gdi32, GetROP2, 1)
FUNCTION (gdi32, GetStockObject, 1)
FUNCTION (gdi32, GetStretchBltMode, 1)
FUNCTION (gdi32, GetSysColorBrush, 1)
FUNCTION (gdi32, GetSystemPaletteEntries, 4)
FUNCTION (gdi32, GetSystemPaletteUse, 1)
FUNCTION (gdi32, GetTextAlign, 1)
FUNCTION (gdi32, GetTextCharacterExtra, 1)
FUNCTION (gdi32, GetTextColor, 1)
FUNCTION (gdi32, GetTextExtentExPointA, 7)
FUNCTION (gdi32, GetTextExtentExPointI, 7)
FUNCTION (gdi32, GetTextExtentExPointW, 7)
FUNCTION (gdi32, GetTextExtentPoint32A, 4)
FUNCTION (gdi32, GetTextExtentPoint32W, 4)
FUNCTION (gdi32, GetTextExtentPointI, 4)
FUNCTION (gdi32, GetTextFaceA, 3)
FUNCTION (gdi32, GetTextFaceW, 3)
FUNCTION (gdi32, GetTextMetricsA, 2)
FUNCTION (gdi32, GetTextMetricsW, 2)
FUNCTION (gdi32, GetViewportExtEx, 2)
FUNCTION (gdi32, GetViewportOrgEx, 2)
FUNCTION (gdi32, GetWindowExtEx, 2)
FUNCTION (gdi32, GetWindowOrgEx, 2)
FUNCTION (gdi32, GetWorldTransform, 2)
FUNCTION (gdi32, GradientFill, 6)
FUNCTION (gdi32, IntersectClipRect, 5)
FUNCTION (gdi32, InvertRect, 2)
FUNCTION (gdi32, InvertRgn, 2)
FUNCTION (gdi32, LineDDA, 6)
FUNCTION (gdi32, LineTo, 3)
FUNCTION (gdi32, LoadBitmapA, 2)
FUNCTION (gdi32, LoadBitmapW, 2)
FUNCTION (gdi32, LPtoDP, 3)
FUNCTION (gdi32, MaskBlt, 12)
FUNCTION (gdi32, ModifyWorldTransform, 3)
FUNCTION (gdi32, MoveToEx, 4)
FUNCTION (gdi32, OffsetClipRgn, 3)
FUNCTION (gdi32, OffsetRgn, 3)
FUNCTION (gdi32, OffsetViewportOrgEx, 4)
FUNCTION (gdi32, OffsetWindowOrgEx, 4)
FUNCTION (gdi32, PaintRgn, 2)
FUNCTION (gdi32, PatBlt, 6)
FUNCTION (gdi32, PathToRegion, 1)
FUNCTION (gdi32, Pie, 9)
FUNCTION (gdi32, PlgBlt, 10)
FUNCTION (gdi32, PolyBezier, 3)
FUNCTION (gdi32, PolyBezierTo, 3)
FUNCTION (gdi32, PolyDraw, 4)
FUNCTION (gdi32, Polygon, 3)
FUNCTION (gdi32, Polyline, 3)
FUNCTION (gdi32, PolylineTo, 3)
FUNCTION (gdi32, PolyPolygon, 4)
FUNCTION (gdi32, PolyPolyline, 4)
FUNCTION (gdi32, PolyTextOutA, 3)
FUNCTION (gdi32, PolyTextOutW, 3)
FUNCTION (gdi32, PtInRegion, 3)
FUNCTION (gdi32, PtVisible, 3)
FUNCTION (gdi32, RealizePalette, 1)
FUNCTION (gdi32, Rectangle, 5)
FUNCTION (gdi32, RectInRegion, 2)
FUNCTION (gdi32, RectVisible, 2)
FUNCTION (gdi32, RemoveFontMemResourceEx, 1)
FUNCTION (gdi32, RemoveFontResourceA, 1)
FUNCTION (gdi32, RemoveFontResourceExA, 3)
FUNCTION (gdi32, RemoveFontResourceExW, 3)
FUNCTION (gdi32, RemoveFontResourceW, 1)
FUNCTION (gdi32, ResetDCA, 2)
FUNCTION (gdi32, ResetDCW, 2)
FUNCTION (gdi32, ResizePalette, 1)
FUNCTION (gdi32, RestoreDC, 2)
FUNCTION (gdi32, RoundRect, 7)
FUNCTION (gdi32, SaveDC, 1)
FUNCTION (gdi32, ScaleViewportExtEx, 6)
FUNCTION (gdi32, ScaleWindowExtEx, 6)
FUNCTION (gdi32, SelectClipPath, 2)
FUNCTION (gdi32, SelectClipRgn, 2)
FUNCTION (gdi32, SelectObject, 2)
FUNCTION (gdi32, SelectPalette, 3)
FUNCTION (gdi32, SetArcDirection, 2)
FUNCTION (gdi32, SetBitmapDimensionEx, 4)
FUNCTION (gdi32, SetBkColor, 2)
FUNCTION (gdi32, SetBkMode, 2)
FUNCTION (gdi32, SetBoundsRect, 3)
FUNCTION (gdi32, SetBrushOrgEx, 4)
FUNCTION (gdi32, SetColorAdjustment, 2)
FUNCTION (gdi32, SetDCBrushColor, 2)
FUNCTION (gdi32, SetDCPenColor, 2)
FUNCTION (gdi32, SetDIBColorTable, 4)
FUNCTION (gdi32, SetDIBits, 7)
FUNCTION (gdi32, SetDIBitsToDevice, 12)
FUNCTION (gdi32, SetGraphicsMode, 2)
FUNCTION (gdi32, SetLayout, 2)
FUNCTION (gdi32, SetMapMode, 2)
FUNCTION (gdi32, SetMapperFlags, 2)
FUNCTION (gdi32, SetMetaRgn, 2)
FUNCTION (gdi32, SetMiterLimit, 3)
FUNCTION (gdi32, SetPaletteEntries, 4)
FUNCTION (gdi32, SetPixel, 4)
FUNCTION (gdi32, SetPixelV, 4)
FUNCTION (gdi32, SetPolyFillMode, 2)
FUNCTION (gdi32, SetRectRgn, 5)
FUNCTION (gdi32, SetROP2, 2)
FUNCTION (gdi32, SetStretchBltMode, 2)
FUNCTION (gdi32, SetSystemPaletteUse, 2)
FUNCTION (gdi32, SetTextAlign, 2)
FUNCTION (gdi32, SetTextCharacterExtra, 2)
FUNCTION (gdi32, SetTextColor, 2)
FUNCTION (gdi32, SetTextJustification, 3)
FUNCTION (gdi32, SetViewportExtEx, 4)
FUNCTION (gdi32, SetViewportOrgEx, 4)
FUNCTION (gdi32, SetWindowExtEx, 4)
FUNCTION (gdi32, SetWindowOrgEx, 4)
FUNCTION (gdi32, SetWorldTransform, 2)
FUNCTION (gdi32, StretchBlt, 11)
FUNCTION (gdi32, StretchDIBits, 13)
FUNCTION (gdi32, StrokeAndFillPath, 1)
FUNCTION (gdi32, StrokePath, 1)
FUNCTION (gdi32, TextOutA, 5)
FUNCTION (gdi32, TextOutW, 5)
FUNCTION (gdi32, TransparentBlt, 11)
FUNCTION (gdi32, UnrealizeObject, 1)
FUNCTION (gdi32, UpdateColors, 1)
FUNCTION (gdi32, WidenPath, 1)

LIBRARY (advapi32, "advapi32.dll")
FUNCTION (advapi32, RegCloseKey, 1)
FUNCTION (advapi32, RegCreateKeyExA, 9)
FUNCTION (advapi32, RegCreateKeyExW, 9)
FUNCTION (advapi32, RegOpenKeyExA, 5)
FUNCTION (advapi32, RegOpenKeyExW, 5)
FUNCTION (advapi32, RegQueryValueExA, 6)
FUNCTION (advapi32, RegQueryValueExW, 6)
FUNCTION (advapi32, RegSetValueExA, 6)
FUNCTION (advapi32, RegSetValueExW, 6)

LIBRARY (shell32, "shell32.dll")
FUNCTION (shell32, ShellAboutA, 4)
FUNCTION (shell32, ShellAboutW, 4)
FUNCTION (shell32, ShellExecuteA, 6)
FUNCTION (shell32, ShellExecuteW, 6)

LIBRARY (ws2_32, "ws2_32.dll")
FUNCTION (ws2_32, WSACleanup, 0)
FUNCTION (ws2_32, WSAGetLastError, 0)
FUNCTION (ws2_32, WSAStartup, 2)
FUNCTION (ws2_32, accept, 3)
FUNCTION (ws2_32, bind, 3)
FUNCTION (ws2_32, closesocket, 1)
FUNCTION (ws2_32, connect, 3)
FUNCTION (ws2_32, freeaddrinfo, 1)
FUNCTION (ws2_32, getaddrinfo, 4)
FUNCTION (ws2_32, listen, 2)
FUNCTION (ws2_32, recv, 4)
FUNCTION (ws2_32, send, 4)
FUNCTION (ws2_32, shutdown, 2)
FUNCTION (ws2_32, socket, 3)
