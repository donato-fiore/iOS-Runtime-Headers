// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIBARBACKGROUNDLAYOUT_H
#define _UIBARBACKGROUNDLAYOUT_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "UIColor.h"
#import "UIImage.h"
#import "UIVibrancyEffect.h"

@interface _UIBarBackgroundLayout : NSObject <NSCopying>



@property (nonatomic) CGFloat backgroundAlpha; // ivar: _backgroundAlpha
@property (nonatomic) CGFloat backgroundHeight1; // ivar: _backgroundHeight1
@property (nonatomic) CGFloat backgroundHeight2; // ivar: _backgroundHeight2
@property (nonatomic) CGFloat backgroundTransitionProgress; // ivar: _backgroundTransitionProgress
@property (readonly, nonatomic) CGFloat bg1Alpha;
@property (readonly, nonatomic) UIColor *bg1Color;
@property (readonly, nonatomic) NSArray *bg1Effects;
@property (readonly, nonatomic) BOOL bg1HasShadow;
@property (readonly, nonatomic) UIImage *bg1Image;
@property (readonly, nonatomic) CGFloat bg1ImageAlpha;
@property (readonly, nonatomic) NSInteger bg1ImageMode;
@property (readonly, nonatomic) CGFloat bg1ShadowAlpha;
@property (readonly, nonatomic) UIColor *bg1ShadowColor;
@property (readonly, nonatomic) UIVibrancyEffect *bg1ShadowEffect; // ivar: _bg1ShadowEffect
@property (readonly, nonatomic) UIImage *bg1ShadowImage;
@property (readonly, nonatomic) UIColor *bg1ShadowTint;
@property (readonly, nonatomic) CGFloat bg2Alpha;
@property (readonly, nonatomic) UIColor *bg2Color;
@property (readonly, nonatomic) NSArray *bg2Effects;
@property (readonly, nonatomic) BOOL bg2Enabled;
@property (readonly, nonatomic) BOOL bg2HasShadow;
@property (readonly, nonatomic) UIImage *bg2Image;
@property (readonly, nonatomic) NSInteger bg2ImageMode;
@property (readonly, nonatomic) CGFloat bg2ShadowAlpha;
@property (readonly, nonatomic) UIColor *bg2ShadowColor;
@property (readonly, nonatomic) UIVibrancyEffect *bg2ShadowEffect; // ivar: _bg2ShadowEffect
@property (readonly, nonatomic) UIImage *bg2ShadowImage;
@property (readonly, nonatomic) UIColor *bg2ShadowTint;
@property (readonly, nonatomic) CGFloat bgInset;
@property (nonatomic) BOOL disableTinting; // ivar: _disableTinting
@property (nonatomic) NSInteger interfaceIdiom; // ivar: _interfaceIdiom
@property (nonatomic) NSInteger interfaceStyle; // ivar: _interfaceStyle
@property (nonatomic) CGFloat shadowAlpha; // ivar: _shadowAlpha
@property (nonatomic) BOOL shadowHidden; // ivar: _shadowHidden
@property (readonly, nonatomic) BOOL shouldUseExplicitGeometry;
@property (readonly, nonatomic) CGFloat topInset;
@property (nonatomic) BOOL useExplicitGeometry; // ivar: _useExplicitGeometry


-(BOOL)bg2HasHeight;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithLayout:(id)arg0 ;
-(void)describeInto:(id)arg0 ;


@end


#endif