// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIPOPOVERBACKGROUNDVISUALEFFECT_H
#define _UIPOPOVERBACKGROUNDVISUALEFFECT_H



#import "UIBlurEffect.h"

@interface _UIPopoverBackgroundVisualEffect : UIBlurEffect

@property (readonly, nonatomic) BOOL tintColorIsTranslucent; // ivar: _tintColorIsTranslucent


+(id)effectWithStyle:(NSInteger)arg0 tint:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)effectSettings;


@end


#endif