// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VSFEATUREDIDENTITYPROVIDERLIMITINGOPERATION_H
#define VSFEATUREDIDENTITYPROVIDERLIMITINGOPERATION_H

@class VSAsyncOperation, NSOperationQueue, VSOptional, NSArray;



@interface VSFeaturedIdentityProviderLimitingOperation : VSAsyncOperation

@property (retain, nonatomic) NSOperationQueue *privateQueue; // ivar: _privateQueue
@property (retain, nonatomic) VSOptional *result; // ivar: _result
@property (copy, nonatomic) NSArray *unlimitedIdentityProviders; // ivar: _unlimitedIdentityProviders


-(id)init;
-(void)executionDidBegin;


@end


#endif