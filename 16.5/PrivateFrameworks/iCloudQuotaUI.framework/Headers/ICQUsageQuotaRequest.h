// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICQUSAGEQUOTAREQUEST_H
#define ICQUSAGEQUOTAREQUEST_H

@class AARequest, ACAccount, ACAccountStore;



@interface ICQUsageQuotaRequest : AARequest

@property (retain, nonatomic) ACAccount *account; // ivar: _account
@property (retain, nonatomic) ACAccountStore *accountStore; // ivar: _accountStore


+(void)addHeadersForPrimaryAccountToRequest:(id)arg0 ;
+(void)addHeadersToRequest:(id)arg0 forAccount:(id)arg1 ;
-(id)initWithAccount:(id)arg0 accountStore:(id)arg1 URLString:(id)arg2 ;
-(id)urlRequest;


@end


#endif