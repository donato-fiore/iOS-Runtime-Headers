// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSTTABLESTYLE_H
#define TSTTABLESTYLE_H

@class TSSStyle, TSDStroke, NSString;
@protocol TSTTableStrokeProviding, TSDMixing;



@interface TSTTableStyle : TSSStyle <TSTTableStrokeProviding, TSDMixing>



@property (readonly, nonatomic) TSDStroke *bodyColumnStroke;
@property (readonly, nonatomic) TSDStroke *bodyPivotDeEmphasisHorizontalStroke;
@property (readonly, nonatomic) TSDStroke *bodyPivotEmphasisVerticalStroke;
@property (readonly, nonatomic) TSDStroke *bodyPivotGroupHorizontalStroke;
@property (readonly, nonatomic) TSDStroke *bodyPivotGroupVerticalStroke;
@property (readonly, nonatomic) TSDStroke *bodyRowStroke;
@property (readonly, nonatomic) TSDStroke *bodyRowStrokeEvenIfNotVisible;
@property (readonly, nonatomic) TSDStroke *categoryLevel1BottomStroke;
@property (readonly, nonatomic) TSDStroke *categoryLevel1InteriorStroke;
@property (readonly, nonatomic) TSDStroke *categoryLevel1LabelSeparatorStroke;
@property (readonly, nonatomic) TSDStroke *categoryLevel1TopStroke;
@property (readonly, nonatomic) TSDStroke *categoryLevel2BottomStroke;
@property (readonly, nonatomic) TSDStroke *categoryLevel2InteriorStroke;
@property (readonly, nonatomic) TSDStroke *categoryLevel2LabelSeparatorStroke;
@property (readonly, nonatomic) TSDStroke *categoryLevel2TopStroke;
@property (readonly, nonatomic) TSDStroke *categoryLevel3BottomStroke;
@property (readonly, nonatomic) TSDStroke *categoryLevel3InteriorStroke;
@property (readonly, nonatomic) TSDStroke *categoryLevel3LabelSeparatorStroke;
@property (readonly, nonatomic) TSDStroke *categoryLevel3TopStroke;
@property (readonly, nonatomic) TSDStroke *categoryLevel4BottomStroke;
@property (readonly, nonatomic) TSDStroke *categoryLevel4InteriorStroke;
@property (readonly, nonatomic) TSDStroke *categoryLevel4LabelSeparatorStroke;
@property (readonly, nonatomic) TSDStroke *categoryLevel4TopStroke;
@property (readonly, nonatomic) TSDStroke *categoryLevel5BottomStroke;
@property (readonly, nonatomic) TSDStroke *categoryLevel5InteriorStroke;
@property (readonly, nonatomic) TSDStroke *categoryLevel5LabelSeparatorStroke;
@property (readonly, nonatomic) TSDStroke *categoryLevel5TopStroke;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) TSDStroke *defaultHorizontalBorderStroke;
@property (readonly, nonatomic) TSDStroke *defaultHorizontalBorderStrokeEvenIfNotVisible;
@property (readonly, nonatomic) TSDStroke *defaultVerticalBorderStroke;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) TSDStroke *footerRowBodyColumnStroke;
@property (readonly, nonatomic) TSDStroke *footerRowBodyRowStroke;
@property (readonly, nonatomic) TSDStroke *footerRowBorderStroke;
@property (readonly, nonatomic) TSDStroke *footerRowPivotGroupVerticalStroke;
@property (readonly, nonatomic) TSDStroke *footerRowSeparatorStroke;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) TSDStroke *headerColumnBodyColumnStroke;
@property (readonly, nonatomic) TSDStroke *headerColumnBodyRowStroke;
@property (readonly, nonatomic) TSDStroke *headerColumnBorderStroke;
@property (readonly, nonatomic) TSDStroke *headerColumnPivotGroupDeEmphasisStroke;
@property (readonly, nonatomic) TSDStroke *headerColumnPivotGroupHorizontalStroke;
@property (readonly, nonatomic) TSDStroke *headerColumnPivotSeparatorStroke;
@property (readonly, nonatomic) TSDStroke *headerColumnSeparatorStroke;
@property (readonly, nonatomic) TSDStroke *headerRowBodyColumnStroke;
@property (readonly, nonatomic) TSDStroke *headerRowBodyRowStroke;
@property (readonly, nonatomic) TSDStroke *headerRowBorderStroke;
@property (readonly, nonatomic) TSDStroke *headerRowPivotGroupDeEmphasisStroke;
@property (readonly, nonatomic) TSDStroke *headerRowPivotGroupVerticalStroke;
@property (readonly, nonatomic) TSDStroke *headerRowPivotTitleStroke;
@property (readonly, nonatomic) TSDStroke *headerRowSeparatorStroke;
@property (readonly) Class superclass;


+(NSUInteger)presetIDForStyleID:(id)arg0 ;
+(id)nonEmphasisTableProperties;
+(id)properties;
+(id)propertiesAllowingNSNull;
+(id)styleIDForPreset:(NSUInteger)arg0 ;
+(int)defaultIntValueForProperty:(int)arg0 ;
+(void)initDefaultPropertyMap:(id)arg0 presetID:(NSUInteger)arg1 colors:(id)arg2 alternate:(NSUInteger)arg3 ;
+(void)initDefaultStrokePresetListInPropertyMap:(id)arg0 presetID:(NSUInteger)arg1 colors:(id)arg2 ;
-(BOOL)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg0 ;
-(BOOL)validatedLoadFromUnarchiver:(id)arg0 ;
-(NSInteger)mixingTypeWithObject:(id)arg0 context:(id)arg1 ;
-(id)boxedValueForProperty:(int)arg0 oldBoxedValue:(id)arg1 transformedByTransform:(struct CGAffineTransform )arg2 ;
-(id)exteriorStrokeForStrokePreset:(NSUInteger)arg0 ;
-(id)horizontalStrokeForStrokePreset:(NSUInteger)arg0 ;
-(id)initWithContext:(id)arg0 name:(id)arg1 overridePropertyMap:(id)arg2 isVariation:(BOOL)arg3 ;
-(id)mixedObjectWithFraction:(CGFloat)arg0 ofObject:(id)arg1 ;
-(id)strokeForStrokePreset:(NSUInteger)arg0 ;
-(id)verticalStrokeForStrokePreset:(NSUInteger)arg0 ;
-(unsigned int)maskForStrokePreset:(NSUInteger)arg0 ;
-(unsigned int)maskForStrokePresets:(id)arg0 ;
-(void)loadTableStylePropertiesIntoPropertyMap:(id)arg0 fromArchive:(*void)arg1 unarchiver:(id)arg2 ;
-(void)saveTableStylePropertiesToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)validate;


@end


#endif