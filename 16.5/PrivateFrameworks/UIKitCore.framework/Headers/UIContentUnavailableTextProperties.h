// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UICONTENTUNAVAILABLETEXTPROPERTIES_H
#define UICONTENTUNAVAILABLETEXTPROPERTIES_H

@class NSString, UIFont, NSAttributedString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "UIColor.h"

@interface UIContentUnavailableTextProperties : NSObject <NSCopying, NSSecureCoding>

 {
    ? _textFlags;
    BOOL _adjustsFontSizeToFitWidth;
    BOOL _allowsDefaultTighteningForTruncation;
    NSString *_text;
    UIFont *_font;
    UIColor *_color;
    id *_colorTransformer;
    NSInteger _lineBreakMode;
    NSAttributedString *_attributedText;
    NSInteger _numberOfLines;
    CGFloat _minimumScaleFactor;
    NSInteger _colorTransformerIdentifier;
}


@property (nonatomic) BOOL adjustsFontSizeToFitWidth;
@property (nonatomic) BOOL allowsDefaultTighteningForTruncation;
@property (retain, nonatomic) UIColor *color;
@property (copy, nonatomic) id *colorTransformer;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) NSInteger lineBreakMode;
@property (nonatomic) CGFloat minimumScaleFactor;
@property (nonatomic) NSInteger numberOfLines;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)resolvedColor;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif