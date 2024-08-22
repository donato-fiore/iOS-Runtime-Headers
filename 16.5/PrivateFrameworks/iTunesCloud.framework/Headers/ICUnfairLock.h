// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICUNFAIRLOCK_H
#define ICUNFAIRLOCK_H


#import <Foundation/Foundation.h>


@interface ICUnfairLock : NSObject {
    os_unfair_lock_s _lock;
}




-(id)init;
-(void)lock;
-(void)lockWithBlock:(id)arg0 ;
-(void)unlock;


@end


#endif