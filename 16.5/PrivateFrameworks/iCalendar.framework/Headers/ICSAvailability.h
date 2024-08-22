// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICSAVAILABILITY_H
#define ICSAVAILABILITY_H

@class NSString, NSURL;


#import "ICSComponent.h"
#import "ICSDate.h"
#import "ICSDuration.h"
#import "ICSUserAddress.h"

@interface ICSAvailability : ICSComponent

@property (retain) ICSDate *created;
@property (retain) ICSDate *dtend;
@property (retain) ICSDate *dtstamp;
@property (retain) ICSDate *dtstart;
@property (retain) ICSDuration *duration;
@property (retain) ICSDate *last_modified;
@property (retain) ICSUserAddress *organizer;
@property NSUInteger sequence;
@property (retain) NSString *summary;
@property (retain) NSString *uid;
@property (retain) NSURL *url;


+(id)name;


@end


#endif