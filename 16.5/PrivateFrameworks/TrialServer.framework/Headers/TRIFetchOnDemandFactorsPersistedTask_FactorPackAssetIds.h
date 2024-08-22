// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRIFETCHONDEMANDFACTORSPERSISTEDTASK_FACTORPACKASSETIDS_H
#define TRIFETCHONDEMANDFACTORSPERSISTEDTASK_FACTORPACKASSETIDS_H

@class TRIPBMessage, NSMutableArray, NSString;



@interface TRIFetchOnDemandFactorsPersistedTask_FactorPackAssetIds : TRIPBMessage

@property (retain, nonatomic) NSMutableArray *assetIdArray;
@property (readonly, nonatomic) NSUInteger assetIdArray_Count;
@property (retain, nonatomic) NSMutableArray *assetIdFactorNameArray;
@property (readonly, nonatomic) NSUInteger assetIdFactorNameArray_Count;
@property (copy, nonatomic) NSString *factorPackId;
@property (nonatomic) BOOL hasFactorPackId;


+(id)descriptor;


@end


#endif