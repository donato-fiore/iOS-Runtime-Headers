// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIKBRENDERFACTORY_COMPOSITE_H
#define UIKBRENDERFACTORY_COMPOSITE_H



#import "UIKBRenderFactoryiPhone.h"
#import "UIKBRenderFactory.h"

@interface UIKBRenderFactory_Composite : UIKBRenderFactoryiPhone {
    UIKBRenderFactory *_overlayFactory;
}




-(BOOL)isTallPopup;
-(CGFloat)popupFontSize;
-(Class)_overlayFactoryClass;
-(id)initWithRenderingContext:(id)arg0 skipLayoutSegments:(BOOL)arg1 ;
-(struct CGPoint )popupSymbolTextOffset;
-(struct CGPoint )variantAnnotationTextOffset;
-(struct CGPoint )variantSymbolTextOffset;
-(struct UIEdgeInsets )variantPaddedFrameInsets;
-(struct UIEdgeInsets )variantSymbolFrameInsets;
-(struct UIEdgeInsets )wideShadowPaddleInsets;
-(struct UIEdgeInsets )wideShadowPopupMenuInsets;


@end


#endif