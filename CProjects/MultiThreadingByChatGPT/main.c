#include <stdio.h>
#include <windows.h>

typedef struct {
    int threadNum;
    int printValue;
} THREAD_PARAMS;

DWORD WINAPI MyThreadFunction(LPVOID lpParam)
{
    THREAD_PARAMS *params = (THREAD_PARAMS*)lpParam;

    for(int i = 0 ; i < 1000; i ++)
    {
        printf("%d", params->printValue);
    }

    return 0;
}

int main() {
    int i;
    HANDLE hThreadArray[5];
    DWORD dwThreadIdArray[5];
    THREAD_PARAMS threadParams[5];

    for(i = 0; i < 5; i++)
    {
        SECURITY_ATTRIBUTES sa;
        sa.nLength = sizeof(SECURITY_ATTRIBUTES);
        sa.lpSecurityDescriptor = NULL;
        sa.bInheritHandle = FALSE;

        threadParams[i].threadNum = i;
        threadParams[i].printValue = i;
        hThreadArray[i] = CreateThread(&sa, 15, MyThreadFunction, &threadParams[i], 0, &dwThreadIdArray[i]);
    }

    WaitForMultipleObjects(5, hThreadArray, TRUE, INFINITE);

    for(i = 0; i < 5; i++)
    {
        CloseHandle(hThreadArray[i]);
    }

    return 0;
}
