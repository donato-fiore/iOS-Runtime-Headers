// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFWORKFLOWRUNEVENT_H
#define WFWORKFLOWRUNEVENT_H

@class WFDatabaseObjectDescriptor, NSDate, NSString;


#import "WFWorkflowReference.h"

@interface WFWorkflowRunEvent : WFDatabaseObjectDescriptor

@property (readonly, nonatomic) NSDate *date; // ivar: _date
@property (readonly, nonatomic) NSInteger outcome; // ivar: _outcome
@property (readonly, nonatomic) NSString *source; // ivar: _source
@property (readonly, copy, nonatomic) NSString *triggerID; // ivar: _triggerID
@property (readonly, nonatomic) WFWorkflowReference *workflow; // ivar: _workflow


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 workflow:(id)arg1 source:(id)arg2 date:(id)arg3 triggerID:(id)arg4 outcome:(NSInteger)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif