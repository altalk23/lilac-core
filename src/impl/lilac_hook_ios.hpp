#ifndef __LILAC_HOOK_IOS_HPP__
#define __LILAC_HOOK_IOS_HPP__

#include "lilac_hook_platform.hpp"

namespace lilac::impl {
	class iOS : public Platform<iOS> {
	public:
		static constexpr char trap[] = { '\x00', '\x00', '\x20', '\xD4' };
	public:
		static void write_memory(void* to, const void* from, size_t size);
		static bool initialize();
		static const void* align_address(const void* address) {
			return address;
		}
	};

	using TargetPlatform = Platform<iOS>;


}

#endif /* __LILAC_HOOK_IOS_HPP__ */
