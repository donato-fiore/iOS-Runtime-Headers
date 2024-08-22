// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIMONOGRAMVIEWCONFIGURATION_H
#define VUIMONOGRAMVIEWCONFIGURATION_H

@class UIColor, UIImage;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface VUIMonogramViewConfiguration : NSObject <NSCopying>



@property (retain, nonatomic) UIColor *focusedBgColor; // ivar: _focusedBgColor
@property (nonatomic) CGFloat focusedShadowAlpha; // ivar: _focusedShadowAlpha
@property (retain, nonatomic) UIImage *focusedShadowImage; // ivar: _focusedShadowImage
@property (nonatomic) CGFloat focusedSizeIncrease; // ivar: _focusedSizeIncrease
@property (nonatomic) NSInteger style; // ivar: _style
@property (retain, nonatomic) UIColor *subtitleFocusedColor; // ivar: _subtitleFocusedColor
@property (nonatomic) NSInteger subtitleTextStyle; // ivar: _subtitleTextStyle
@property (retain, nonatomic) UIColor *subtitleUnfocusedColor; // ivar: _subtitleUnfocusedColor
@property (retain, nonatomic) UIColor *titleFocusedColor; // ivar: _titleFocusedColor
@property (nonatomic) NSInteger titleTextStyle; // ivar: _titleTextStyle
@property (retain, nonatomic) UIColor *titleUnfocusedColor; // ivar: _titleUnfocusedColor
@property (retain, nonatomic) UIColor *unfocusedBgColor; // ivar: _unfocusedBgColor
@property (readonly, nonatomic) CGFloat unfocusedImageAlpha;
@property (nonatomic) CGFloat unfocusedShadowAlpha; // ivar: _unfocusedShadowAlpha
@property (retain, nonatomic) UIImage *unfocusedShadowImage; // ivar: _unfocusedShadowImage


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithShadowImages:(BOOL)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 ;


@end


#endif