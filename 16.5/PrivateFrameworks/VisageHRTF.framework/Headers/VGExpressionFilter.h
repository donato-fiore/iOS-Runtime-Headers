// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VGEXPRESSIONFILTER_H
#define VGEXPRESSIONFILTER_H


#import <Foundation/Foundation.h>


@interface VGExpressionFilter : NSObject



+(float)clip_to_01:(float)arg0 min_val:(float)arg1 max_val:(float)arg2 ;
+(id)getBlendshapes:(id)arg0 ;
-(float)filter:(id)arg0 ;


@end


#endif