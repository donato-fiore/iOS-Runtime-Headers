// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICLIBRARYAUTHSERVICEBULKCLIENTTOKENRESPONSE_H
#define ICLIBRARYAUTHSERVICEBULKCLIENTTOKENRESPONSE_H

@class NSDictionary, NSMutableDictionary, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface ICLibraryAuthServiceBulkClientTokenResponse : NSObject <NSCopying>

 {
    NSDictionary *_responseDictionary;
    NSMutableDictionary *_parsedTokenResults;
}


@property (readonly, copy, nonatomic) NSString *serverInstance;
@property (readonly, copy, nonatomic) NSDictionary *tokenResults;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithResponseDictionary:(id)arg0 ;
-(id)tokenResultForAccountDSID:(id)arg0 ;


@end


#endif