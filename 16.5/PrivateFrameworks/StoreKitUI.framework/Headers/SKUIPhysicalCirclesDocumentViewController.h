// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKUIPHYSICALCIRCLESDOCUMENTVIEWCONTROLLER_H
#define SKUIPHYSICALCIRCLESDOCUMENTVIEWCONTROLLER_H

@class NSMapTable, UIGestureRecognizer, NSString;
@protocol SKUIArtworkRequestDelegate, SKUIOnboardingAffiliationCirclesDelegate, SKUIPhysicalCirclesTemplateDelegate, UIGestureRecognizerDelegate, SKUIDocumentViewController;


#import "SKUIViewController.h"
#import "SKUIOnboardingAffiliationCirclesViewController.h"
#import "SKUIOnboardingFooterView.h"
#import "SKUIOnboardingProgressView.h"
#import "SKUIResourceLoader.h"
#import "SKUIPhysicalCirclesTemplateViewElement.h"

@interface SKUIPhysicalCirclesDocumentViewController : SKUIViewController <SKUIArtworkRequestDelegate, SKUIOnboardingAffiliationCirclesDelegate, SKUIPhysicalCirclesTemplateDelegate, UIGestureRecognizerDelegate, SKUIDocumentViewController>

 {
    SKUIOnboardingAffiliationCirclesViewController *_circlesViewController;
    SKUIOnboardingFooterView *_footerView;
    NSMapTable *_imageRequests;
    UIGestureRecognizer *_interactivePopGestureRecognizer;
    SKUIOnboardingProgressView *_progressView;
    SKUIResourceLoader *_resourceLoader;
    SKUIPhysicalCirclesTemplateViewElement *_templateElement;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(id)_affiliationItemsWithCircleItemElements:(id)arg0 ;
-(id)_leftFooterButtonElement;
-(id)_profileImageElement;
-(id)_rightFooterButtonElement;
-(id)initWithPhysicalCirclesTemplateViewElement:(id)arg0 ;
-(void)_footerLeftButtonAction:(id)arg0 ;
-(void)_footerRightButtonAction:(id)arg0 ;
-(void)_loadImagesWithReason:(NSInteger)arg0 ;
-(void)_reloadFooterViewAnimated:(BOOL)arg0 ;
-(void)_reloadInstructionsView;
-(void)_styleAttributedString:(id)arg0 withStyle:(id)arg1 ;
-(void)artworkRequest:(id)arg0 didLoadImage:(id)arg1 ;
-(void)dealloc;
-(void)documentDidUpdate:(id)arg0 ;
-(void)loadView;
-(void)onboardingCircles:(id)arg0 didRemoveAffiliationItem:(id)arg1 ;
-(void)onboardingCircles:(id)arg0 didSelectAffiliationItem:(id)arg1 atIndex:(NSInteger)arg2 ;
-(void)physicalCirclesDOMFeature:(id)arg0 didRequestAnimation:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif