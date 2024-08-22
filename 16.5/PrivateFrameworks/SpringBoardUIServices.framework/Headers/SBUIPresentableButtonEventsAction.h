// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBUIPRESENTABLEBUTTONEVENTSACTION_H
#define SBUIPRESENTABLEBUTTONEVENTSACTION_H

@class BSAction, NSString;
@protocol SBUIPresentableButtonEventsAssertion;



@interface SBUIPresentableButtonEventsAction : BSAction <SBUIPresentableButtonEventsAssertion>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger presentableButtonEvent;
@property (readonly, copy, nonatomic) NSString *reason; // ivar: _reason
@property (readonly) Class superclass;


-(BOOL)_expectsResponse;
-(id)_descriptionBuilderWithMultilinePrefix:(id)arg0 debug:(BOOL)arg1 ;
-(id)initWithButtonEvent:(NSInteger)arg0 reason:(id)arg1 handler:(id)arg2 ;
-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;
-(void)handleButtonEvent;
-(void)invalidate;


@end


#endif