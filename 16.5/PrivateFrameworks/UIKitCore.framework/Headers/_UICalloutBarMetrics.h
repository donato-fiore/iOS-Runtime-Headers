// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UICALLOUTBARMETRICS_H
#define _UICALLOUTBARMETRICS_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "UIColor.h"

@interface _UICalloutBarMetrics : NSObject

@property (readonly, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (readonly, nonatomic) NSArray *blurViewBackgroundEffects; // ivar: _blurViewBackgroundEffects
@property (readonly, nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (readonly, nonatomic) BOOL displaySeparators; // ivar: _displaySeparators
@property (readonly, nonatomic) CGFloat horizontalPadding; // ivar: _horizontalPadding
@property (readonly, nonatomic) CGFloat interitemPadding; // ivar: _interitemPadding
@property (nonatomic) BOOL isVerticallyAligned; // ivar: _isVerticallyAligned
@property (readonly, nonatomic) UIColor *separatorColor; // ivar: _separatorColor
@property (readonly, nonatomic) CGFloat verticalPadding; // ivar: _verticalPadding


-(id)init;


@end


#endif