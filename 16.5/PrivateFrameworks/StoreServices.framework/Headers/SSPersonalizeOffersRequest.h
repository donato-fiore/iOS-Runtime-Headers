// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSPERSONALIZEOFFERSREQUEST_H
#define SSPERSONALIZEOFFERSREQUEST_H

@class NSArray, NSString;
@protocol SSXPCCoding, SSPersonalizeOffersDelegate;


#import "SSRequest.h"

@interface SSPersonalizeOffersRequest : SSRequest <SSXPCCoding>

 {
    NSArray *_items;
}


@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<SSPersonalizeOffersDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *items;
@property (readonly) Class superclass;


-(BOOL)start;
-(id)copyXPCEncoding;
-(id)initWithItems:(id)arg0 ;
-(id)initWithXPCEncoding:(id)arg0 ;
-(void)dealloc;
-(void)startWithCompletionBlock:(id)arg0 ;
-(void)startWithPersonalizedResponseBlock:(id)arg0 ;


@end


#endif