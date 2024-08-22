// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _RWIRELAYCLIENTCONNECTION_H
#define _RWIRELAYCLIENTCONNECTION_H

@class NSString;
@protocol _RWIRelayToClientMessageProxy, _RWIRelayClientConnectionDelegate;

#import <Foundation/Foundation.h>


@interface _RWIRelayClientConnection : NSObject <_RWIRelayToClientMessageProxy>

 {
    BOOL _closed;
}


@property (readonly, nonatomic) NSObject<_RWIRelayClientConnectionDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL sleeping; // ivar: _sleeping
@property (copy, nonatomic) NSString *tag; // ivar: _tag


-(id)initWithDelegate:(id)arg0 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)_closeAndNotifyDelegate:(BOOL)arg0 ;
-(void)close;
-(void)closeFromConnection;
-(void)closeInternal;
-(void)dealloc;
-(void)dispatchRelayMessage:(id)arg0 ;
-(void)forwardInvocation:(id)arg0 ;
-(void)sendMessage:(id)arg0 ;


@end


#endif