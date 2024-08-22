// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRIGENERICREQUIREDASSETS_H
#define TRIGENERICREQUIREDASSETS_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TRIGenericRequiredAssets : NSObject <NSCopying>



@property (readonly, nonatomic) NSArray *cloudKit; // ivar: _cloudKit
@property (readonly, nonatomic) NSArray *mobileAsset; // ivar: _mobileAsset


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