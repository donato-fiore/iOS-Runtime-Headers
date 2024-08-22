// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRIPROVISIONALFACTORPACKMETADATA_H
#define TRIPROVISIONALFACTORPACKMETADATA_H

@class NSString;


#import "TRIPBMessage.h"

@interface TRIProvisionalFactorpackMetadata : TRIPBMessage

@property (nonatomic) unsigned int attempts;
@property (copy, nonatomic) NSString *factorPackId;
@property (nonatomic) BOOL hasAttempts;
@property (nonatomic) BOOL hasFactorPackId;
@property (nonatomic) BOOL hasRejected;
@property (nonatomic) BOOL rejected;


+(id)descriptor;


@end


#endif