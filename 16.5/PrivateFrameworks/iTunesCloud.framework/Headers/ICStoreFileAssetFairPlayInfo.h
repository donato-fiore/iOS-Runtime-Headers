// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICSTOREFILEASSETFAIRPLAYINFO_H
#define ICSTOREFILEASSETFAIRPLAYINFO_H

@class NSData, NSDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface ICStoreFileAssetFairPlayInfo : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSData *dpInfoData;
@property (readonly, nonatomic) NSInteger identifier;
@property (readonly, copy, nonatomic) NSData *pinfData;
@property (readonly, copy, nonatomic) NSDictionary *purchaseBundleSinfDictionary;
@property (readonly, copy, nonatomic) NSDictionary *responseSinfDictionary; // ivar: _responseSinfDictionary
@property (readonly, copy, nonatomic) NSData *sinf2Data;
@property (readonly, copy, nonatomic) NSData *sinfData;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithResponseSinfDictionary:(id)arg0 ;


@end


#endif