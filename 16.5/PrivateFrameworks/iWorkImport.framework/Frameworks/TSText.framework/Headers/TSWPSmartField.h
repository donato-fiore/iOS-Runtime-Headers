// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSWPSMARTFIELD_H
#define TSWPSMARTFIELD_H

@class TSPObject, NSString;
@protocol TSKDocumentObject, TSPCopying, TSWPTextSpanningObject;


#import "TSWPStorage.h"

@interface TSWPSmartField : TSPObject <TSKDocumentObject, TSPCopying, TSWPTextSpanningObject>

 {
    NSString *_textAttributeUUIDString;
    NSUInteger _lastTableIndex;
}


@property (readonly, nonatomic) NSUInteger attributeArrayKind;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) TSWPStorage *parentStorage; // ivar: _parentStorage
@property (readonly, nonatomic) _NSRange range;
@property (readonly, nonatomic) int styleAttributeArrayKind;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *textAttributeUUIDString;


+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)defaultFieldStyleIdentifier;
-(BOOL)allowsEditing;
-(BOOL)allowsPasteAsSmartField;
-(BOOL)canCopy:(struct _NSRange )arg0 ;
-(BOOL)isEquivalentToObject:(id)arg0 ;
-(id)copyWithContext:(id)arg0 ;
-(id)initFromSmartField:(id)arg0 ;
-(id)initWithContext:(id)arg0 ;
-(id)text;
-(unsigned short)smartFieldKind;
-(void)adoptStylesheet:(id)arg0 withMapper:(id)arg1 ;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)wasAddedToDocumentRoot:(id)arg0 dolcContext:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg0 ;
-(void)willBeAddedToDocumentRoot:(id)arg0 dolcContext:(id)arg1 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg0 ;


@end


#endif