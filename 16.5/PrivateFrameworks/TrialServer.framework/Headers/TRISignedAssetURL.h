// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRISIGNEDASSETURL_H
#define TRISIGNEDASSETURL_H

@class NSString, NSURL;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TRISignedAssetURL : NSObject <NSCopying>



@property (readonly, nonatomic) NSString *signature; // ivar: _signature
@property (readonly, nonatomic) NSURL *url; // ivar: _url


+(id)allReferencedCKRecordKeys;
+(id)assetURLFromCKRecord:(id)arg0 assetId:(*id)arg1 ;
+(id)assetURLWithUrl:(id)arg0 signature:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToAssetURL:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithReplacementSignature:(id)arg0 ;
-(id)copyWithReplacementUrl:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithUrl:(id)arg0 signature:(id)arg1 ;


@end


#endif