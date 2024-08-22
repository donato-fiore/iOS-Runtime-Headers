// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TUDELEGATECONTROLLER_H
#define TUDELEGATECONTROLLER_H

@class NSMapTable;

#import <Foundation/Foundation.h>


@interface TUDelegateController : NSObject

@property (readonly, nonatomic) os_unfair_lock_s delegateLock; // ivar: _delegateLock
@property (readonly, nonatomic) NSMapTable *delegateToQueue; // ivar: _delegateToQueue


-(id)init;
-(void)addDelegate:(id)arg0 queue:(id)arg1 ;
-(void)enumerateDelegatesUsingBlock:(id)arg0 ;
-(void)removeDelegate:(id)arg0 ;


@end


#endif