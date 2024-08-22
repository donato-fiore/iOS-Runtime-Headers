// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCHBASESTYLE_H
#define TSCHBASESTYLE_H

@class TSSStyle, NSString;
@protocol TSCHStyleActAlike;



@interface TSCHBaseStyle : TSSStyle <TSCHStyleActAlike>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)allSpecificsForGeneric:(int)arg0 ;
+(id)defaultPropertyMap;
+(id)g_genericToSpecificPropertySetMap;
+(id)g_gilliganPropertyStringFromProperty:(int)arg0 ;
+(id)g_objectTypeForSpecific:(int)arg0 ;
+(id)g_specificPropertyToOperationNameBimap;
+(id)g_specificToGenericPropertyMap;
+(id)paragraphStyleIndexProperties;
+(int)g_tangierPropertyFromGilliganPropertyString:(id)arg0 ;
+(void)g_splitProperty:(int)arg0 outStyleOwner:(*id)arg1 outSpecifier:(*id)arg2 outKeyName:(*id)arg3 ;
-(NSInteger)mixingTypeWithObject:(id)arg0 context:(id)arg1 ;
-(float)defaultFloatValueForProperty:(int)arg0 ;
-(id)allSpecificsForGeneric:(int)arg0 ;
-(id)boxedDefaultValueForProperty:(int)arg0 ;
-(id)customFormatKeys;
-(id)defaultValueForProperty:(int)arg0 ;
-(id)formatObjectPropertySet;
-(id)g_gilliganPropertyStringFromProperty:(int)arg0 ;
-(id)g_objectTypeForSpecific:(int)arg0 ;
-(id)g_specificPropertyToOperationNameBimap;
-(id)g_specificToGenericPropertyMap;
-(id)mixedObjectWithFraction:(CGFloat)arg0 ofObject:(id)arg1 ;
-(id)properties;
-(id)shortDescription;
-(int)defaultIntValueForProperty:(int)arg0 ;
-(int)g_tangierPropertyFromGilliganPropertyString:(id)arg0 ;
-(void)enumerateFormatObjectsUsingBlock:(id)arg0 ;
-(void)g_splitProperty:(int)arg0 outStyleOwner:(*id)arg1 outSpecifier:(*id)arg2 outKeyName:(*id)arg3 ;
-(void)loadFromPreUFFArchiveWithUnarchiver:(id)arg0 ;
-(void)remapCustomFormatKeysWithOldToNewKeyMap:(id)arg0 ;
-(void)transformFormatObjectsUsingBlock:(id)arg0 ;
-(void)updateAfterPasteForDocumentRoot:(id)arg0 pasteboardCustomFormatList:(id)arg1 ;
-(void)updateForCollaborationForProperties:(id)arg0 documentRoot:(id)arg1 ;
-(void)upgradePreU2_0CustomFormatsForDocumentRoot:(id)arg0 ;


@end


#endif