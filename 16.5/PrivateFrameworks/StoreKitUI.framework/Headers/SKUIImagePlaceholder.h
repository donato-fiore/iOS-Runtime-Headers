// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIIMAGEPLACEHOLDER_H
#define SKUIIMAGEPLACEHOLDER_H

@class UIColor;

#import <Foundation/Foundation.h>


@interface SKUIImagePlaceholder : NSObject

@property (readonly, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (readonly, nonatomic) UIColor *borderColor; // ivar: _borderColor
@property (readonly, nonatomic) CGFloat borderWidth; // ivar: _borderWidth
@property (readonly, copy, nonatomic) id *cornerPathBlock; // ivar: _cornerPathBlock


-(id)initWithBackgroundColor:(id)arg0 borderColor:(id)arg1 borderWidth:(CGFloat)arg2 cornerPathBlock:(id)arg3 ;
-(id)initWithBackgroundColor:(id)arg0 borderColor:(id)arg1 borderWidth:(CGFloat)arg2 cornerRadius:(CGFloat)arg3 ;


@end


#endif