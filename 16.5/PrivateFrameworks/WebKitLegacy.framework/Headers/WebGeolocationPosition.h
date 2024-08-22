// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WEBGEOLOCATIONPOSITION_H
#define WEBGEOLOCATIONPOSITION_H


#import <Foundation/Foundation.h>

#import "WebGeolocationPositionInternal.h"

@interface WebGeolocationPosition : NSObject {
    WebGeolocationPositionInternal *_internal;
}




-(id)initWithGeolocationPosition:(*void)arg0 ;
-(id)initWithTimestamp:(CGFloat)arg0 latitude:(CGFloat)arg1 longitude:(CGFloat)arg2 accuracy:(CGFloat)arg3 ;
-(void)dealloc;


@end


#endif