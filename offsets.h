// ------------------------------------------------------------
//  Dumper      : Lithium Dumper
//  Version     : version-e7d81637d42c4b23
//  Time Taken  : 879s
// made by      : @readprocessmemory
// ------------------------------------------------------------
#pragma once
#define REBASE(addr)(addr+reinterpret_cast<uintptr_t>(GetModuleHandleA(nullptr)))

namespace Offsets
{
    const uintptr_t Print = REBASE(0x1C8A050);

    namespace Actor
    {
        const uintptr_t TaskDesynchronize = REBASE(0x41D2E7F);
        const uintptr_t TaskSynchronize = REBASE(0x41D2A6C);
        const uintptr_t TaskSynchronize_Str = REBASE(0x41D2A6C);
    }

    namespace ByteCode
    {
        const uintptr_t ByteCodePointer = REBASE(0x10);
        const uintptr_t ByteCodeSize = REBASE(0x0);
    }

    namespace coroutine
    {
        const uintptr_t create = REBASE(0x555AB30);
        const uintptr_t running = REBASE(0x555B3B0);
        const uintptr_t status = REBASE(0x55594C0);
        const uintptr_t wrap = REBASE(0x555B0E0);
        const uintptr_t yield = REBASE(0x555B350);
        const uintptr_t isyieldable = REBASE(0x555B420);
        const uintptr_t close = REBASE(0x555B4B0);
    }

    namespace DataModel
    {
        const uintptr_t FakeDataModel = REBASE(0x8D22868);
        const uintptr_t RealDataModel = REBASE(0x1F8);
    }

    namespace Identity
    {
        const uintptr_t GetTlsPointer = REBASE(0x6B19468);
    }

    namespace Instance
    {
        const uintptr_t PushInstance = REBASE(0x47CA6B0);
        const uintptr_t RequireBypass = REBASE(0xB01);
    }

    namespace Lock
    {
        const uintptr_t LockViolationScriptCrash = REBASE(0x40ED9F8);
    }

    namespace Luau
    {
        const uintptr_t LuaO_NilObject = REBASE(0x63516D8);
        const uintptr_t LuaNil = REBASE(0x63516D8);
        const uintptr_t luaH_dummynode = REBASE(0x6351188);
        const uintptr_t LuaDummy = REBASE(0x6351188);
        const uintptr_t luaB_pcallrun = REBASE(0x27164F4);
        const uintptr_t luaB_getmetatable = REBASE(0x3FD4A4F);
        const uintptr_t luaB_assert = REBASE(0x2712A30);
        const uintptr_t luaL_getmetafield = REBASE(0x270C760);
        const uintptr_t luaopen_base = REBASE(0x27164F4);
        const uintptr_t GetProperty = REBASE(0x46F2B1F);
        const uintptr_t WndProcessCheck = REBASE(0x7E8158);
        const uintptr_t PhysicsSenderMaxBandwidthBps = REBASE(0x45F4A24);
        const uintptr_t LockViolationScriptCrash_Str = REBASE(0x40ED9F8);
        const uintptr_t pusherror = REBASE(0x26D5870);
        const uintptr_t f_luaopen = REBASE(0x26D5A4F);
    }

    namespace ModuleScript
    {
        const uintptr_t IsRobloxScript = REBASE(0x168);
    }

    namespace Reflection
    {
        const uintptr_t KTable = REBASE(0x8817490);
        const uintptr_t Reflection_Types = REBASE(0x1CC8BCA);
    }

    namespace Script
    {
        const uintptr_t ScriptContextResume = REBASE(0x4115130);
        const uintptr_t ScriptContextToResume = REBASE(0x308);
    }

    namespace Signal
    {
        const uintptr_t ConnectionDisconnect = REBASE(0x47CAFA0);
    }

    namespace Task
    {
        const uintptr_t TaskWait = REBASE(0x41D4464);
        const uintptr_t TaskWait_Str = REBASE(0x41D4624);
        const uintptr_t task.synchronize = REBASE(0x41D2980);
        const uintptr_t task.desynchronize = REBASE(0x41D2D90);
        const uintptr_t task.defer = REBASE(0x41D3960);
        const uintptr_t task.spawn = REBASE(0x41D3DF0);
        const uintptr_t task.delay = REBASE(0x41D4160);
        const uintptr_t task.wait = REBASE(0x41D4460);
        const uintptr_t task.cancel = REBASE(0x41D46D0);
    }

    namespace TaskScheduler
    {
        const uintptr_t TaskSchedulerPointer = REBASE(0x8ABD728);
        const uintptr_t MaxFps = REBASE(0xB0);
    }

}
