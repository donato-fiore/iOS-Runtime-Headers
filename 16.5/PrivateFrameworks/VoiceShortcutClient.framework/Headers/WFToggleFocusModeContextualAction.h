// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFTOGGLEFOCUSMODECONTEXTUALACTION_H
#define WFTOGGLEFOCUSMODECONTEXTUALACTION_H



#import "WFContextualAction.h"
#import "WFContextualActionCalendarEventDescriptor.h"
#import "WFToggleFocusModeContextualActionFocusMode.h"

@interface WFToggleFocusModeContextualAction : WFContextualAction

@property (readonly, nonatomic) WFContextualActionCalendarEventDescriptor *eventDescriptor; // ivar: _eventDescriptor
@property (readonly, nonatomic) WFToggleFocusModeContextualActionFocusMode *focusMode; // ivar: _focusMode
@property (readonly, nonatomic) NSUInteger operation; // ivar: _operation


+(BOOL)supportsSecureCoding;
+(id)spotlightDomainIdentifier;
+(id)turnOff:(id)arg0 ;
+(id)turnOn:(id)arg0 ;
+(id)turnOn:(id)arg0 untilEventEnds:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFocusMode:(id)arg0 operation:(NSUInteger)arg1 event:(id)arg2 ;
-(id)uniqueIdentifier;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif