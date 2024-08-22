// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKAOUTGOINGINVITATIONSTATE_H
#define SKAOUTGOINGINVITATIONSTATE_H

@class NSString, SKHandle;

#import <Foundation/Foundation.h>


@interface SKAOutgoingInvitationState : NSObject

@property (retain, nonatomic) NSString *channelIdentifier; // ivar: _channelIdentifier
@property (retain, nonatomic) SKHandle *fromHandle; // ivar: _fromHandle
@property (retain, nonatomic) SKHandle *toHandle; // ivar: _toHandle


-(id)initWithToHandle:(id)arg0 fromHandle:(id)arg1 channelIdentifier:(id)arg2 ;


@end


#endif