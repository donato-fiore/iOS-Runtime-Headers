// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIBACKDROPCOLORSETTINGS_H
#define _UIBACKDROPCOLORSETTINGS_H


#import <Foundation/Foundation.h>

#import "UIColor.h"
#import "_UIBackdropViewSettings.h"

@interface _UIBackdropColorSettings : NSObject

@property (nonatomic) CGFloat averageBrightness;
@property (nonatomic) CGFloat averageHue;
@property (nonatomic) CGFloat averageSaturation;
@property (readonly, nonatomic) UIColor *color;
@property (nonatomic) CGFloat contrast;
@property (nonatomic) BOOL hasObservedValues; // ivar: _hasObservedValues
@property (nonatomic) _UIBackdropViewSettings *parentSettings; // ivar: _parentSettings


-(BOOL)applyCABackdropLayerStatistics:(id)arg0 ;
-(void)setDefaultValues;
-(void)setValuesFromModel:(id)arg0 ;


@end


#endif