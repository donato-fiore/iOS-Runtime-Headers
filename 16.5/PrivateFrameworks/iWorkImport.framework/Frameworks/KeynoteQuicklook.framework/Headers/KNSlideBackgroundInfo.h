// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KNSLIDEBACKGROUNDINFO_H
#define KNSLIDEBACKGROUNDINFO_H

@class TSSPropertySetChangeDetails, NSString, TSDFill, TSDInfoGeometry, TSPObject<TSDOwningAttachment>;
@protocol TSDChangeableInfo, TSKDocumentObject, TSKTransformableObject, TSDInfo;

#import <Foundation/Foundation.h>

#import "KNMotionBackground.h"
#import "KNAbstractSlide.h"

@interface KNSlideBackgroundInfo : NSObject <TSDChangeableInfo, TSKDocumentObject, TSKTransformableObject>

 {
    TSSPropertySetChangeDetails *_changes;
}


@property (readonly, nonatomic, getter=isAnchoredToText) BOOL anchoredToText;
@property (readonly, nonatomic, getter=isAttachedToBodyText) BOOL attachedToBodyText;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) TSDFill *fill;
@property (readonly, nonatomic, getter=isFloatingAboveText) BOOL floatingAboveText;
@property (copy, nonatomic) TSDInfoGeometry *geometry; // ivar: _geometry
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isInlineWithText) BOOL inlineWithText;
@property (readonly, nonatomic, getter=isInlineWithTextWithWrap) BOOL inlineWithTextWithWrap;
@property (nonatomic) BOOL matchesObjectPlaceholderGeometry;
@property (readonly, nonatomic) KNMotionBackground *motionBackground;
@property (nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment;
@property (readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
@property (nonatomic) NSObject<TSDInfo> *parentInfo; // ivar: _parentInfo
@property (readonly, weak, nonatomic) KNAbstractSlide *slide; // ivar: _slide
@property (readonly) Class superclass;


+(id)backgroundWithSlide:(id)arg0 andGeometry:(id)arg1 ;
-(BOOL)isSelectable;
-(BOOL)isThemeContent;
-(Class)layoutClass;
-(Class)repClass;
-(id)commandForTransformingByTransform:(struct CGAffineTransform )arg0 context:(id)arg1 transformedObjects:(id)arg2 inBounds:(struct CGRect )arg3 ;
-(id)copyWithContext:(id)arg0 ;
-(id)endCollectingChanges;
-(id)initWithSlide:(id)arg0 andGeometry:(id)arg1 ;
-(id)originalPDFDataForCopy;
-(struct CGSize )minimumSize;
-(void)beginCollectingChanges;
-(void)clearBackPointerToParentInfoIfNeeded:(id)arg0 ;
-(void)setPrimitiveGeometry:(id)arg0 ;
-(void)wasAddedToDocumentRoot:(id)arg0 dolcContext:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg0 ;
-(void)willBeAddedToDocumentRoot:(id)arg0 dolcContext:(id)arg1 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg0 ;
-(void)willChangeProperty:(int)arg0 ;


@end


#endif