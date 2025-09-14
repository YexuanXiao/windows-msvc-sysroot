// C++/WinRT v2.0.250303.1

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_UI_WindowManagement_Preview_2_H
#define WINRT_Windows_UI_WindowManagement_Preview_2_H
#include "winrt/impl/windows.foundation.1.h"
#include "winrt/impl/windows.ui.windowmanagement.1.h"
#include "winrt/impl/windows.ui.windowmanagement.preview.1.h"
WINRT_EXPORT namespace winrt::Windows::UI::WindowManagement::Preview
{
    struct WINRT_IMPL_EMPTY_BASES WindowManagementPreview : winrt::Windows::UI::WindowManagement::Preview::IWindowManagementPreview
    {
        WindowManagementPreview(std::nullptr_t) noexcept {}
        WindowManagementPreview(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::WindowManagement::Preview::IWindowManagementPreview(ptr, take_ownership_from_abi) {}
        static auto SetPreferredMinSize(winrt::Windows::UI::WindowManagement::AppWindow const& window, winrt::Windows::Foundation::Size const& preferredFrameMinSize);
    };
}
#endif
