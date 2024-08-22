// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SBDEVICEAPPLICATIONSCENESTATUSBARSTATEPROVIDEROBSERVERRECORD_H
#define _SBDEVICEAPPLICATIONSCENESTATUSBARSTATEPROVIDEROBSERVERRECORD_H

@protocol SBDeviceApplicationSceneStatusBarStateObserver;

#import <Foundation/Foundation.h>


@interface _SBDeviceApplicationSceneStatusBarStateProviderObserverRecord : NSObject

@property (readonly, nonatomic) SBDeviceApplicationSceneStatusBarStateObserverFlags flags; // ivar: _flags
@property (readonly, weak, nonatomic) NSObject<SBDeviceApplicationSceneStatusBarStateObserver> *observer; // ivar: _observer


-(id)initWithObserver:(id)arg0 andFlags:(struct SBDeviceApplicationSceneStatusBarStateObserverFlags )arg1 ;


@end


#endif