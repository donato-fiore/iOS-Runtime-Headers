// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WKLAYEREDSTRIPEWALLPAPERINPUT_H
#define WKLAYEREDSTRIPEWALLPAPERINPUT_H

@class UIColor, NSString, NADescriptionBuilder;
@protocol WKDescribable, NAIdentifiable, NSCopying;

#import <Foundation/Foundation.h>


@interface WKLayeredStripeWallpaperInput : NSObject <WKDescribable, NAIdentifiable, NSCopying>



@property (readonly, copy, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *description;
@property (readonly, nonatomic) id *descriptionBuilderBlock;
@property (readonly, nonatomic) CGFloat firstStripeOffsetScaleFactor; // ivar: _firstStripeOffsetScaleFactor
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat stripeAngleDegrees; // ivar: _stripeAngleDegrees
@property (readonly, nonatomic) CGFloat stripeHeightFactor; // ivar: _stripeHeightFactor
@property (readonly) Class superclass;
@property (readonly, nonatomic) NADescriptionBuilder *wk_descriptionBuilder;


+(id)na_identity;
+(id)new;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithBackgroundColor:(id)arg0 stripeAngleDegrees:(CGFloat)arg1 stripeHeightFactor:(CGFloat)arg2 firstStripeOffsetScaleFactor:(CGFloat)arg3 ;


@end


#endif