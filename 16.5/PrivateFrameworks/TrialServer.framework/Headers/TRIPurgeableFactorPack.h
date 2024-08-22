// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRIPURGEABLEFACTORPACK_H
#define TRIPURGEABLEFACTORPACK_H

@class NSString<TRIFactorPackId>, NSString, NSSet;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TRIPurgeableFactorPack : NSObject <NSCopying>



@property (readonly, nonatomic) NSString<TRIFactorPackId> *factorPackId; // ivar: _factorPackId
@property (readonly, nonatomic) NSString *namespaceName; // ivar: _namespaceName
@property (readonly, nonatomic) NSSet *purgeableAssetFactorNames; // ivar: _purgeableAssetFactorNames


+(id)packWithFactorPackId:(id)arg0 namespaceName:(id)arg1 purgeableAssetFactorNames:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPack:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithReplacementFactorPackId:(id)arg0 ;
-(id)copyWithReplacementNamespaceName:(id)arg0 ;
-(id)copyWithReplacementPurgeableAssetFactorNames:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithFactorPackId:(id)arg0 namespaceName:(id)arg1 purgeableAssetFactorNames:(id)arg2 ;


@end


#endif