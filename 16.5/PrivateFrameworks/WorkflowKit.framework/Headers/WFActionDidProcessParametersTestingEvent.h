// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFACTIONDIDPROCESSPARAMETERSTESTINGEVENT_H
#define WFACTIONDIDPROCESSPARAMETERSTESTINGEVENT_H

@class NSDictionary;


#import "WFActionTestingEvent.h"

@interface WFActionDidProcessParametersTestingEvent : WFActionTestingEvent

@property (readonly, nonatomic) NSDictionary *processedParameters; // ivar: _processedParameters


-(id)initWithAction:(id)arg0 processedParameters:(id)arg1 ;


@end


#endif