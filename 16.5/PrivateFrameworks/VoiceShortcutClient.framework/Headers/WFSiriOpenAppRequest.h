// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFSIRIOPENAPPREQUEST_H
#define WFSIRIOPENAPPREQUEST_H

@class NSString;


#import "WFSiriActionRequest.h"

@interface WFSiriOpenAppRequest : WFSiriActionRequest

@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier


+(BOOL)supportsSecureCoding;
-(id)initWithBundleIdentifier:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif