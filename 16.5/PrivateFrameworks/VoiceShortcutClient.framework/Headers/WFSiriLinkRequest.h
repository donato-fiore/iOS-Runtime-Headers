// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFSIRILINKREQUEST_H
#define WFSIRILINKREQUEST_H

@class LNAction, NSString;


#import "WFSiriActionRequest.h"

@interface WFSiriLinkRequest : WFSiriActionRequest

@property (readonly, nonatomic) LNAction *action; // ivar: _action
@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, copy, nonatomic) NSString *nameOverride; // ivar: _nameOverride
@property (readonly, nonatomic) BOOL showWhenRun; // ivar: _showWhenRun


+(BOOL)supportsSecureCoding;
-(id)initWithAction:(id)arg0 bundleIdentifier:(id)arg1 nameOverride:(id)arg2 showWhenRun:(BOOL)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif