// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WLKCANONICALCONTAINERREQUEST_H
#define WLKCANONICALCONTAINERREQUEST_H

@class NSString;


#import "WLKRequest.h"

@interface WLKCanonicalContainerRequest : WLKRequest

@property (readonly, copy, nonatomic) NSString *canonicalID; // ivar: _canonicalID


-(id)initWithCanonicalID:(id)arg0 ;
-(void)makeRequestWithCompletion:(id)arg0 ;
// -(void)makeRequestWithCompletion:(id)arg0 canonicalType:(unk)arg1  ;


@end


#endif