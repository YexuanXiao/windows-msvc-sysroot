// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.3.4.5

#pragma once
#ifndef WINRT_Microsoft_UI_Content_2_H
#define WINRT_Microsoft_UI_Content_2_H
#include "winrt/impl/microsoft.ui.1.h"
#include "winrt/impl/microsoft.ui.composition.1.h"
#include "winrt/impl/windows.foundation.1.h"
#include "winrt/impl/microsoft.ui.content.1.h"
WINRT_EXPORT namespace winrt::Microsoft::UI::Content
{
    struct WINRT_IMPL_EMPTY_BASES ContentCoordinateConverter : winrt::Microsoft::UI::Content::IContentCoordinateConverter
    {
        ContentCoordinateConverter(std::nullptr_t) noexcept {}
        ContentCoordinateConverter(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Content::IContentCoordinateConverter(ptr, take_ownership_from_abi) {}
        static auto CreateForWindowId(winrt::Microsoft::UI::WindowId const& windowId);
    };
    struct WINRT_IMPL_EMPTY_BASES ContentDeferral : winrt::Microsoft::UI::Content::IContentDeferral
    {
        ContentDeferral(std::nullptr_t) noexcept {}
        ContentDeferral(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Content::IContentDeferral(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES ContentEnvironmentSettingChangedEventArgs : winrt::Microsoft::UI::Content::IContentEnvironmentSettingChangedEventArgs
    {
        ContentEnvironmentSettingChangedEventArgs(std::nullptr_t) noexcept {}
        ContentEnvironmentSettingChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Content::IContentEnvironmentSettingChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES ContentEnvironmentStateChangedEventArgs : winrt::Microsoft::UI::Content::IContentEnvironmentStateChangedEventArgs
    {
        ContentEnvironmentStateChangedEventArgs(std::nullptr_t) noexcept {}
        ContentEnvironmentStateChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Content::IContentEnvironmentStateChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES ContentIsland : winrt::Microsoft::UI::Content::IContentIsland,
        impl::require<ContentIsland, winrt::Windows::Foundation::IClosable, winrt::Microsoft::UI::IClosableNotifier, winrt::Microsoft::UI::Composition::ICompositionSupportsSystemBackdrop>
    {
        ContentIsland(std::nullptr_t) noexcept {}
        ContentIsland(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Content::IContentIsland(ptr, take_ownership_from_abi) {}
        static auto Create(winrt::Microsoft::UI::Composition::Visual const& Root);
        static auto FindAllForCompositor(winrt::Microsoft::UI::Composition::Compositor const& compositor);
        static auto FindAllForCurrentThread();
        static auto GetByVisual(winrt::Microsoft::UI::Composition::Visual const& child);
        static auto GetFromId(uint64_t id);
    };
    struct WINRT_IMPL_EMPTY_BASES ContentIslandAutomationProviderRequestedEventArgs : winrt::Microsoft::UI::Content::IContentIslandAutomationProviderRequestedEventArgs
    {
        ContentIslandAutomationProviderRequestedEventArgs(std::nullptr_t) noexcept {}
        ContentIslandAutomationProviderRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Content::IContentIslandAutomationProviderRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES ContentIslandEnvironment : winrt::Microsoft::UI::Content::IContentIslandEnvironment
    {
        ContentIslandEnvironment(std::nullptr_t) noexcept {}
        ContentIslandEnvironment(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Content::IContentIslandEnvironment(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES ContentIslandStateChangedEventArgs : winrt::Microsoft::UI::Content::IContentIslandStateChangedEventArgs
    {
        ContentIslandStateChangedEventArgs(std::nullptr_t) noexcept {}
        ContentIslandStateChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Content::IContentIslandStateChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES ContentSite : winrt::Microsoft::UI::Content::IContentSite,
        impl::require<ContentSite, winrt::Windows::Foundation::IClosable, winrt::Microsoft::UI::IClosableNotifier>
    {
        ContentSite(std::nullptr_t) noexcept {}
        ContentSite(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Content::IContentSite(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES ContentSiteEnvironment : winrt::Microsoft::UI::Content::IContentSiteEnvironment
    {
        ContentSiteEnvironment(std::nullptr_t) noexcept {}
        ContentSiteEnvironment(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Content::IContentSiteEnvironment(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES ContentSiteEnvironmentView : winrt::Microsoft::UI::Content::IContentSiteEnvironmentView
    {
        ContentSiteEnvironmentView(std::nullptr_t) noexcept {}
        ContentSiteEnvironmentView(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Content::IContentSiteEnvironmentView(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES ContentSiteRequestedStateChangedEventArgs : winrt::Microsoft::UI::Content::IContentSiteRequestedStateChangedEventArgs
    {
        ContentSiteRequestedStateChangedEventArgs(std::nullptr_t) noexcept {}
        ContentSiteRequestedStateChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Content::IContentSiteRequestedStateChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES ContentSiteView : winrt::Microsoft::UI::Content::IContentSiteView
    {
        ContentSiteView(std::nullptr_t) noexcept {}
        ContentSiteView(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Content::IContentSiteView(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES DesktopChildSiteBridge : winrt::Microsoft::UI::Content::IDesktopChildSiteBridge,
        impl::base<DesktopChildSiteBridge, winrt::Microsoft::UI::Content::DesktopSiteBridge>,
        impl::require<DesktopChildSiteBridge, winrt::Microsoft::UI::Content::IDesktopSiteBridge, winrt::Microsoft::UI::IClosableNotifier, winrt::Windows::Foundation::IClosable, winrt::Microsoft::UI::Content::IContentSiteBridge>
    {
        DesktopChildSiteBridge(std::nullptr_t) noexcept {}
        DesktopChildSiteBridge(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Content::IDesktopChildSiteBridge(ptr, take_ownership_from_abi) {}
        static auto Create(winrt::Microsoft::UI::Composition::Compositor const& compositor, winrt::Microsoft::UI::WindowId const& parentWindowId);
    };
    struct WINRT_IMPL_EMPTY_BASES DesktopSiteBridge : winrt::Microsoft::UI::Content::IDesktopSiteBridge,
        impl::require<DesktopSiteBridge, winrt::Microsoft::UI::IClosableNotifier, winrt::Windows::Foundation::IClosable, winrt::Microsoft::UI::Content::IContentSiteBridge>
    {
        DesktopSiteBridge(std::nullptr_t) noexcept {}
        DesktopSiteBridge(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Content::IDesktopSiteBridge(ptr, take_ownership_from_abi) {}
        static auto IsSupported();
    };
}
#endif
