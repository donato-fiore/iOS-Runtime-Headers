// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFAUTOMATORWORKFLOWMIGRATIONERROREVENT_H
#define WFAUTOMATORWORKFLOWMIGRATIONERROREVENT_H

@class NSString;


#import "WFEvent.h"

@interface WFAutomatorWorkflowMigrationErrorEvent : WFEvent

@property (copy, nonatomic) NSString *automatorActionIdentifier; // ivar: _automatorActionIdentifier
@property (copy, nonatomic) NSString *errorDescription; // ivar: _errorDescription
@property (copy, nonatomic) NSString *key; // ivar: _key


+(Class)codableEventClass;


@end


#endif