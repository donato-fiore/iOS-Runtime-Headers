// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UILEGIBILITYCACHEDSHADOW_H
#define _UILEGIBILITYCACHEDSHADOW_H


#import <Foundation/Foundation.h>

#import "_UILegibilitySettings.h"
#import "UIImage.h"

@interface _UILegibilityCachedShadow : NSObject

@property (retain, nonatomic) _UILegibilitySettings *settings; // ivar: _settings
@property (retain, nonatomic) UIImage *shadow; // ivar: _shadow
@property (nonatomic) CGFloat strength; // ivar: _strength


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)matchesSettings:(id)arg0 strength:(CGFloat)arg1 ;
-(void)dealloc;


@end


#endif