// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSDSWATCHRENDERINGOPERATION_H
#define TSDSWATCHRENDERINGOPERATION_H

@class NSOperation, NSString, UIView;
@protocol TSSPreset;


#import "TSKDocumentRoot.h"

@interface TSDSwatchRenderingOperation : NSOperation {
    TSKDocumentRoot *mDocumentRoot;
    *CGImage mDeliveredImage;
}


@property (readonly, nonatomic) *CGImage deliveredImage;
@property (copy) NSString *identifier; // ivar: mIdentifier
@property (readonly) CGFloat imageScale; // ivar: mImageScale
@property (readonly) CGSize imageSize; // ivar: mImageSize
@property NSUInteger insertPopoverPageNumber; // ivar: mInsertPopoverPageNumber
@property NSUInteger insertPopoverPageType; // ivar: mInsertPopoverPageType
@property (readonly) NSObject<TSSPreset> *preset; // ivar: mPreset
@property (readonly) CGRect swatchFrame; // ivar: mSwatchFrame
@property (retain) UIView *view; // ivar: mView


-(BOOL)needsPressedStateBackground;
-(id)initWithPreset:(id)arg0 imageSize:(struct CGSize )arg1 imageScale:(CGFloat)arg2 swatchFrame:(struct CGRect )arg3 documentRoot:(id)arg4 ;
-(struct CGImage *)p_newSwatchPressedStateBackgroundFromCGImage:(struct CGImage *)arg0 ;
-(struct UIEdgeInsets )swatchEdgeInsets;
-(void)dealloc;
-(void)deliverCGImage:(struct CGImage *)arg0 ;
-(void)doWorkWithReadLock;
-(void)main;
-(void)p_animateSwatchIn;
-(void)p_deliverResultOnMainThread:(id)arg0 ;


@end


#endif