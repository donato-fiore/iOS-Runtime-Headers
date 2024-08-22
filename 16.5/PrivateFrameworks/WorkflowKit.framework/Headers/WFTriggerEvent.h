// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFTRIGGEREVENT_H
#define WFTRIGGEREVENT_H

@class WFDatabaseObjectDescriptor, NSDate, NSData, NSString;



@interface WFTriggerEvent : WFDatabaseObjectDescriptor

@property (nonatomic) BOOL confirmed; // ivar: _confirmed
@property (readonly, nonatomic) NSDate *dateCreated; // ivar: _dateCreated
@property (readonly, copy, nonatomic) NSData *eventInfo; // ivar: _eventInfo
@property (readonly, copy, nonatomic) NSString *triggerID; // ivar: _triggerID


-(id)initWithIdentifier:(id)arg0 triggerID:(id)arg1 eventInfo:(id)arg2 confirmed:(BOOL)arg3 dateCreated:(id)arg4 ;


@end


#endif