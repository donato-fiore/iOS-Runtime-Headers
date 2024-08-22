// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSASKPERMISSIONACTIONREQUEST_H
#define SSASKPERMISSIONACTIONREQUEST_H

@class NSURL, NSString;
@protocol SSXPCCoding;


#import "SSRequest.h"

@interface SSAskPermissionActionRequest : SSRequest <SSXPCCoding>



@property (readonly, nonatomic) NSURL *URL; // ivar: _url
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)copyXPCEncoding;
-(id)initWithURL:(id)arg0 ;
-(id)initWithXPCEncoding:(id)arg0 ;
-(void)startWithCompletionBlock:(id)arg0 ;


@end


#endif