// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SBKEYBOARDFOCUSPOLICY_H
#define _SBKEYBOARDFOCUSPOLICY_H

@class BKSHIDEventDeferringTarget, FBSSceneIdentityToken, NSString;
@protocol BSDescriptionStreamable, NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>

#import "SBWindowScene.h"
#import "_SBRecentlyUsedSceneIdentityCache.h"

@interface _SBKeyboardFocusPolicy : NSObject <BSDescriptionStreamable, NSCopying, NSMutableCopying>

 {
    BKSHIDEventDeferringTarget *_keyboardFocusTarget;
    FBSSceneIdentityToken *_overrideSceneIdentityToken;
    SBWindowScene *_preferredSBFocusWindowScene;
    _SBRecentlyUsedSceneIdentityCache *_recentlyUsedScenes;
    NSInteger _selectionPolicy;
    BOOL _shouldSuppressRemoteDeferring;
    BOOL _cameraIsHosted;
}


@property (readonly, nonatomic) NSInteger advicePolicy;
@property (readonly, nonatomic) BOOL cameraIsHosted;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BKSHIDEventDeferringTarget *keyboardFocusTarget;
@property (readonly, nonatomic) FBSSceneIdentityToken *overrideSceneIdentityToken;
@property (readonly, nonatomic) NSUInteger policyGeneration; // ivar: _policyGeneration
@property (readonly, weak, nonatomic) SBWindowScene *preferredSBFocusWindowScene;
@property (readonly, copy, nonatomic) _SBRecentlyUsedSceneIdentityCache *recentlyUsedScenes;
@property (readonly, nonatomic) BOOL shouldSuppressRemoteDeferring;
@property (readonly) Class superclass;


+(id)build:(id)arg0 ;
+(id)new;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)appendDescriptionToFormatter:(id)arg0 ;


@end


#endif