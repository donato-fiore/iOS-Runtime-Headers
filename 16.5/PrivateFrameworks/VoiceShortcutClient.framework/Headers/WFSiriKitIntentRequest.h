// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFSIRIKITINTENTREQUEST_H
#define WFSIRIKITINTENTREQUEST_H

@class INIntent;


#import "WFSiriActionRequest.h"

@interface WFSiriKitIntentRequest : WFSiriActionRequest

@property (readonly, nonatomic) INIntent *intent; // ivar: _intent


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIntent:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif