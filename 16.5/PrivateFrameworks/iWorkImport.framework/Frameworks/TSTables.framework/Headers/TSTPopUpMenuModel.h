// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSTPOPUPMENUMODEL_H
#define TSTPOPUPMENUMODEL_H

@class TSPObject, NSArray;
@protocol NSCopying, TSUMultipleChoiceListChoiceProviding;



@interface TSTPopUpMenuModel : TSPObject <NSCopying, TSUMultipleChoiceListChoiceProviding>

 {
    NSArray *_items;
    NSUInteger _count;
}




+(BOOL)needsObjectUUID;
+(id)cellValueFromCell:(id)arg0 locale:(id)arg1 ;
+(id)p_PopUpMenuModelDefaultWithContext:(id)arg0 locale:(id)arg1 ;
+(id)p_cellValueFromCellWithCustomFormat:(id)arg0 locale:(id)arg1 ;
+(id)popupMenuModelDeletingItemFromModel:(id)arg0 index:(NSUInteger)arg1 ;
+(id)popupMenuModelEditingItemInModel:(id)arg0 index:(NSUInteger)arg1 newContent:(id)arg2 ;
+(id)popupMenuModelFromTable:(id)arg0 region:(id)arg1 initialValue:(*BOOL)arg2 overflow:(*BOOL)arg3 ;
+(id)popupMenuModelReorderingModel:(id)arg0 fromIndex:(NSUInteger)arg1 toIndex:(NSUInteger)arg2 ;
+(void)p_appendChoices:(id)arg0 uniquelyToChoices:(id)arg1 ;
-(BOOL)booleanAtIndex:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToChoices:(id)arg0 ;
-(BOOL)p_booleanForListItem:(id)arg0 ;
-(BOOL)tst_dataObjectIsEqual:(id)arg0 ;
-(CGFloat)numberAtIndex:(NSUInteger)arg0 ;
-(CGFloat)p_numberForListItem:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)tst_dataObjectHash;
-(id)choices;
-(id)copyWithContext:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dateAtIndex:(NSUInteger)arg0 ;
-(id)description;
-(id)displayStringAtIndex:(NSUInteger)arg0 ;
-(id)formatAtIndex:(NSUInteger)arg0 ;
-(id)initWithItems:(id)arg0 context:(id)arg1 ;
-(id)p_dateForListItem:(id)arg0 ;
-(id)p_listItemAtIndex:(NSUInteger)arg0 ;
-(id)p_stringForListItem:(id)arg0 ;
-(id)popUpItemFromBoolean:(BOOL)arg0 ;
-(id)popUpItemFromDate:(id)arg0 format:(id)arg1 ;
-(id)popUpItemFromNumber:(CGFloat)arg0 format:(id)arg1 ;
-(id)popUpItemFromString:(id)arg0 ;
-(id)stringAtIndex:(NSUInteger)arg0 ;
-(int)p_mcListTypeForArgType:(char)arg0 ;
-(int)p_mcListTypeOfListItem:(id)arg0 ;
-(int)valueTypeOfItemAtIndex:(NSUInteger)arg0 ;
-(void)didInitFromSOS;
-(void)loadFromArchive:(*void)arg0 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif