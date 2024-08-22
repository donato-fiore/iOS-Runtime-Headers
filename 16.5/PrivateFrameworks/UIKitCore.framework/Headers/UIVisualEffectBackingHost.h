// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIVISUALEFFECTBACKINGHOST_H
#define UIVISUALEFFECTBACKINGHOST_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>

#import "_UIVisualEffectHost.h"
#import "_UIVisualEffectViewBackdropCaptureGroup.h"
#import "_UIVisualEffectEnvironment.h"
#import "UIView.h"
#import "UIVisualEffect.h"

@interface UIVisualEffectBackingHost : NSObject {
    ? _flags;
}


@property (copy, nonatomic, setter=_setCaptureGroupName:) NSString *_captureGroupName; // ivar: _captureGroupName
@property (copy, nonatomic) NSArray *backgroundEffects; // ivar: _backgroundEffects
@property (retain, nonatomic) _UIVisualEffectHost *backgroundHost; // ivar: _backgroundHost
@property (retain, nonatomic) _UIVisualEffectViewBackdropCaptureGroup *captureGroup; // ivar: _captureGroup
@property (copy, nonatomic) NSArray *contentEffects; // ivar: _contentEffects
@property (retain, nonatomic) _UIVisualEffectHost *contentHost; // ivar: _contentHost
@property (retain, nonatomic) _UIVisualEffectEnvironment *environment; // ivar: _environment
@property (weak, nonatomic) UIView *view; // ivar: _view
@property (copy, nonatomic) UIVisualEffect *visualEffect; // ivar: _visualEffect
@property (retain, nonatomic) NSArray *visualEffectSubviews; // ivar: _visualEffectSubviews


-(BOOL)_shouldAnimatePropertyWithKey:(id)arg0 ;
-(id)_effectDescriptorForEffects:(id)arg0 usage:(NSInteger)arg1 ;
-(id)_initialValueForKey:(id)arg0 ;
-(id)initForView:(id)arg0 ;
-(void)_configureEffects;
-(void)_didMoveFromWindow:(id)arg0 toWindow:(id)arg1 ;
-(void)_ensureBackgroundHost;
-(void)_ensureContentHost;
-(void)_generateBackgroundEffects:(id)arg0 contentEffects:(id)arg1 ;
-(void)_generateDeferredAnimations:(id)arg0 ;
-(void)_registerNotifications;
-(void)_unregisterNotifications;
-(void)_updateContentViewVibrancyTraitOverride:(id)arg0 ;
-(void)_updateEffectForAccessibilityChanges:(id)arg0 ;
-(void)_updateEnvironmentAndFlagUpdatesIfNecessary:(id)arg0 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)invalidateCaptureGroupName;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)willGainDescendent:(id)arg0 ;
-(void)willLoseDescendent:(id)arg0 ;
-(void)willMoveToSuperview:(id)arg0 ;
-(void)willMoveToWindow:(id)arg0 ;


@end


#endif