// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UICONTENTVIEWLABELCONFIGURATION_H
#define _UICONTENTVIEWLABELCONFIGURATION_H

@class NSString, UIFont, NSAttributedString;
@protocol _UIListContentTextPropertiesInternal, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "UIColor.h"

@interface _UIContentViewLabelConfiguration : NSObject <_UIListContentTextPropertiesInternal, NSCopying, NSSecureCoding>

 {
    ? _configurationFlags;
    BOOL _adjustsFontSizeToFitWidth;
    BOOL _allowsDefaultTighteningForTruncation;
    BOOL _adjustsFontForContentSizeCategory;
    NSString *_text;
    UIFont *_font;
    UIColor *_textColor;
    NSInteger _textAlignment;
    NSInteger _lineBreakMode;
    NSAttributedString *_attributedText;
    NSInteger _numberOfLines;
    CGFloat _minimumScaleFactor;
}


@property (readonly, nonatomic) NSInteger _effectiveTextAlignment;
@property (readonly, nonatomic) BOOL _hasNonEmptyPlainTextOnly;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (nonatomic) BOOL adjustsFontSizeToFitWidth;
@property (nonatomic) BOOL allowsDefaultTighteningForTruncation;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *highlightedTextColor; // ivar: _highlightedTextColor
@property (nonatomic) NSInteger lineBreakMode;
@property (nonatomic) CGFloat minimumScaleFactor;
@property (nonatomic) NSInteger numberOfLines;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) NSInteger textAlignment;
@property (retain, nonatomic) UIColor *textColor;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)applyToLabel:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif