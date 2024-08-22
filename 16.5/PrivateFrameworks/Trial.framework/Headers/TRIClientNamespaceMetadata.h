// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRICLIENTNAMESPACEMETADATA_H
#define TRICLIENTNAMESPACEMETADATA_H

@class TRIPBMessage, TRIPBStringEnumDictionary;



@interface TRIClientNamespaceMetadata : TRIPBMessage

@property (nonatomic) unsigned int compatibilityVersion;
@property (retain, nonatomic) TRIPBStringEnumDictionary *factorNamePurgeabilityLevels;
@property (readonly, nonatomic) NSUInteger factorNamePurgeabilityLevels_Count;
@property (nonatomic) BOOL hasCompatibilityVersion;


+(id)descriptor;


@end


#endif