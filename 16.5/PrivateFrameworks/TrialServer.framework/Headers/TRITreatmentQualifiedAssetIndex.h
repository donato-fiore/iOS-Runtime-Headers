// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRITREATMENTQUALIFIEDASSETINDEX_H
#define TRITREATMENTQUALIFIEDASSETINDEX_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TRITreatmentQualifiedAssetIndex : NSObject <NSCopying>



@property (readonly, nonatomic) unsigned int index; // ivar: _index
@property (readonly, nonatomic) NSString *treatmentId; // ivar: _treatmentId


+(id)indexWithTreatmentId:(id)arg0 index:(unsigned int)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToIndex:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithReplacementIndex:(unsigned int)arg0 ;
-(id)copyWithReplacementTreatmentId:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithTreatmentId:(id)arg0 index:(unsigned int)arg1 ;


@end


#endif