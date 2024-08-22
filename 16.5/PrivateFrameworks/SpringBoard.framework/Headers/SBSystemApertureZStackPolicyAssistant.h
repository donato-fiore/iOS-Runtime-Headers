// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBSYSTEMAPERTUREZSTACKPOLICYASSISTANT_H
#define SBSYSTEMAPERTUREZSTACKPOLICYASSISTANT_H

@class NSSet, NSString;
@protocol SBDeviceApplicationSceneHandleObserver, SBHomeGrabberViewObserver, SBSystemApertureZStackPolicyAssistantDelegate;

#import <Foundation/Foundation.h>

#import "SBHomeGrabberView.h"
#import "SBDeviceApplicationSceneHandle.h"

@interface SBSystemApertureZStackPolicyAssistant : NSObject <SBDeviceApplicationSceneHandleObserver, SBHomeGrabberViewObserver>



@property (readonly, copy, nonatomic) NSSet *associatedBundleIdentifiersToSuppressInSystemAperture; // ivar: _associatedBundleIdentifiersToSuppressInSystemAperture
@property (readonly, copy, nonatomic) NSSet *associatedSceneIdentifiersToSuppressInSystemAperture; // ivar: _associatedSceneIdentifiersToSuppressInSystemAperture
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBSystemApertureZStackPolicyAssistantDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) SBHomeGrabberView *foregroundExclusiveHomeGrabberView; // ivar: _foregroundExclusiveHomeGrabberView
@property (readonly, weak, nonatomic) SBDeviceApplicationSceneHandle *foregroundExclusiveSceneHandle; // ivar: _foregroundExclusiveSceneHandle
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL suppressSystemApertureForSystemChromeSuppression; // ivar: _suppressSystemApertureForSystemChromeSuppression


-(id)initWithDelegate:(id)arg0 ;
-(void)_resolveProposedPolicies;
-(void)homeGrabberViewDidUpdateHidden:(id)arg0 ;
-(void)sceneHandle:(id)arg0 didUpdateClientSettingsWithDiff:(id)arg1 transitionContext:(id)arg2 ;


@end


#endif