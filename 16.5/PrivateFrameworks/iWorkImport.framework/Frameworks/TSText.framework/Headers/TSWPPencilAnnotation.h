// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSWPPENCILANNOTATION_H
#define TSWPPENCILANNOTATION_H

@class TSPObject, NSString, TSKPKDrawing;
@protocol TSPCopying, TSKDocumentObject, TSWPTextSpanningObject, TSWPOverlappingField, TSKPencilAnnotation, TSKPencilAnnotationStorage;


#import "TSWPStorage.h"

@interface TSWPPencilAnnotation : TSPObject <TSPCopying, TSKDocumentObject, TSWPTextSpanningObject, TSWPOverlappingField, TSKPencilAnnotation>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) TSKPKDrawing *drawing;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) TSWPStorage *parentStorage; // ivar: _parentStorage
@property (retain, nonatomic) NSObject<TSKPencilAnnotationStorage> *pencilAnnotationStorage; // ivar: _pencilAnnotationStorage
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *textAttributeUUIDString; // ivar: _textAttributeUUIDString
@property (readonly, nonatomic) NSString *uuid;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEquivalentToObject:(id)arg0 ;
-(BOOL)isInDocument;
-(id)copyWithContext:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithContext:(id)arg0 pencilAnnotationStorage:(id)arg1 ;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)wasAddedToDocumentRoot:(id)arg0 dolcContext:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg0 ;
-(void)willBeAddedToDocumentRoot:(id)arg0 dolcContext:(id)arg1 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg0 ;


@end


#endif