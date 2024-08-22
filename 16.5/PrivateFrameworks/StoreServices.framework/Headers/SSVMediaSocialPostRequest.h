// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSVMEDIASOCIALPOSTREQUEST_H
#define SSVMEDIASOCIALPOSTREQUEST_H

@class NSString;
@protocol SSXPCCoding;


#import "SSRequest.h"
#import "SSVMediaSocialPostDescription.h"

@interface SSVMediaSocialPostRequest : SSRequest <SSXPCCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SSVMediaSocialPostDescription *postDescription; // ivar: _postDescription
@property (readonly) Class superclass;


-(id)copyXPCEncoding;
-(id)initWithPostDescription:(id)arg0 ;
-(id)initWithXPCEncoding:(id)arg0 ;
-(void)startWithCompletionBlock:(id)arg0 ;


@end


#endif