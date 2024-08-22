// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSWPSTORAGEBROADCASTER_H
#define TSWPSTORAGEBROADCASTER_H


#import <Foundation/Foundation.h>


@interface TSWPStorageBroadcaster : NSObject {
    set<id<TSWPStorageObserver>, std::less<id<TSWPStorageObserver>>, std::allocator<id<TSWPStorageObserver>>> _observers;
}




-(void)addObserver:(id)arg0 ;
-(void)broadcastStorage:(id)arg0 didChangeRange:(struct _NSRange )arg1 delta:(NSInteger)arg2 broadcastKind:(int)arg3 ;
-(void)dealloc;
-(void)removeAllObservers;
-(void)removeObserver:(id)arg0 ;


@end


#endif