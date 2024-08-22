// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICDELEGATIONPLAYINFORESPONSETOKEN_H
#define ICDELEGATIONPLAYINFORESPONSETOKEN_H

@class NSDate, NSString, NSData;

#import <Foundation/Foundation.h>


@interface ICDelegationPlayInfoResponseToken : NSObject

@property (copy, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (copy, nonatomic) NSString *storefrontIdentifier; // ivar: _storefrontIdentifier
@property (copy, nonatomic) NSData *tokenData; // ivar: _tokenData




@end


#endif