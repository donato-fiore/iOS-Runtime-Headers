// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBTRAITSSCENEORIENTATIONREQUESTASSISTANT_H
#define SBTRAITSSCENEORIENTATIONREQUESTASSISTANT_H

@class NSString;
@protocol BSInvalidatable;

#import <Foundation/Foundation.h>

#import "SBTraitsSceneParticipantDelegate.h"

@interface SBTraitsSceneOrientationRequestAssistant : NSObject <BSInvalidatable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) NSString *errorDomain; // ivar: _errorDomain
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) SBTraitsSceneParticipantDelegate *traitsDelegate; // ivar: _traitsDelegate


-(id)initWithTraitsSceneDelegate:(id)arg0 errorDomain:(id)arg1 ;
-(void)_performCoalescedBroadcastArbitrationUpdateWithReason:(id)arg0 ;
-(void)_startSceneOrientationRequestWithDesiredOrientations:(NSUInteger)arg0 error:(*id)arg1 ;
-(void)checkValidityAgainstUpdateReasons:(NSInteger)arg0 ;
-(void)invalidate;
-(void)setUpForTransitionContextIfNeeded:(id)arg0 ;


@end


#endif