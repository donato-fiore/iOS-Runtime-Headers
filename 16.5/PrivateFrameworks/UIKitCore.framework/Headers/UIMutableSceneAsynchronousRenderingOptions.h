// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIMUTABLESCENEASYNCHRONOUSRENDERINGOPTIONS_H
#define UIMUTABLESCENEASYNCHRONOUSRENDERINGOPTIONS_H

@class NSArray;


#import "UISceneAsynchronousRenderingOptions.h"

@interface UIMutableSceneAsynchronousRenderingOptions : UISceneAsynchronousRenderingOptions

@property (nonatomic) float renderMaxAPL;
@property (nonatomic) CGFloat renderPeriod;
@property (copy, nonatomic) NSArray *renderTimes;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif