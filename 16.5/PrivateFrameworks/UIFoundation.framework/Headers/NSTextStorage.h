// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSTEXTSTORAGE_H
#define NSTEXTSTORAGE_H

@class NSMutableAttributedString, NSMutableArray, NSArray;
@protocol NSSecureCoding, NSTextStorageObservingPrivate, NSTextStorageDelegate, NSTextStorageObserving;



@interface NSTextStorage : NSMutableAttributedString <NSSecureCoding>

 {
    _NSRange _editedRange;
    NSInteger _editedDelta;
    ? _flags;
    NSMutableArray *_layoutManagers;
    id *_sideData;
    NSInteger _fontFixingDisabledCount;
    id<NSTextStorageObservingPrivate> *_textStorageObserver;
    BOOL _shouldSetOriginalFontAttribute;
    Class _intentResolver;
}


@property BOOL _isSwiftAttributedString; // ivar: __isSwiftAttributedString
@property (readonly, nonatomic) NSInteger changeInLength;
@property (weak, nonatomic) NSObject<NSTextStorageDelegate> *delegate;
@property (readonly, nonatomic) NSUInteger editedMask;
@property (readonly, nonatomic) _NSRange editedRange;
@property BOOL ensuresFixingAttributes; // ivar: _ensuresFixingAttributes
@property BOOL ensuresFixingFontAttributes; // ivar: _ensuresFixingFontAttributes
@property (readonly, nonatomic) BOOL fixesAttributesLazily;
@property (readonly, copy, nonatomic) NSArray *layoutManagers;
@property (weak, nonatomic) NSObject<NSTextStorageObserving> *textStorageObserver;


+(BOOL)supportsSecureCoding;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(void)initialize;
-(BOOL)_attributeFixingInProgress;
-(BOOL)_forceFixAttributes;
-(BOOL)_isEditing;
-(BOOL)_lockForReading;
-(BOOL)_lockForWriting;
-(BOOL)_lockForWritingWithExceptionHandler:(BOOL)arg0 ;
-(BOOL)_shouldFixFontAttributes;
-(BOOL)_shouldSetOriginalFontAttribute;
-(BOOL)_usesSimpleTextEffects;
-(Class)_intentResolver;
-(Class)classForCoder;
-(id)_nsAttributedStringFromRange:(struct _NSRange )arg0 ;
-(id)cuiCatalog;
-(id)cuiStyleEffects;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)textStorageController;
-(struct _NSRange )_rangeByEstimatingAttributeFixingForRange:(struct _NSRange )arg0 ;
-(void)_fixAttributesInRange:(struct _NSRange )arg0 ;
-(void)_notifyEdited:(NSUInteger)arg0 range:(struct _NSRange )arg1 changeInLength:(NSInteger)arg2 invalidatedRange:(struct _NSRange )arg3 ;
-(void)_setAttributeFixingInProgress:(BOOL)arg0 ;
-(void)_setForceFixAttributes:(BOOL)arg0 ;
-(void)_setIntentResolver:(Class)arg0 ;
-(void)_setShouldSetOriginalFontAttribute:(BOOL)arg0 ;
-(void)_setUsesSimpleTextEffects:(BOOL)arg0 ;
-(void)_unlock;
-(void)addLayoutManager:(id)arg0 ;
-(void)beginEditing;
-(void)coordinateAccess:(id)arg0 ;
-(void)coordinateEditing:(id)arg0 ;
-(void)coordinateReading:(id)arg0 ;
-(void)dealloc;
-(void)edited:(NSUInteger)arg0 range:(struct _NSRange )arg1 changeInLength:(NSInteger)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)endEditing;
-(void)ensureAttributesAreFixedInRange:(struct _NSRange )arg0 ;
-(void)finalize;
-(void)fixFontAttributeInRange:(struct _NSRange )arg0 ;
-(void)fixGlyphInfoAttributeInRange:(struct _NSRange )arg0 ;
-(void)fontSetChanged;
-(void)invalidateAttributesInRange:(struct _NSRange )arg0 ;
-(void)processEditing;
-(void)removeLayoutManager:(id)arg0 ;
-(void)setTextStorageController:(id)arg0 ;


@end


#endif