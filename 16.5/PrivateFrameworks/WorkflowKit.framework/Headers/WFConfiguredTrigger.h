// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFCONFIGUREDTRIGGER_H
#define WFCONFIGUREDTRIGGER_H

@class WFDatabaseObjectDescriptor, NSString;


#import "WFTrigger.h"

@interface WFConfiguredTrigger : WFDatabaseObjectDescriptor

@property (readonly, nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (readonly, nonatomic) int notificationLevel; // ivar: _notificationLevel
@property (readonly, nonatomic) BOOL shouldNotify; // ivar: _shouldNotify
@property (readonly, nonatomic) BOOL shouldPrompt; // ivar: _shouldPrompt
@property (readonly, nonatomic) int source; // ivar: _source
@property (readonly, nonatomic) WFTrigger *trigger; // ivar: _trigger
@property (readonly, nonatomic) NSString *workflowID; // ivar: _workflowID


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 workflowID:(id)arg1 trigger:(id)arg2 shouldPrompt:(BOOL)arg3 shouldNotify:(BOOL)arg4 enabled:(BOOL)arg5 ;
-(id)initWithIdentifier:(id)arg0 workflowID:(id)arg1 trigger:(id)arg2 shouldPrompt:(BOOL)arg3 shouldNotify:(BOOL)arg4 enabled:(BOOL)arg5 triggerSource:(int)arg6 notificationLevel:(int)arg7 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif