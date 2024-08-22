// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICSFREEBUSY_H
#define ICSFREEBUSY_H

@class NSArray, NSString;


#import "ICSComponent.h"
#import "ICSDate.h"
#import "ICSDuration.h"
#import "ICSUserAddress.h"

@interface ICSFreeBusy : ICSComponent

@property (retain) NSArray *attendee;
@property (retain) ICSDate *created;
@property (retain) ICSDate *dtend;
@property (retain) ICSDate *dtstamp;
@property (retain) ICSDate *dtstart;
@property (retain) ICSDuration *duration;
@property (retain, nonatomic) NSArray *freebusy;
@property (retain) ICSUserAddress *organizer;
@property (retain) NSString *summary;
@property (retain) NSString *uid;
@property (retain, nonatomic) NSString *x_calendarserver_extended_freebusy;
@property (retain, nonatomic) NSString *x_calendarserver_mask_uid;


+(id)name;


@end


#endif