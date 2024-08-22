// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFACTIONDIDRUNTESTINGEVENT_H
#define WFACTIONDIDRUNTESTINGEVENT_H

@class WFContentCollection;


#import "WFActionTestingEvent.h"

@interface WFActionDidRunTestingEvent : WFActionTestingEvent

@property (readonly, nonatomic) WFContentCollection *output; // ivar: _output


-(id)initWithAction:(id)arg0 output:(id)arg1 ;


@end


#endif