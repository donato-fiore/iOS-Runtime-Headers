// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TIKEYBOARDINTERACTIONPROTOCOLEVENTACCEPTINGCANDIDATEWITHTRIGGER_H
#define TIKEYBOARDINTERACTIONPROTOCOLEVENTACCEPTINGCANDIDATEWITHTRIGGER_H

@class NSString;
@protocol TIKeyboardInteractionProtocolEvent;


#import "TIKeyboardInteractionProtocolBase.h"

@interface TIKeyboardInteractionProtocolEventAcceptingCandidateWithTrigger : TIKeyboardInteractionProtocolBase <TIKeyboardInteractionProtocolEvent>



@property (readonly, nonatomic) NSString *candidateAcceptedTrigger; // ivar: _candidateAcceptedTrigger
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)initWithCandidateAcceptedTrigger:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)sendTo:(id)arg0 ;


@end


#endif