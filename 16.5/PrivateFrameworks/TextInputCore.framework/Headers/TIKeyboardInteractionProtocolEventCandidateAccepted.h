// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TIKEYBOARDINTERACTIONPROTOCOLEVENTCANDIDATEACCEPTED_H
#define TIKEYBOARDINTERACTIONPROTOCOLEVENTCANDIDATEACCEPTED_H

@class TIKeyboardCandidate, NSString, TIDocumentState, TIKeyboardInput;
@protocol TIKeyboardInteractionProtocolEvent;


#import "TIKeyboardInteractionProtocolBase.h"

@interface TIKeyboardInteractionProtocolEventCandidateAccepted : TIKeyboardInteractionProtocolBase <TIKeyboardInteractionProtocolEvent>



@property (readonly, nonatomic) TIKeyboardCandidate *candWord; // ivar: _candWord
@property (readonly, nonatomic) NSInteger candidateIndex; // ivar: _candidateIndex
@property (readonly, nonatomic) NSString *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) TIDocumentState *documentState; // ivar: _documentState
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) TIKeyboardInput *input; // ivar: _input
@property (readonly, nonatomic) NSString *inputStem; // ivar: _inputStem
@property (readonly, nonatomic) BOOL predictionBarHit; // ivar: _predictionBarHit
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL useCandidateSelection; // ivar: _useCandidateSelection


+(BOOL)supportsSecureCoding;
-(id)initWithCandidateAccepted:(id)arg0 withInput:(id)arg1 documentState:(id)arg2 inputContext:(id)arg3 inputStem:(id)arg4 predictionBarHit:(BOOL)arg5 useCandidateSelection:(BOOL)arg6 candidateIndex:(NSInteger)arg7 keyboardState:(id)arg8 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)sendTo:(id)arg0 ;


@end


#endif