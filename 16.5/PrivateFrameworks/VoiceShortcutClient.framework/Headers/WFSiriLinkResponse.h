// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFSIRILINKRESPONSE_H
#define WFSIRILINKRESPONSE_H

@class LNActionOutput;


#import "WFSiriActionResponse.h"

@interface WFSiriLinkResponse : WFSiriActionResponse

@property (readonly, nonatomic) LNActionOutput *actionOutput; // ivar: _actionOutput


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOutput:(id)arg0 andError:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif