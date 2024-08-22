// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TULOCKED_H
#define TULOCKED_H


#import <Foundation/Foundation.h>


@interface TULocked : NSObject {
    os_unfair_recursive_lock_s _lock;
    id *_object;
}




-(id)debugDescription;
-(id)description;
-(id)initWithObject:(id)arg0 ;
-(id)object;
-(struct os_unfair_recursive_lock_s *)unfairLockForTesting;
-(void)performWhileLocked:(id)arg0 ;
-(void)setObject:(id)arg0 ;


@end


#endif