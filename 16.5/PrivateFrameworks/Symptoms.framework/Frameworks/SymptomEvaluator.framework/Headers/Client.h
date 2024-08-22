// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLIENT_H
#define CLIENT_H

@class NSXPCConnection, NSMutableSet;

#import <Foundation/Foundation.h>


@interface Client : NSObject {
    NSInteger _activeMessageCount;
    NSInteger _barrierMessageCount;
    NSInteger _droppedMessageCount;
    BOOL _shouldSendMessages;
    BOOL _forceUpdateOnWake;
}


@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (retain, nonatomic) NSMutableSet *subscribedNOIs; // ivar: _subscribedNOIs


-(BOOL)_shouldSendMessages;
-(id)description;
-(id)initWithConn:(id)arg0 ;
-(void)_decrementMessageCounter:(NSInteger)arg0 ;
-(void)_incrementMessageCounter:(NSInteger)arg0 ;
-(void)_sendBarrierIfNecessaryWithBlock:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif