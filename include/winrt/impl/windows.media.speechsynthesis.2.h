// C++/WinRT v2.0.250303.1

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_Media_SpeechSynthesis_2_H
#define WINRT_Windows_Media_SpeechSynthesis_2_H
#include "winrt/impl/windows.foundation.1.h"
#include "winrt/impl/windows.media.core.1.h"
#include "winrt/impl/windows.storage.streams.1.h"
#include "winrt/impl/windows.media.speechsynthesis.1.h"
WINRT_EXPORT namespace winrt::Windows::Media::SpeechSynthesis
{
    struct WINRT_IMPL_EMPTY_BASES SpeechSynthesisStream : winrt::Windows::Media::SpeechSynthesis::ISpeechSynthesisStream,
        impl::require<SpeechSynthesisStream, winrt::Windows::Media::Core::ITimedMetadataTrackProvider>
    {
        SpeechSynthesisStream(std::nullptr_t) noexcept {}
        SpeechSynthesisStream(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::SpeechSynthesis::ISpeechSynthesisStream(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES SpeechSynthesizer : winrt::Windows::Media::SpeechSynthesis::ISpeechSynthesizer,
        impl::require<SpeechSynthesizer, winrt::Windows::Foundation::IClosable, winrt::Windows::Media::SpeechSynthesis::ISpeechSynthesizer2>
    {
        SpeechSynthesizer(std::nullptr_t) noexcept {}
        SpeechSynthesizer(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::SpeechSynthesis::ISpeechSynthesizer(ptr, take_ownership_from_abi) {}
        SpeechSynthesizer();
        [[nodiscard]] static auto AllVoices();
        [[nodiscard]] static auto DefaultVoice();
        static auto TrySetDefaultVoiceAsync(winrt::Windows::Media::SpeechSynthesis::VoiceInformation const& voice);
    };
    struct WINRT_IMPL_EMPTY_BASES SpeechSynthesizerOptions : winrt::Windows::Media::SpeechSynthesis::ISpeechSynthesizerOptions,
        impl::require<SpeechSynthesizerOptions, winrt::Windows::Media::SpeechSynthesis::ISpeechSynthesizerOptions2, winrt::Windows::Media::SpeechSynthesis::ISpeechSynthesizerOptions3>
    {
        SpeechSynthesizerOptions(std::nullptr_t) noexcept {}
        SpeechSynthesizerOptions(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::SpeechSynthesis::ISpeechSynthesizerOptions(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES VoiceInformation : winrt::Windows::Media::SpeechSynthesis::IVoiceInformation
    {
        VoiceInformation(std::nullptr_t) noexcept {}
        VoiceInformation(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::SpeechSynthesis::IVoiceInformation(ptr, take_ownership_from_abi) {}
    };
}
#endif
