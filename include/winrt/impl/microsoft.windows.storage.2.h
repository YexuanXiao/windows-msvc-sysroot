// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.3.4.5

#pragma once
#ifndef WINRT_Microsoft_Windows_Storage_2_H
#define WINRT_Microsoft_Windows_Storage_2_H
#include "winrt/impl/windows.foundation.1.h"
#include "winrt/impl/windows.system.1.h"
#include "winrt/impl/microsoft.windows.storage.1.h"
WINRT_EXPORT namespace winrt::Microsoft::Windows::Storage
{
    struct WINRT_IMPL_EMPTY_BASES ApplicationData : winrt::Microsoft::Windows::Storage::IApplicationData,
        impl::require<ApplicationData, winrt::Windows::Foundation::IClosable>
    {
        ApplicationData(std::nullptr_t) noexcept {}
        ApplicationData(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::Windows::Storage::IApplicationData(ptr, take_ownership_from_abi) {}
        static auto GetDefault();
        static auto GetForUser(winrt::Windows::System::User const& user);
        static auto GetForPackageFamily(param::hstring const& packageFamilyName);
    };
    struct WINRT_IMPL_EMPTY_BASES ApplicationDataContainer : winrt::Microsoft::Windows::Storage::IApplicationDataContainer,
        impl::require<ApplicationDataContainer, winrt::Windows::Foundation::IClosable>
    {
        ApplicationDataContainer(std::nullptr_t) noexcept {}
        ApplicationDataContainer(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::Windows::Storage::IApplicationDataContainer(ptr, take_ownership_from_abi) {}
    };
}
#endif
