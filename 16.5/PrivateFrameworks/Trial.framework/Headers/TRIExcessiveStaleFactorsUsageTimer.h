// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRIEXCESSIVESTALEFACTORSUSAGETIMER_H
#define TRIEXCESSIVESTALEFACTORSUSAGETIMER_H

@class _PASLock;

#import <Foundation/Foundation.h>


@interface TRIExcessiveStaleFactorsUsageTimer : NSObject {
    _PASLock *_lock;
}




-(id)initWithNamespaceName:(id)arg0 delayTimeInSeconds:(CGFloat)arg1 block:(id)arg2 ;
-(void)invalidate;


@end


#endif