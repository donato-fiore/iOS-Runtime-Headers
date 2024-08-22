// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUITEXTBADGELAYOUT_H
#define VUITEXTBADGELAYOUT_H

@class UIColor, NSArray;

#import <Foundation/Foundation.h>

#import "VUITextLayout.h"

@interface VUITextBadgeLayout : NSObject

@property (retain, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (nonatomic) NSUInteger badgeKind; // ivar: _badgeKind
@property (nonatomic) int blendMode; // ivar: _blendMode
@property (retain, nonatomic) NSArray *gradientBgColors; // ivar: _gradientBgColors
@property (nonatomic) BOOL isUppercased; // ivar: _isUppercased
@property (nonatomic) CGFloat layerCornerRadius; // ivar: _layerCornerRadius
@property (nonatomic) CGFloat minHeight; // ivar: _minHeight
@property (nonatomic) UIEdgeInsets padding; // ivar: _padding
@property (retain, nonatomic) VUITextLayout *textLayout; // ivar: _textLayout
@property (retain, nonatomic) UIColor *tintColor; // ivar: _tintColor




@end


#endif