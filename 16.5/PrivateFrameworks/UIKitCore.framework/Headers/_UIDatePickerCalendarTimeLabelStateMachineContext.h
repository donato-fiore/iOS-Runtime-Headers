// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIDATEPICKERCALENDARTIMELABELSTATEMACHINECONTEXT_H
#define _UIDATEPICKERCALENDARTIMELABELSTATEMACHINECONTEXT_H


#import <Foundation/Foundation.h>


@interface _UIDatePickerCalendarTimeLabelStateMachineContext : NSObject {
    id *_updateHandler;
}


@property (readonly, nonatomic) NSUInteger currentState; // ivar: _currentState
@property (readonly, nonatomic) *NSUInteger currentStateRef;
@property (nonatomic) BOOL isFirstResponder; // ivar: _isFirstResponder
@property (readonly, nonatomic) NSUInteger lastDistinctState; // ivar: _lastDistinctState
@property (readonly, nonatomic) NSUInteger previousState; // ivar: _previousState


-(BOOL)currentSateCanTransitionWithEvents:(id)arg0 ;
-(id)initWithUpdateHandler:(id)arg0 ;
-(void)_updateFromState:(NSUInteger)arg0 ;


@end


#endif