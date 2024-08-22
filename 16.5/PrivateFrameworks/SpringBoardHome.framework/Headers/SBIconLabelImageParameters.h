// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBICONLABELIMAGEPARAMETERS_H
#define SBICONLABELIMAGEPARAMETERS_H

@class NSString, UIColor, UIFont;
@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface SBIconLabelImageParameters : NSObject <NSCopying, NSMutableCopying>

 {
    BOOL _recalculateHash;
    BOOL _colorspaceGrayscale;
    BOOL _colorspaceGrayscaleSet;
    NSString *_iconLocation;
    NSUInteger _hash;
}


@property (readonly, nonatomic, getter=isAccessibilityReduceTransparencyEnabled) BOOL accessibilityReduceTransparencyEnabled; // ivar: _accessibilityReduceTransparencyEnabled
@property (readonly, nonatomic) BOOL canTighten; // ivar: _canTighten
@property (readonly, nonatomic) BOOL canTruncate; // ivar: _canTruncate
@property (readonly, nonatomic, getter=isColorspaceGrayscale) BOOL colorspaceGrayscale;
@property (readonly, nonatomic) BOOL containsEmoji; // ivar: _containsEmoji
@property (readonly, copy, nonatomic) NSString *contentSizeCategory; // ivar: _contentSizeCategory
@property (readonly, nonatomic) UIColor *focusHighlightColor; // ivar: _focusHighlightColor
@property (readonly, nonatomic) UIFont *font; // ivar: _font
@property (readonly, nonatomic) UIEdgeInsets fontLanguageInsets; // ivar: _fontLanguageInsets
@property (readonly, nonatomic) NSInteger legibilityStyle; // ivar: _legibilityStyle
@property (readonly, nonatomic) CGSize maxSize; // ivar: _maxSize
@property (readonly, nonatomic) CGFloat scale; // ivar: _scale
@property (readonly, copy, nonatomic) NSString *text; // ivar: _text
@property (readonly, nonatomic) UIColor *textColor; // ivar: _textColor
@property (readonly, nonatomic) UIEdgeInsets textInsets; // ivar: _textInsets


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithParameters:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)_noteNeedsHashRecalculation;


@end


#endif