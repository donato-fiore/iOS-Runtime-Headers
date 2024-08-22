// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VKTIMER_H
#define VKTIMER_H

@protocol OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface VKTimer : NSObject {
    NSObject<OS_dispatch_source> *_source;
}


@property (readonly, nonatomic) CGFloat nextFireDate; // ivar: _nextFireDate


-(id)initWithTarget:(id)arg0 selector:(SEL)arg1 queue:(id)arg2 ;
-(void)dealloc;
-(void)disable;
-(void)fireAfter:(CGFloat)arg0 ;
-(void)invalidate;


@end


#endif