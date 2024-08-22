// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBLOCKSCREENPLUGINAPPEARANCECONTEXT_H
#define SBLOCKSCREENPLUGINAPPEARANCECONTEXT_H

@class NSString, NSArray;
@protocol SBLockScreenPluginMutableAppearance, SBLockScreenPluginAppearance, NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>

#import "SBLockScreenLegibilitySettings.h"

@interface SBLockScreenPluginAppearanceContext : NSObject <SBLockScreenPluginMutableAppearance, SBLockScreenPluginAppearance, NSCopying, NSMutableCopying>



@property (nonatomic) NSInteger backgroundStyle; // ivar: backgroundStyle
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *elementOverrides; // ivar: elementOverrides
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isHidden) BOOL hidden; // ivar: hidden
@property (retain, nonatomic) SBLockScreenLegibilitySettings *legibilitySettings; // ivar: legibilitySettings
@property (nonatomic) NSInteger notificationBehavior; // ivar: notificationBehavior
@property (nonatomic) CGRect presentationRegion; // ivar: presentationRegion
@property (nonatomic) NSInteger presentationStyle; // ivar: presentationStyle
@property (nonatomic) NSUInteger restrictedCapabilities; // ivar: restrictedCapabilities
@property (readonly) Class superclass;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithAppearance:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif