// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRIGENERICUNIQUEREQUIREDASSETS_H
#define TRIGENERICUNIQUEREQUIREDASSETS_H

@class NSDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TRIGenericUniqueRequiredAssets : NSObject <NSCopying>



@property (readonly, nonatomic) NSDictionary *cloudKit; // ivar: _cloudKit
@property (readonly, nonatomic) NSDictionary *mobileAsset; // ivar: _mobileAsset


+(id)assetsWithCloudKit:(id)arg0 mobileAsset:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToAssets:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithReplacementCloudKit:(id)arg0 ;
-(id)copyWithReplacementMobileAsset:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCloudKit:(id)arg0 mobileAsset:(id)arg1 ;


@end


#endif