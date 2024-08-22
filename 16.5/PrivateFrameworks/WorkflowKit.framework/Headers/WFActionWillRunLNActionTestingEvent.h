// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFACTIONWILLRUNLNACTIONTESTINGEVENT_H
#define WFACTIONWILLRUNLNACTIONTESTINGEVENT_H

@class LNAction;


#import "WFActionTestingEvent.h"

@interface WFActionWillRunLNActionTestingEvent : WFActionTestingEvent

@property (readonly, nonatomic) LNAction *lnAction; // ivar: _lnAction


-(id)initWithAction:(id)arg0 lnAction:(id)arg1 ;


@end


#endif