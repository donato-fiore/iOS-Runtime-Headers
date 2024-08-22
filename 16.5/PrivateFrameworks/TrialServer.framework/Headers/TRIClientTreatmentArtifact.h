// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRICLIENTTREATMENTARTIFACT_H
#define TRICLIENTTREATMENTARTIFACT_H

@class NSData, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TRIClientTreatmentArtifact : NSObject <NSCopying>



@property (readonly, nonatomic) NSData *encodedTreatmentDefinition; // ivar: _encodedTreatmentDefinition
@property (readonly, nonatomic) NSString *encodedTreatmentDefinitionSignature; // ivar: _encodedTreatmentDefinitionSignature
@property (readonly, nonatomic) NSData *publicCertificate; // ivar: _publicCertificate


+(id)artifactWithEncodedTreatmentDefinition:(id)arg0 encodedTreatmentDefinitionSignature:(id)arg1 publicCertificate:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToArtifact:(id)arg0 ;
-(BOOL)isValidWithTreatmentId:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithReplacementEncodedTreatmentDefinition:(id)arg0 ;
-(id)copyWithReplacementEncodedTreatmentDefinitionSignature:(id)arg0 ;
-(id)copyWithReplacementPublicCertificate:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithEncodedTreatmentDefinition:(id)arg0 encodedTreatmentDefinitionSignature:(id)arg1 publicCertificate:(id)arg2 ;


@end


#endif