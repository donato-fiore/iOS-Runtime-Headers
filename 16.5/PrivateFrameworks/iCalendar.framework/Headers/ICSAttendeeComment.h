// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICSATTENDEECOMMENT_H
#define ICSATTENDEECOMMENT_H

@class NSString;


#import "ICSProperty.h"
#import "ICSDateValue.h"

@interface ICSAttendeeComment : ICSProperty

@property (retain, nonatomic) NSString *x_calendarserver_attendee_ref;
@property (retain, nonatomic) ICSDateValue *x_calendarserver_dtstamp;


-(BOOL)shouldObscureValue;
-(id)initWithComment:(id)arg0 ;
-(id)parametersToObscure;
-(void)setComment:(id)arg0 ;


@end


#endif