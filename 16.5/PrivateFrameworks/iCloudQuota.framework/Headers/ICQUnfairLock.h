// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICQUNFAIRLOCK_H
#define ICQUNFAIRLOCK_H


#import <Foundation/Foundation.h>


@interface ICQUnfairLock : NSObject {
    os_unfair_lock_s _lock;
}




-(id)init;
-(void)synchronized:(id)arg0 ;


@end


#endif