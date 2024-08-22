// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VUIINAPPMESSAGINGMESSAGETARGETHANDLER_H
#define VUIINAPPMESSAGINGMESSAGETARGETHANDLER_H

@class NSString;
@protocol IAMMessageTarget;

#import <Foundation/Foundation.h>


@interface VUIInAppMessagingMessageTargetHandler : NSObject <IAMMessageTarget>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL shouldBeNotifiedOfNilPriorityMessageAfterRegistration;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *targetIdentifier; // ivar: _targetIdentifier


-(id)init;
-(id)initWithTargetIdentifier:(id)arg0 ;
-(void)messageCoordinator:(id)arg0 didUpdatePriorityMessage:(id)arg1 forTarget:(id)arg2 ;


@end


#endif