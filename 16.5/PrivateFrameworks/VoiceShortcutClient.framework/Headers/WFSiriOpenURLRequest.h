// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFSIRIOPENURLREQUEST_H
#define WFSIRIOPENURLREQUEST_H

@class NSURL, NSString;


#import "WFSiriActionRequest.h"

@interface WFSiriOpenURLRequest : WFSiriActionRequest

@property (readonly, nonatomic) NSURL *URL; // ivar: _URL
@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithURL:(id)arg0 andBundleIdentifier:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif