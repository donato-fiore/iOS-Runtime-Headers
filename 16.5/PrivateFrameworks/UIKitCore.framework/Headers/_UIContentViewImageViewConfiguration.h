// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UICONTENTVIEWIMAGEVIEWCONFIGURATION_H
#define _UICONTENTVIEWIMAGEVIEWCONFIGURATION_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "UIImage.h"
#import "UIImageSymbolConfiguration.h"
#import "UIColor.h"

@interface _UIContentViewImageViewConfiguration : NSObject <NSCopying, NSSecureCoding>

 {
    ? _configurationFlags;
    UIImage *_image;
    UIImageSymbolConfiguration *_preferredSymbolConfiguration;
    UIColor *_tintColor;
    CGFloat _cornerRadius;
    CGSize _reservedLayoutSize;
    CGSize _maximumSize;
}


@property (nonatomic) CGFloat cornerRadius;
@property (retain, nonatomic) UIImage *highlightedImage; // ivar: _highlightedImage
@property (nonatomic) CGFloat horizontalCenteringWidth;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) CGSize maximumSize;
@property (copy, nonatomic) UIImageSymbolConfiguration *preferredSymbolConfiguration;
@property (nonatomic) CGSize reservedLayoutSize;
@property (retain, nonatomic) UIColor *tintColor;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)applyToImageView:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif