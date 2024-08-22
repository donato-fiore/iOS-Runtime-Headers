// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UISCREENBASEDWINDOWSCENE_H
#define _UISCREENBASEDWINDOWSCENE_H

@class NSMutableSet;
@protocol NSCopying, BSInvalidatable;


#import "UIWindowScene.h"
#import "UIScreen.h"
#import "UIMutableApplicationSceneSettings.h"

@interface _UIScreenBasedWindowScene : UIWindowScene {
    id<NSCopying> *_lookupKey;
    UIScreen *_screen;
    UIMutableApplicationSceneSettings *_synthesizedSettings;
    BOOL _invalidationEvaluatorRegistered;
    BOOL _needsInvalidation;
    id<BSInvalidatable> *_screenDisconnectionPreventionAssertion;
    NSMutableSet *_autoInvalidationPreventionAssertions;
}




+(BOOL)alwaysKeepContexts;
+(BOOL)autoInvalidates;
+(BOOL)shouldAllowComponents;
+(id)_unassociatedWindowSceneForScreen:(id)arg0 create:(BOOL)arg1 ;
+(id)unassociationCache;
+(id)unassociationCacheAccessQueue;
-(BOOL)_shouldAllowFencing;
-(id)_displayInfoProvider;
-(id)_synthesizedSettings;
-(id)initWithScreen:(id)arg0 session:(id)arg1 lookupKey:(id)arg2 ;
-(id)screen;
-(struct CGRect )_referenceBounds;
-(struct CGRect )_referenceBoundsForOrientation:(NSInteger)arg0 ;
-(void)_addSubclassDebugDescriptionWithBuilder:(id)arg0 ;
-(void)_addSubclassFlagsToDebugDescriptionWithBuilder:(id)arg0 ;
-(void)_attachWindow:(id)arg0 ;
-(void)_detachWindow:(id)arg0 ;
-(void)_invalidate;
-(void)_openURL:(id)arg0 options:(id)arg1 completionHandler:(id)arg2 ;
-(void)_removeAutoInvalidationPreventionAssertion:(id)arg0 ;
-(void)_screenDisconnected:(id)arg0 ;
-(void)_screenInterfaceOrientationChanged:(id)arg0 ;
-(void)_setKeepContextAssociationInBackground:(BOOL)arg0 ;
-(void)_updateClientSettingsToInterfaceOrientation:(NSInteger)arg0 withAnimationDuration:(CGFloat)arg1 ;
-(void)setDelegate:(id)arg0 ;


@end


#endif