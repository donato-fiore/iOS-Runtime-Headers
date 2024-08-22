// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSWPSHAPESTYLE_H
#define TSWPSHAPESTYLE_H

@class TSDShapeStyle, NSString;
@protocol TSSPreset;


#import "TSWPParagraphStyle.h"

@interface TSWPShapeStyle : TSDShapeStyle <TSSPreset>



@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) TSWPParagraphStyle *defaultParagraphStyle;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *presetKind;
@property (readonly) Class superclass;


+(id)defaultValueForProperty:(int)arg0 ;
+(id)layoutProperties;
+(id)presetStyleDescriptor;
+(id)properties;
+(id)propertiesAllowingNSNull;
+(int)defaultIntValueForProperty:(int)arg0 ;
+(void)loadShapeStyleLayoutPropertiesIntoPropertyMap:(id)arg0 fromArchive:(*void)arg1 unarchiver:(id)arg2 ;
+(void)saveShapeStyleLayoutPropertyMap:(id)arg0 toArchive:(*void)arg1 archiver:(id)arg2 ;
-(id)archivableRepresentationOfChangeSet:(id)arg0 ;
-(id)boxedValueForProperty:(int)arg0 oldBoxedValue:(id)arg1 transformedByTransform:(struct CGAffineTransform )arg2 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif