// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRICLIENTROLLOUTARTIFACT_H
#define TRICLIENTROLLOUTARTIFACT_H

@class TRIRolloutDeployment, NSDate, NSArray, TRIClientRollout;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TRIClientRolloutArtifact : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) TRIRolloutDeployment *deployment;
@property (readonly, nonatomic) NSDate *deploymentDate; // ivar: _deploymentDate
@property (readonly, nonatomic) NSUInteger downloadSize; // ivar: _downloadSize
@property (readonly, nonatomic) NSArray *namespaceNames;
@property (readonly, nonatomic) NSArray *populations; // ivar: _populations
@property (readonly, nonatomic) TRIClientRollout *rollout; // ivar: _rollout


+(BOOL)_isStructurallyValidWithRollout:(id)arg0 deployment:(id)arg1 namespaceNames:(id)arg2 populations:(id)arg3 deploymentDate:(id)arg4 ;
+(BOOL)_signature:(id)arg0 onData:(id)arg1 isValidUsingPublicCertificate:(id)arg2 ;
+(BOOL)supportsSecureCoding;
+(id)allReferencedCKRecordKeys;
+(id)artifactFromCKRecord:(id)arg0 namespaceDescriptorProvider:(id)arg1 error:(*id)arg2 ;
+(id)artifactWithRollout:(id)arg0 populations:(id)arg1 deploymentDate:(id)arg2 downloadSize:(NSUInteger)arg3 ;
+(id)artifactWithTransientData:(id)arg0 ;
+(void)load;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToArtifact:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithReplacementDeploymentDate:(id)arg0 ;
-(id)copyWithReplacementDownloadSize:(NSUInteger)arg0 ;
-(id)copyWithReplacementPopulations:(id)arg0 ;
-(id)copyWithReplacementRollout:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)data;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRollout:(id)arg0 populations:(id)arg1 deploymentDate:(id)arg2 downloadSize:(NSUInteger)arg3 ;
-(void)_swizzledEncodeWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif