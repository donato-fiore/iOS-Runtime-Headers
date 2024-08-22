// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TLKAPPEARANCE_H
#define TLKAPPEARANCE_H

@class UIColor, NSString;

#import <Foundation/Foundation.h>


@interface TLKAppearance : NSObject

@property (readonly) CGFloat accessibilityContrastColorBoost; // ivar: _accessibilityContrastColorBoost
@property (readonly) UIColor *backgroundColor;
@property (readonly) id *compositingFilter; // ivar: _compositingFilter
@property (readonly) UIColor *groupedBackgroundColor;
@property (readonly) BOOL isDark; // ivar: _isDark
@property (readonly) BOOL isVibrant; // ivar: _isVibrant
@property (readonly) NSString *name; // ivar: _name
@property (readonly) UIColor *platterColor;
@property (readonly) UIColor *primaryButtonColor;
@property (readonly) UIColor *primaryColor;
@property (readonly) UIColor *quaternaryButtonColor;
@property (readonly) UIColor *quaternaryColor;
@property (readonly) UIColor *quinaryColor;
@property (readonly) UIColor *secondaryButtonColor;
@property (readonly) UIColor *secondaryColor;
@property (readonly) NSUInteger style; // ivar: _style
@property (readonly) UIColor *tertiaryButtonColor;
@property (readonly) UIColor *tertiaryColor;


+(BOOL)viewHasOverriddenAppearance:(id)arg0 ;
+(id)allAppearances;
+(id)appearanceWithStyle:(NSUInteger)arg0 ;
+(id)bestAppearanceForSystem;
+(id)bestAppearanceForTraitCollection:(id)arg0 ;
+(id)bestAppearanceForView:(id)arg0 ;
+(id)colorWithRed:(NSUInteger)arg0 green:(NSUInteger)arg1 blue:(NSUInteger)arg2 ;
+(void)disableAppearanceOverrideForView:(id)arg0 ;
-(id)buttonColorForProminence:(NSUInteger)arg0 ;
-(id)colorForProminence:(NSUInteger)arg0 ;
-(id)colorWithWhite:(NSUInteger)arg0 ;
-(id)colorWithWhite:(NSUInteger)arg0 highContrastWhite:(NSUInteger)arg1 ;
-(id)textColorForColor:(NSInteger)arg0 ;
-(void)disableAppearanceForView:(id)arg0 ;
-(void)enableAppearanceForContainer:(id)arg0 ;
-(void)enableAppearanceForView:(id)arg0 ;
-(void)overrideAppearanceForView:(id)arg0 ;


@end


#endif