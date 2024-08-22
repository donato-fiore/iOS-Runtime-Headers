// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSDPENCILANNOTATION_H
#define TSDPENCILANNOTATION_H

@class TSPObject, NSString, TSKPKDrawing;
@protocol TSPCopying, TSKDocumentObject, TSKPencilAnnotation;


#import "TSDDrawableInfo.h"
#import "TSDPencilAnnotationStorage.h"

@interface TSDPencilAnnotation : TSPObject <TSPCopying, TSKDocumentObject, TSKPencilAnnotation>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) TSKPKDrawing *drawing;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) TSDDrawableInfo *parent; // ivar: _parent
@property (retain, nonatomic) TSDPencilAnnotationStorage *pencilAnnotationStorage; // ivar: _pencilAnnotationStorage
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uuid;


+(BOOL)needsObjectUUID;
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