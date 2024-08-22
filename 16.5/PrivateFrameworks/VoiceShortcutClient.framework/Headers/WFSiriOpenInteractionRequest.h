// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFSIRIOPENINTERACTIONREQUEST_H
#define WFSIRIOPENINTERACTIONREQUEST_H

@class INInteraction;


#import "WFSiriActionRequest.h"

@interface WFSiriOpenInteractionRequest : WFSiriActionRequest

@property (readonly, nonatomic) INInteraction *interaction; // ivar: _interaction


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInteraction:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif