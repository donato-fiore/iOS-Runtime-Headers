// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRIMAAUTOASSET_H
#define TRIMAAUTOASSET_H

@class MAAutoAsset, TRIFullMAAssetId, MAAutoAssetSelector, NSString;
@protocol TRIAutoAsset;

#import <Foundation/Foundation.h>


@interface TRIMAAutoAsset : NSObject <TRIAutoAsset>

 {
    MAAutoAsset *_autoAsset;
}


@property (retain, nonatomic) TRIFullMAAssetId *assetId; // ivar: assetId
@property (retain, nonatomic) MAAutoAssetSelector *assetSelector; // ivar: assetSelector
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)currentLocksSync:(*id)arg0 ;
-(id)determineIfAvailableSync:(id)arg0 withTimeout:(NSInteger)arg1 discoveredAttributes:(*id)arg2 error:(*id)arg3 ;
-(id)endLockUsageSync:(id)arg0 ;
-(id)initWithAssetId:(id)arg0 decryptionKey:(id)arg1 error:(*id)arg2 ;
-(id)lockContentSync:(id)arg0 withUsagePolicy:(id)arg1 withTimeout:(NSInteger)arg2 lockedAssetSelector:(*id)arg3 newerInProgress:(*id)arg4 error:(*id)arg5 ;
-(void)lockContent:(id)arg0 withUsagePolicy:(id)arg1 withTimeout:(NSInteger)arg2 completion:(id)arg3 ;
// -(void)lockContent:(id)arg0 withUsagePolicy:(id)arg1 withTimeout:(NSInteger)arg2 reportingProgress:(id)arg3 completion:(unk)arg4  ;


@end


#endif