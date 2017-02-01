#include "ExtensionsTest.h"
#include "../testResource.h"
#include "AssetsManagerExTest/AssetsManagerExTest.h"
#include "NotificationCenterTest/NotificationCenterTest.h"
#include "ControlExtensionTest/CCControlSceneManager.h"
#include "CocosBuilderTest/CocosBuilderTest.h"
#if (CC_TARGET_PLATFORM != CC_PLATFORM_NACL)
#include "NetworkTest/HttpClientTest.h"
#endif
#include "TableViewTest/TableViewTestScene.h"

#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS) || (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID) || (CC_TARGET_PLATFORM == CC_PLATFORM_MAC) || (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32) || (CC_TARGET_PLATFORM == CC_PLATFORM_WINRT)
#include "NetworkTest/SocketIOTest.h"
#include "NetworkTest/WebSocketTest.h"
#endif

#if (CC_TARGET_PLATFORM == CC_PLATFORM_EMSCRIPTEN)
#include "NetworkTest/WebSocketTest.h"
#endif

ExtensionsTests::ExtensionsTests()
{
    addTest("AssetsManagerExTest", [](){ return new (std::nothrow) AssetsManagerExTests; });
    addTest("NotificationCenterTest", [](){ return new (std::nothrow) NotificationCenterTests; });
    addTest("CCControlButtonTest", [](){ return new (std::nothrow) ControlTests; });
    addTest("CocosBuilderTest", [](){ return new (std::nothrow) CocosBuilderTests; });
#if (CC_TARGET_PLATFORM != CC_PLATFORM_NACL)
    addTest("HttpClientTest", [](){ return new (std::nothrow) HttpClientTests; });
#endif
#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS) || (CC_TARGET_PLATFORM == CC_PLATFORM_ANDROID) || (CC_TARGET_PLATFORM == CC_PLATFORM_MAC) || (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32) || (CC_TARGET_PLATFORM == CC_PLATFORM_WINRT)
    addTest("WebSocketTest", [](){ return new (std::nothrow) WebSocketTests; });
    addTest("SocketIOTest", [](){ return new (std::nothrow) SocketIOTests; });
#endif
#if (CC_TARGET_PLATFORM == CC_PLATFORM_EMSCRIPTEN)
    addTest("WebSocketTest", [](){ return new (std::nothrow) WebSocketTests; });
#endif
    addTest("TableViewTest", [](){ return new (std::nothrow) TableViewTests; });
}