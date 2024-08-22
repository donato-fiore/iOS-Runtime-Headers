// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TPSCONTEXTUALEVENTVALIDATION_H
#define TPSCONTEXTUALEVENTVALIDATION_H

@class NSString, TPSContextualEvent, TPSEventsProvider;
@protocol TPSEventsProviderDelegate;


#import "TPSTargetingValidation.h"

@interface TPSContextualEventValidation : TPSTargetingValidation <TPSEventsProviderDelegate>



@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) TPSContextualEvent *event; // ivar: _event
@property (retain, nonatomic) TPSEventsProvider *eventProvider; // ivar: _eventProvider
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_contextualEventFromEventDictionary:(id)arg0 ;
+(id)_eventProviderForContextualEvent:(id)arg0 ;
-(id)initWithContextualEvent:(id)arg0 ;
-(void)dataProvider:(id)arg0 didFinishQueryWithResults:(id)arg1 ;
-(void)dataProvider:(id)arg0 didReceiveCallbackWithResult:(id)arg1 ;
-(void)validateWithCompletion:(id)arg0 ;


@end


#endif