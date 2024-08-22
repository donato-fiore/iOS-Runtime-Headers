// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TUIKEYPLANE_H
#define TUIKEYPLANE_H

@class NSMutableDictionary, NSArray, UIKBTree, NSString;

#import <Foundation/Foundation.h>


@interface TUIKeyplane : NSObject

@property (retain, nonatomic) NSMutableDictionary *cache; // ivar: _cache
@property (nonatomic) NSInteger currentVariantType; // ivar: _currentVariantType
@property (retain, nonatomic) NSArray *defaultKeysByRow; // ivar: _defaultKeysByRow
@property (retain, nonatomic) UIKBTree *fullTree; // ivar: _fullTree
@property (nonatomic) NSInteger indexOfLastRow; // ivar: _indexOfLastRow
@property (readonly, nonatomic) NSInteger keyLayoutStyle;
@property (retain, nonatomic) UIKBTree *keylayout; // ivar: _keylayout
@property (nonatomic) NSInteger layoutClass; // ivar: _layoutClass
@property (nonatomic) NSInteger layoutType; // ivar: _layoutType
@property (nonatomic) CGSize leftSplitSize; // ivar: _leftSplitSize
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSUInteger numberOfRows;
@property (readonly, nonatomic) NSArray *orderedKeysByRow;
@property (readonly, nonatomic) NSString *prefix;
@property (nonatomic) CGSize rightSplitSize; // ivar: _rightSplitSize
@property (retain, nonatomic) NSArray *variantKeysByRow; // ivar: _variantKeysByRow


+(CGFloat)baseHeightForLayoutClass:(NSInteger)arg0 landscape:(BOOL)arg1 ;
+(NSInteger)layoutClassFromKeyplaneName:(id)arg0 ;
+(NSInteger)layoutClassFromScreenDimensions:(struct CGSize )arg0 ;
+(id)keyplaneFromKBTree:(id)arg0 ;
+(id)keyplaneFromKBTree:(id)arg0 withType:(NSInteger)arg1 ;
+(struct CGSize )sizeBasisForLayoutClass:(NSInteger)arg0 ;
+(struct CGSize )sizeFromScreenTraits:(id)arg0 layoutClass:(NSInteger)arg1 ;
-(BOOL)hasSimilarLayoutToKeyplane:(id)arg0 ;
-(BOOL)shouldDuplicateKey:(id)arg0 forRow:(id)arg1 ;
-(BOOL)variantTypeIncludesSpaceBar:(NSInteger)arg0 ;
-(CGFloat)finalHeightForSplitKeyboard;
-(CGFloat)finalSplitSizeForRightSide:(BOOL)arg0 ;
-(CGFloat)heightMultiplierForRowNumber:(NSUInteger)arg0 ;
-(CGFloat)multiplierForKey:(id)arg0 withProperties:(id)arg1 ;
-(NSInteger)keyStyleForLayoutClass:(NSInteger)arg0 ;
-(NSInteger)layoutTypeFromDisplayType:(int)arg0 ;
-(NSUInteger)numberOfKeys;
-(id)createPreparedKeyFromTree:(id)arg0 withMultiplier:(CGFloat)arg1 type:(NSInteger)arg2 ;
-(id)defaultKeysOrderedByRowForKeyplane:(id)arg0 ;
-(id)defaultRowSet;
-(id)description;
-(id)duplicateTreeForSplitMode:(id)arg0 ;
-(id)init;
-(id)keyRowFromTreeRow:(id)arg0 rowNumber:(NSUInteger)arg1 type:(NSInteger)arg2 ;
-(id)rowSetForType:(NSInteger)arg0 ;
-(id)rowsForKeyboardType:(NSInteger)arg0 ;
-(id)sortedKeysForKeyplane:(id)arg0 ;
-(id)stringFromKeyboardType:(NSInteger)arg0 ;
-(id)stringFromLayoutClass:(NSInteger)arg0 ;
-(id)stringFromLayoutStyle:(NSInteger)arg0 ;
-(id)stringFromLayoutType:(NSInteger)arg0 ;
-(void)updateKeyboardType:(NSInteger)arg0 ;


@end


#endif