// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UISTATUSBARFOREGROUNDSTYLEATTRIBUTES_H
#define UISTATUSBARFOREGROUNDSTYLEATTRIBUTES_H

@class NSMutableDictionary, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "UIColor.h"

@interface UIStatusBarForegroundStyleAttributes : NSObject <NSCopying>

 {
    CGFloat _height;
    NSInteger _legibilityStyle;
    NSInteger _idiom;
    NSMutableDictionary *_cachedFonts;
    BOOL _isTintColorBlack;
    BOOL _hasBusyBackground;
    NSString *_cachedUniqueIdentifier;
}


@property (nonatomic) BOOL canShowBreadcrumbs; // ivar: _canShowBreadcrumbs
@property (readonly, retain, nonatomic) UIColor *tintColor; // ivar: _tintColor


-(BOOL)_shouldUseBoldFontForStyle:(NSInteger)arg0 ;
-(BOOL)supportsShowingBuildVersion;
-(BOOL)usesVerticalLayout;
-(CGFloat)_roundDimension:(CGFloat)arg0 ;
-(CGFloat)baselineOffsetForStyle:(NSInteger)arg0 ;
-(CGFloat)batteryAccessoryMargin;
-(CGFloat)bluetoothBatteryExtraPadding;
-(CGFloat)height;
-(CGFloat)leftEdgePadding;
-(CGFloat)middlePadding;
-(CGFloat)rightEdgePadding;
-(CGFloat)scale;
-(CGFloat)shadowPadding;
-(CGFloat)sizeForMoonMaskVisible:(BOOL)arg0 ;
-(CGFloat)standardPadding;
-(CGFloat)textOffsetForStyle:(NSInteger)arg0 ;
-(NSInteger)activityIndicatorStyleWithSyncActivity:(BOOL)arg0 ;
-(NSInteger)idiom;
-(NSInteger)legibilityStyle;
-(id)_batteryColorForCapacity:(int)arg0 lowCapacity:(int)arg1 style:(NSUInteger)arg2 usingTintColor:(BOOL)arg3 ;
-(id)_cacheQueue_cachedImageNamed:(id)arg0 inTempGroup:(id)arg1 groupFullName:(id)arg2 ;
-(id)_cachedImageNamed:(id)arg0 ;
-(id)accessibilityHUDImageNamed:(id)arg0 ;
-(id)batteryColorForCapacity:(int)arg0 style:(NSUInteger)arg1 usingTintColor:(BOOL)arg2 ;
-(id)bluetoothBatteryColorForCapacity:(CGFloat)arg0 usingTintColor:(BOOL)arg1 ;
-(id)bluetoothBatteryImageNameWithCapacity:(CGFloat)arg0 ;
-(id)cachedImageNamed:(id)arg0 inTempGroup:(id)arg1 ;
-(id)cachedImageWithText:(id)arg0 forWidth:(CGFloat)arg1 lineBreakMode:(NSInteger)arg2 letterSpacing:(CGFloat)arg3 textAlignment:(NSInteger)arg4 style:(NSInteger)arg5 itemType:(int)arg6 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)expandedNameForImageName:(id)arg0 ;
-(id)generateUniqueIdentifier;
-(id)imageIdWithText:(id)arg0 forWidth:(CGFloat)arg1 lineBreakMode:(NSInteger)arg2 letterSpacing:(CGFloat)arg3 style:(NSInteger)arg4 ;
-(id)imageNamed:(id)arg0 ;
-(id)imageNamed:(id)arg0 withLegibilityStyle:(NSInteger)arg1 legibilityStrength:(CGFloat)arg2 ;
-(id)imageWithText:(id)arg0 ofItemType:(int)arg1 forWidth:(CGFloat)arg2 lineBreakMode:(NSInteger)arg3 letterSpacing:(CGFloat)arg4 textAlignment:(NSInteger)arg5 style:(NSInteger)arg6 withLegibilityStyle:(NSInteger)arg7 legibilityStrength:(CGFloat)arg8 ;
-(id)imageWithText:(id)arg0 ofItemType:(int)arg1 forWidth:(CGFloat)arg2 lineBreakMode:(NSInteger)arg3 letterSpacing:(CGFloat)arg4 textAlignment:(NSInteger)arg5 style:(NSInteger)arg6 withLegibilityStyle:(NSInteger)arg7 legibilityStrength:(CGFloat)arg8 shouldCache:(BOOL)arg9 ;
-(id)initWithHeight:(CGFloat)arg0 legibilityStyle:(NSInteger)arg1 tintColor:(id)arg2 hasBusyBackground:(BOOL)arg3 ;
-(id)initWithHeight:(CGFloat)arg0 legibilityStyle:(NSInteger)arg1 tintColor:(id)arg2 hasBusyBackground:(BOOL)arg3 idiom:(NSInteger)arg4 ;
-(id)makeTextFontForStyle:(NSInteger)arg0 ;
-(id)shadowImageForImage:(id)arg0 withIdentifier:(id)arg1 forStyle:(NSInteger)arg2 withStrength:(CGFloat)arg3 ;
-(id)shadowImageForImage:(id)arg0 withIdentifier:(id)arg1 forStyle:(NSInteger)arg2 withStrength:(CGFloat)arg3 inTempGroup:(id)arg4 ;
-(id)shadowImageForImage:(id)arg0 withIdentifier:(id)arg1 forStyle:(NSInteger)arg2 withStrength:(CGFloat)arg3 inTempGroup:(id)arg4 shouldCache:(BOOL)arg5 ;
-(id)textColorForStyle:(NSInteger)arg0 ;
-(id)textFontForStyle:(NSInteger)arg0 ;
-(id)textForNetworkType:(int)arg0 ;
-(id)uncachedImageNamed:(id)arg0 ;
-(id)uniqueIdentifier;
-(id)untintedImageNamed:(id)arg0 ;
-(struct CGPoint )positionForMoonMaskInBounds:(struct CGRect )arg0 ;
-(struct UIEdgeInsets )edgeInsetsForBatteryInsides;
-(struct UIEdgeInsets )edgeInsetsForBluetoothBatteryInsides;
-(void)_cacheImage:(id)arg0 named:(id)arg1 ;
-(void)_cacheQueue_cacheImage:(id)arg0 named:(id)arg1 inTempGroup:(id)arg2 groupFullName:(id)arg3 tintColor:(id)arg4 ;
-(void)_drawText:(id)arg0 inRect:(struct CGRect )arg1 withFont:(id)arg2 lineBreakMode:(NSInteger)arg3 letterSpacing:(CGFloat)arg4 textAlignment:(NSInteger)arg5 ;
-(void)cacheImage:(id)arg0 named:(id)arg1 inTempGroup:(id)arg2 ;
-(void)drawBatteryInsidesWithSize:(struct CGSize )arg0 capacity:(int)arg1 style:(NSUInteger)arg2 ;
-(void)drawBatteryInsidesWithSize:(struct CGSize )arg0 capacity:(int)arg1 style:(NSUInteger)arg2 usingTintColor:(BOOL)arg3 ;
-(void)drawBluetoothBatteryInsidesWithSize:(struct CGSize )arg0 capacity:(CGFloat)arg1 ;
-(void)drawText:(id)arg0 forWidth:(CGFloat)arg1 lineBreakMode:(NSInteger)arg2 letterSpacing:(CGFloat)arg3 textAlignment:(NSInteger)arg4 style:(NSInteger)arg5 textSize:(struct CGSize )arg6 textHeight:(CGFloat)arg7 ;
-(void)drawTextInRect:(struct CGRect )arg0 withColor:(id)arg1 withBlock:(id)arg2 ;


@end


#endif