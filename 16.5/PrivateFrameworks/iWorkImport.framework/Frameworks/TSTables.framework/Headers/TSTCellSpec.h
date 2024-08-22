// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSTCELLSPEC_H
#define TSTCELLSPEC_H

@class NSString;
@protocol TSTCellDiffing, TSSPropertyCommandSerializing;

#import <Foundation/Foundation.h>


@interface TSTCellSpec : NSObject <TSTCellDiffing, TSSPropertyCommandSerializing>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasTSCEFormula;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) unsigned int interactionType;
@property (nonatomic) unsigned int interactionTypeFromTheFuture; // ivar: _interactionTypeFromTheFuture
@property (readonly, nonatomic) BOOL isControl;
@property (readonly) Class superclass;


+(BOOL)interactionTypeIsControl:(unsigned int)arg0 ;
+(BOOL)isShimControlFormatType:(unsigned int)arg0 ;
+(id)cellDiffProperties;
+(id)cellSpecFromTSKFormat:(id)arg0 ;
+(id)defaultCellSpec;
+(id)displayNameForInteractionType:(unsigned int)arg0 ;
+(id)instanceWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
+(unsigned int)interactionTypeForShimControlFormatType:(unsigned int)arg0 ;
+(unsigned int)shimControlFormatTypeForInteractionType:(unsigned int)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)tst_dataObjectIsEqual:(id)arg0 ;
-(BOOL)validateFormatAndValue:(id)arg0 ;
-(NSUInteger)tst_dataObjectHash;
-(id)asChooserControlSpec;
-(id)asFormulaSpec;
-(id)asRangeControlSpec;
-(id)asToggleControlSpec;
-(id)init;
-(id)initFromPropertyCommandMessage:(struct Message *)arg0 unarchiver:(id)arg1 ;
-(id)initWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(id)objectByRemovingPropertiesInMap:(id)arg0 addingPropertiesInMap:(id)arg1 updateInverseResetPropertyMap:(id)arg2 updateInverseSetPropertyMap:(id)arg3 ;
-(id)propertiesMatchingThoseInMap:(id)arg0 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)saveToPropertyCommandMessage:(struct Message *)arg0 archiver:(id)arg1 ;


@end


#endif