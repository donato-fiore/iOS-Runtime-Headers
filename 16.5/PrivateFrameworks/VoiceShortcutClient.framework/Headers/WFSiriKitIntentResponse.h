// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFSIRIKITINTENTRESPONSE_H
#define WFSIRIKITINTENTRESPONSE_H

@class INInteraction;


#import "WFSiriActionResponse.h"

@interface WFSiriKitIntentResponse : WFSiriActionResponse

@property (readonly, nonatomic) INInteraction *interaction; // ivar: _interaction


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInteraction:(id)arg0 andError:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif