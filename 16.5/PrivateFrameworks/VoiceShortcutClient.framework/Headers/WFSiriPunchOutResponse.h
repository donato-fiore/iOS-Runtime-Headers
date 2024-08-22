// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFSIRIPUNCHOUTRESPONSE_H
#define WFSIRIPUNCHOUTRESPONSE_H



#import "WFSiriActionResponse.h"

@interface WFSiriPunchOutResponse : WFSiriActionResponse

@property (readonly, nonatomic) BOOL shouldPunchOut; // ivar: _shouldPunchOut


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithShouldPunchOut:(BOOL)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif