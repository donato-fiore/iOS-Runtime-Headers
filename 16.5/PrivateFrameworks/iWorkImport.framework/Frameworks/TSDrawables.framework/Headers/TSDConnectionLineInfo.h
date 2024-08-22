// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSDCONNECTIONLINEINFO_H
#define TSDCONNECTIONLINEINFO_H

@class NSUUID;


#import "TSDShapeInfo.h"
#import "TSDDrawableInfo.h"

@interface TSDConnectionLineInfo : TSDShapeInfo {
    ? mInvalidFlags;
    BOOL mWriteConnectedReferencesForCopies;
}


@property (retain, nonatomic) TSDDrawableInfo *connectedFrom;
@property (retain, nonatomic) NSUUID *connectedFromID; // ivar: mConnectedFromID
@property (retain, nonatomic) TSDDrawableInfo *connectedFromInfo; // ivar: mConnectedFromInfo
@property (retain, nonatomic) TSDDrawableInfo *connectedTo;
@property (retain, nonatomic) NSUUID *connectedToID; // ivar: mConnectedToID
@property (retain, nonatomic) TSDDrawableInfo *connectedToInfo; // ivar: mConnectedToInfo


-(BOOL)allowsParentGroupToBeResizedWithoutAspectRatioLock;
-(BOOL)canAnchor;
-(BOOL)isLine;
-(BOOL)shouldRemovePastedFillStyleProperties;
-(BOOL)shouldRemovePastedFrameStrokeStyleProperties;
-(BOOL)shouldRemovePastedLineEndStyleProperties;
-(BOOL)shouldValidatePastedLineEndStyleProperties;
-(Class)layoutClass;
-(Class)repClass;
-(NSInteger)mixingTypeWithObject:(id)arg0 context:(id)arg1 ;
-(id)computeLayoutInfoGeometry;
-(id)copyWithContext:(id)arg0 ;
-(id)initWithContext:(id)arg0 geometry:(id)arg1 style:(id)arg2 ;
-(id)presetKind;
-(id)styleIdentifierTemplateForNewPreset;
-(id)typeName;
-(struct CGAffineTransform )computeLayoutFullTransform;
-(void)acceptVisitor:(id)arg0 ;
-(void)computeLayoutInfoGeometry:(*id)arg0 andPathSource:(*id)arg1 ;
-(void)didCopy;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)performBlockWithTemporaryLayout:(id)arg0 ;
-(void)saveGeometryToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)willCopyWithOtherDrawables:(id)arg0 ;


@end


#endif