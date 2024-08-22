// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFSIRIUSERACTIVITYREQUEST_H
#define WFSIRIUSERACTIVITYREQUEST_H

@class NSString, NSUserActivity, NSData;


#import "WFSiriActionRequest.h"

@interface WFSiriUserActivityRequest : WFSiriActionRequest

@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, nonatomic) NSUserActivity *userActivity;
@property (retain, nonatomic) NSData *userActivityData; // ivar: _userActivityData


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUserActivityData:(id)arg0 andBundleIdentifier:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif