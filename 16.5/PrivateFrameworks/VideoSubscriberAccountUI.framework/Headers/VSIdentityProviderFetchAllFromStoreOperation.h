// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VSIDENTITYPROVIDERFETCHALLFROMSTOREOPERATION_H
#define VSIDENTITYPROVIDERFETCHALLFROMSTOREOPERATION_H

@class VSAsyncOperation, VSAuditToken, NSOperationQueue, VSOptional;



@interface VSIdentityProviderFetchAllFromStoreOperation : VSAsyncOperation

@property (copy, nonatomic) VSAuditToken *auditToken; // ivar: _auditToken
@property (retain, nonatomic) NSOperationQueue *privateQueue; // ivar: _privateQueue
@property (retain, nonatomic) VSOptional *result; // ivar: _result


-(id)init;
-(void)cancel;
-(void)executionDidBegin;


@end


#endif