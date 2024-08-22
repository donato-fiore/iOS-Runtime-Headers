// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRIFETCHONDEMANDFACTORSPERSISTEDTASK_ASSETIDFACTORNAME_H
#define TRIFETCHONDEMANDFACTORSPERSISTEDTASK_ASSETIDFACTORNAME_H

@class TRIPBMessage, NSString;



@interface TRIFetchOnDemandFactorsPersistedTask_AssetIdFactorName : TRIPBMessage

@property (copy, nonatomic) NSString *assetId;
@property (copy, nonatomic) NSString *factorName;
@property (nonatomic) BOOL hasAssetId;
@property (nonatomic) BOOL hasFactorName;


+(id)descriptor;


@end


#endif