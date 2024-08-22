// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSWPDRAWABLEATTACHMENT_H
#define TSWPDRAWABLEATTACHMENT_H

@class NSUUID, TSDDrawableInfo;


#import "TSWPAttachment.h"

@interface TSWPDrawableAttachment : TSWPAttachment {
    NSUUID *_drawableUUID;
}


@property (readonly, nonatomic) TSDDrawableInfo *drawable; // ivar: _drawableInfo
@property (nonatomic) CGFloat hOffset; // ivar: _hOffset
@property (nonatomic) int hOffsetType; // ivar: _hOffsetType
@property (nonatomic) CGFloat vOffset; // ivar: _vOffset
@property (nonatomic) int vOffsetType; // ivar: _vOffsetType


-(BOOL)isAnchored;
-(BOOL)isDrawable;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isHTMLWrap;
-(BOOL)isHorizontallyCentered;
-(BOOL)isPartitioned;
-(BOOL)isSearchable;
-(BOOL)isVerticallyCentered;
-(BOOL)needsUpdateForStyleChangeToStorage:(id)arg0 charIndex:(NSUInteger)arg1 ;
-(BOOL)preserveAttributesOverSelectionWhenInserting;
-(BOOL)shouldInvalidateWhenTextPropertiesChange;
-(BOOL)specifiesEnabledKnobMask;
-(BOOL)supportsUUID;
-(NSUInteger)hash;
-(id)childEnumerator;
-(id)copyWithContext:(id)arg0 ;
-(id)detachDrawable;
-(id)initWithContext:(id)arg0 drawable:(id)arg1 ;
-(id)objectsForStyleMigrating;
-(unsigned int)elementKind;
-(void)adoptStylesheet:(id)arg0 withMapper:(id)arg1 ;
-(void)attachDrawable:(id)arg0 ;
-(void)clearParentStorageForDealloc;
-(void)dealloc;
-(void)didFinalizeUnarchivingFromWPStorage:(id)arg0 ;
-(void)infoChanged;
-(void)invalidate;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)loadMessage:(*void)arg0 fromUnarchiver:(id)arg1 ;
-(void)saveMessage:(*void)arg0 toArchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)setParentStorage:(id)arg0 ;
-(void)updateForStyleChangeToStorage:(id)arg0 charIndex:(NSUInteger)arg1 ;
-(void)wasAddedToDocumentRoot:(id)arg0 dolcContext:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg0 ;
-(void)willBeAddedToDocumentRoot:(id)arg0 dolcContext:(id)arg1 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg0 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg0 storage:(id)arg1 ;


@end


#endif