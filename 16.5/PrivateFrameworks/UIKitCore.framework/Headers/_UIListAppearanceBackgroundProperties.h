// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UILISTAPPEARANCEBACKGROUNDPROPERTIES_H
#define _UILISTAPPEARANCEBACKGROUNDPROPERTIES_H


#import <Foundation/Foundation.h>

#import "UIColor.h"
#import "UIVisualEffect.h"

@interface _UIListAppearanceBackgroundProperties : NSObject

@property (nonatomic) BOOL appliesBackgroundColorWithEffect; // ivar: _appliesBackgroundColorWithEffect
@property (retain, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (retain, nonatomic) UIVisualEffect *backgroundEffect; // ivar: _backgroundEffect
@property (nonatomic) BOOL useTintColorAsBackgroundColor; // ivar: _useTintColorAsBackgroundColor


-(struct _UITableConstantsBackgroundProperties )_tableConstantsPropertiesWithCornerRadius:(CGFloat)arg0 ;


@end


#endif