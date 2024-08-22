// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFLINKACTIONRUNDESCRIPTOR_H
#define WFLINKACTIONRUNDESCRIPTOR_H

@class LNAction, LNFullyQualifiedActionIdentifier, LNActionMetadata, NSString;


#import "WFWorkflowRunDescriptor.h"

@interface WFLinkActionRunDescriptor : WFWorkflowRunDescriptor

@property (readonly, nonatomic) LNAction *action; // ivar: _action
@property (readonly, nonatomic) LNFullyQualifiedActionIdentifier *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL isAutoShortcut; // ivar: _isAutoShortcut
@property (readonly, nonatomic) LNActionMetadata *metadata; // ivar: _metadata
@property (readonly, nonatomic) NSString *name; // ivar: _name


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 action:(id)arg1 metadata:(id)arg2 ;
-(id)initWithIdentifier:(id)arg0 action:(id)arg1 metadata:(id)arg2 isAutoShortcut:(BOOL)arg3 ;
-(id)initWithIdentifier:(id)arg0 name:(id)arg1 action:(id)arg2 metadata:(id)arg3 isAutoShortcut:(BOOL)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif